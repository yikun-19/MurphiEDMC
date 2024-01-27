const
    child_num: 2;
    addr_num: 1;
    chan_num: 5;
    data_num: 2;

type
    addr: Scalarset(addr_num);
    data_type: Scalarset(data_num);
    chan: 1 .. 5;
    child: Scalarset(child_num);
    cache_state: enum{None,Trunk,Branch,Tip};
    op_type: enum{Empty, AcquireBlock, AcquirePerm, ProbeBlock, ProbePerm, ProbeAck, ProbeAckData, Grant, GrantData, GrantAck, Release, ReleaseData, ReleaseAck};
    trans: enum{toN, toB, toT, NtoB, NtoT, BtoT, TtoB, TtoN, BtoN, TtoT, BtoB, NtoN};

    -- *Todo: change sink to follow the tilelink spec.
    msg_type: record 
        opcode: op_type;
        para: trans; 
        src: child; 
        sink: child;
        address: addr;
        data: data_type; 
    end;
    
    cache_record: record
        state: cache_state;
        data: data_type;
        dirty: boolean;
    end;
    
    L1_cache: record 
        cache: array[addr] of cache_record;
        pending: array[addr] of op_type;
    end;
    
    L2_cache: record
        L1: array[child] of L1_cache;
        link1: array[child] of array[chan] of msg_type;
        cache: array[addr] of cache_record;
        slave_pending: array[child] of array[addr] of op_type;
        master_pending: array[addr] of op_type;
        directory: array[child] of array[addr] of cache_state;
    end;

    L3_cache: record
        L2: array[child] of L2_cache;
        link2: array[child] of array[chan] of msg_type;
        cache: array[addr] of cache_record;
        pending: array[child] of array[addr] of op_type;
        directory: array[child] of array[addr] of cache_state;
    end;

var
    L3: L3_cache;
    memdata: array[addr] of data_type;
    auxdata: array[addr] of data_type;

Procedure link1_send(op:op_type; para:trans; src:child; sink:child; a: addr; d: data_type);
var msg:msg_type;
Begin
    msg.opcode  := op;
    msg.para    := para;
    msg.src     := src;
    msg.sink    := sink;
    msg.address := a;
    msg.data    := d;

    switch op
        case AcquireBlock, AcquirePerm:
            L3.L2[sink].link1[src][1] := msg;

        case ProbeBlock, ProbePerm:
            L3.L2[sink].link1[src][2] := msg;

        case Release, ReleaseData, ProbeAck, ProbeAckData:
            L3.L2[sink].link1[src][3] := msg;

        case Grant, GrantData, ReleaseAck:
            L3.L2[sink].link1[src][4] := msg;

        case GrantAck:
            L3.L2[sink].link1[src][5] := msg;
    endswitch;
End;

Procedure link2_send(op:op_type; para:trans; src:child; sink:child; a: addr; d: data_type);
var msg:msg_type;
Begin
    msg.opcode  := op;
    msg.para    := para;
    msg.src     := src;
    msg.sink    := sink;
    msg.address := a;
    msg.data    := d;

    switch op
        case AcquireBlock, AcquirePerm:
            L3.link2[src][1] := msg;

        case ProbeBlock, ProbePerm:
            L3.link2[src][2] := msg;

        case Release, ReleaseData, ProbeAck, ProbeAckData:
            L3.link2[src][3] := msg;

        case Grant, GrantData, ReleaseAck:
            L3.link2[src][4] := msg;

        case GrantAck:
            L3.link2[src][5] := msg;
    endswitch;
End;

function state_collect(): boolean;
var tip_num : 0..1;
begin
    tip_num := 0;
    for a : addr do
        if L3.cache[a].state = Tip then
            if tip_num = 0 then
                tip_num := 1;
            else
                return false;
            endif;
        endif;
        for i : child do
            if L3.L2[i].cache[a].state = Tip then
                if tip_num = 0 then
                    tip_num := 1;
                else
                    return false;
                endif;
            endif;
            for j : child do
                if L3.L2[i].L1[j].cache[a].state = Tip then
                    if tip_num = 0 then
                        tip_num := 1;
                    else
                        return false;
                    endif;
                endif;
            endfor;
        endfor;
    endfor;
    return true;
end;

-- modify data
ruleset i : child; j : child; a : addr; d: data_type do
alias L1 : L3.L2[i].L1 do
    rule "store"
        L1[j].cache[a].state = Tip
    ==>
        L1[j].cache[a].dirty := true;
        L1[j].cache[a].data := d;
        auxdata[a] := d;
    endrule;
endalias;
endruleset;

-- L1 sends msg
ruleset i : child; j : child; a : addr do 
alias L1 : L3.L2[i].L1;
      link : L3.L2[i].link1[j] do
    rule "send_Acquire_toB"
        L1[j].cache[a].state = None &
        L1[j].pending[a] != GrantData &
        L1[j].pending[a] != Grant &
        L1[j].pending[a] != ReleaseAck
    ==>
    begin
        link1_send(AcquireBlock, NtoB, j, i, a, UNDEFINED);
        L1[j].pending[a] := GrantData;
    endrule;

    rule "send_Acquire_toT"
        (L1[j].cache[a].state = None | L1[j].cache[a].state = Branch) &
        L1[j].pending[a] != GrantData &
        L1[j].pending[a] != Grant &
        L1[j].pending[a] != ReleaseAck
    ==>
    begin
        if L1[j].cache[a].state = None then
            link1_send(AcquireBlock, NtoT, j, i, a, UNDEFINED);
            L1[j].pending[a] := GrantData;
        elsif L1[j].cache[a].state = Branch then
            link1_send(AcquirePerm, BtoT, j, i, a, UNDEFINED);
            L1[j].pending[a] := Grant;
        endif;
    endrule;

    rule "send_Release"
        (L1[j].cache[a].state = Branch | L1[j].cache[a].state = Tip)&
        link[3].opcode = Empty &
        L1[j].pending[a] != GrantData & 
        L1[j].pending[a] != Grant &
        L1[j].pending[a] != ReleaseAck
    ==>
    begin
        if L1[j].cache[a].state = Branch then 
            link1_send(Release, BtoN, j, i, a, UNDEFINED);
        elsif L1[j].cache[a].state = Tip then
            if !L1[j].cache[a].dirty then
                link1_send(Release, TtoN, j, i, a, UNDEFINED);
            else
                link1_send(ReleaseData, TtoN, j, i, a, L1[j].cache[a].data);
                L1[j].cache[a].dirty := false; -- 原来没有
            endif;
        endif;
        L1[j].cache[a].state := None;
        L1[j].pending[a] := ReleaseAck;
    endrule;
endalias;
endruleset;

-- L1 responds
ruleset i : child; j : child do 
alias L1 : L3.L2[i].L1;
      link : L3.L2[i].link1[j] do
    rule "respond_Grant"
        (link[4].opcode = Grant | link[4].opcode = GrantData)&
        (link[4].para = toB | link[4].para = toT) 
    ==>
    var m : msg_type;
    begin
        m := link[4];
        if m.opcode = GrantData then
            L1[j].cache[m.address].data := m.data;
        endif;
        if m.para = toB then
            L1[j].cache[m.address].state := Branch;
        elsif m.para = toT then
            L1[j].cache[m.address].state := Tip;
        endif;
        undefine link[4];
        link[4].opcode := Empty;
        L1[j].pending[m.address] := Empty;
        link1_send(GrantAck, UNDEFINED, j, i, m.address, UNDEFINED);
    endrule;

    rule "respond_Probe"
        (link[2].opcode = ProbePerm | link[2].opcode = ProbeBlock) &
        (link[2].para = toN | link[2].para = toB) &
        L1[j].pending[link[2].address] != ReleaseAck
    ==>
    var m : msg_type;
    begin
        m := link[2];
        if m.para = toN then
            if L1[j].cache[m.address].state = None then
                link1_send(ProbeAck, NtoN, m.src, m.sink, m.address, UNDEFINED);
            elsif L1[j].cache[m.address].state = Branch then
                link1_send(ProbeAck, BtoN, m.src, m.sink, m.address, UNDEFINED);
            elsif L1[j].cache[m.address].state = Tip then
                if m.opcode = ProbeBlock then
                    if L1[j].cache[m.address].dirty then
                        link1_send(ProbeAckData, TtoN, m.src, m.sink, m.address, L1[j].cache[m.address].data);
                    else
                        link1_send(ProbeAck, TtoN, m.src, m.sink, m.address, UNDEFINED);
                    endif;
                endif;
            endif;
            undefine link[2];
            link[2].opcode := Empty;
            L1[j].cache[m.address].state := None;
        elsif m.para = toB then
            if L1[j].cache[m.address].state = None then
                link1_send(ProbeAck, NtoN, m.src, m.sink, m.address, UNDEFINED);
            elsif L1[j].cache[m.address].state = Tip then
                if m.opcode = ProbeBlock then
                    if L1[j].cache[m.address].dirty then
                        link1_send(ProbeAckData, TtoB, m.src, m.sink, m.address, L1[j].cache[m.address].data);
                    else
                        link1_send(ProbeAck, TtoB, m.src, m.sink, m.address, UNDEFINED);
                    endif;
                    L1[j].cache[m.address].state := Branch;
                endif;
            endif;
            undefine link[2];
            link[2].opcode := Empty;
        endif;   
    endrule;

    rule "receive_ReleaseAck"
        link[4].opcode = ReleaseAck
    ==>
        L1[j].pending[link[4].address] := Empty;
        undefine link[4];
        link[4].opcode := Empty;
    endrule;
endalias;
endruleset;


-- L2 receive
-- from L1
ruleset i : child; j : child do 
alias L1 : L3.L2[i].L1;
      L2 : L3.L2;
      link : L3.L2[i].link1[j]
do
    rule "L2_receive_AcquirePerm"
        link[1].opcode = AcquirePerm
    ==>
    var m : msg_type; 
    var src : child;
    var another : child; 
    begin
        for k : child do
            if k != j then
                another := k;
            endif;
        endfor;
        m := link[1];
        src := j;
        if L2[i].cache[m.address].state = Tip then
            if  L2[i].directory[another][m.address] = None &
                forall k : child do
                L2[i].slave_pending[k][m.address] != ProbeAck & 
                L2[i].slave_pending[k][m.address] != ProbeAckData endforall &
                L2[i].slave_pending[src][m.address] != GrantAck then
                    undefine link[1];
                    link[1].opcode := Empty;
                    if L2[i].directory[src][m.address] = Branch then
                        link1_send(Grant, toT, src, i, m.address, UNDEFINED);
                    elsif L2[i].directory[src][m.address] = None then
                        link1_send(GrantData, toT, src, i, m.address, L2[i].cache[m.address].data);
                    endif;
                    L2[i].directory[src][m.address] := Tip;
                    L2[i].cache[m.address].state := Trunk;
                    L2[i].slave_pending[src][m.address] := GrantAck;
            elsif L2[i].directory[another][m.address] = Branch then
                if  L2[i].slave_pending[another][m.address] != ProbeAck & 
                    L2[i].slave_pending[another][m.address] != ProbeAckData & 
                    L2[i].slave_pending[another][m.address] != GrantAck then
                    link1_send(ProbePerm, toN, another, i, m.address, UNDEFINED);
                    L2[i].slave_pending[another][m.address] := ProbeAck;
                endif;
            endif;
        elsif L2[i].cache[m.address].state = Branch & 
              L2[i].master_pending[m.address] != Grant & 
              L2[i].master_pending[m.address] != GrantData &
              L2[i].master_pending[m.address] != ReleaseAck then
            link2_send(AcquirePerm, BtoT, i, UNDEFINED, m.address, UNDEFINED);
            L2[i].master_pending[m.address] := Grant;
        elsif L2[i].cache[m.address].state = None & 
              L2[i].master_pending[m.address] != Grant & 
              L2[i].master_pending[m.address] != GrantData &
              L2[i].master_pending[m.address] != ReleaseAck then
            link2_send(AcquireBlock, NtoT, i, UNDEFINED, m.address, UNDEFINED);
            L2[i].master_pending[m.address] := Grant;
        endif;
    endrule;

    rule "L2_receive_AcquireBlock"
        link[1].opcode = AcquireBlock
    ==>
    var m : msg_type; 
    var src : child;
    var another : child; 
    begin
        for k : child do
            if k != j then
                another := k;
            endif;
        endfor;
        m := link[1];
        src := j;
        if m.para = NtoB then
            if  L2[i].cache[m.address].state = None &
                L2[i].master_pending[m.address] != Grant &
                L2[i].master_pending[m.address] != GrantData &
                L2[i].master_pending[m.address] != ReleaseAck then  
                link2_send(AcquireBlock, NtoB, i, UNDEFINED, m.address, UNDEFINED);
                L2[i].master_pending[m.address] := GrantData;
            elsif (L2[i].cache[m.address].state = Branch | L2[i].cache[m.address].state = Tip) then
                if  L2[i].slave_pending[src][m.address] != GrantAck &
                    L2[i].slave_pending[src][m.address] != ProbeAck &
                    L2[i].slave_pending[src][m.address] != ProbeAckData then
                    undefine link[1];
                    link[1].opcode := Empty;
                    link1_send(GrantData, toB, src, i, m.address, L2[i].cache[m.address].data);
                    L2[i].directory[src][m.address] := Branch;
                    L2[i].slave_pending[src][m.address] := GrantAck;
                endif;
            elsif L2[i].cache[m.address].state = Trunk & L2[i].directory[another][m.address] = Tip then
                if  L2[i].slave_pending[another][m.address] != ProbeAck & 
                    L2[i].slave_pending[another][m.address] != ProbeAckData & 
                    L2[i].slave_pending[another][m.address] != GrantAck then
                    link1_send(ProbeBlock, toB, another, i, m.address, UNDEFINED);
                    L2[i].slave_pending[another][m.address] := ProbeAckData;
                endif;
            endif;
        elsif m.para = NtoT then
            if  L2[i].cache[m.address].state = None &
                L2[i].master_pending[m.address] != Grant &
                L2[i].master_pending[m.address] != GrantData &
                L2[i].master_pending[m.address] != ReleaseAck then    
                link2_send(AcquireBlock, NtoT, i, UNDEFINED, m.address, UNDEFINED);
                L2[i].master_pending[m.address] := GrantData;
            elsif L2[i].cache[m.address].state = Branch then
                if  L2[i].master_pending[m.address] != GrantData &
                    L2[i].master_pending[m.address] != Grant &
                    L2[i].master_pending[m.address] != ReleaseAck then
                    link2_send(AcquirePerm, BtoT, i, UNDEFINED, m.address, UNDEFINED);
                    L2[i].master_pending[m.address] := Grant;
                endif;
            elsif L2[i].cache[m.address].state = Tip then
                if L2[i].directory[another][m.address] = None &
                    forall k : child do
                    L2[i].slave_pending[k][m.address] != ProbeAck & 
                    L2[i].slave_pending[k][m.address] != ProbeAckData endforall &
                    L2[i].slave_pending[src][m.address] != GrantAck then
                        undefine link[1];
                        link[1].opcode := Empty;
                        link1_send(GrantData, toT, src, i, m.address, L2[i].cache[m.address].data);
                        L2[i].cache[m.address].state := Trunk;
                        L2[i].directory[src][m.address] := Tip;
                        L2[i].slave_pending[src][m.address] := GrantAck;
                elsif L2[i].directory[another][m.address] = Branch then
                    if  L2[i].slave_pending[another][m.address] != ProbeAck & 
                        L2[i].slave_pending[another][m.address] != ProbeAckData & 
                        L2[i].slave_pending[another][m.address] != GrantAck then
                        link1_send(ProbePerm, toN, another, i, m.address, UNDEFINED);
                        L2[i].slave_pending[another][m.address] := ProbeAck;
                    endif;
                endif;
            elsif L2[i].cache[m.address].state = Trunk & L2[i].directory[another][m.address] = Tip then
                if  L2[i].slave_pending[another][m.address] != ProbeAck & 
                    L2[i].slave_pending[another][m.address] != ProbeAckData & 
                    L2[i].slave_pending[another][m.address] != GrantAck then
                    link1_send(ProbeBlock, toN, another, i, m.address, UNDEFINED);
                    L2[i].slave_pending[another][m.address] := ProbeAckData;
                endif;
            endif;
        endif;
    endrule;

    rule "L2_receive_ProbeAck[Data]"
        link[3].opcode = ProbeAck |
        link[3].opcode = ProbeAckData
    ==>
    var m : msg_type; 
    var src : child;
    begin
        m := link[3];
        src := j;
        undefine link[3];
        link[3].opcode := Empty;
        if m.para = TtoN then
            L2[i].directory[src][m.address] := None;
            L2[i].cache[m.address].state := Tip;
        elsif m.para = TtoB then
            L2[i].directory[src][m.address] := Branch;
            L2[i].cache[m.address].state := Tip;
        elsif m.para = BtoN | m.para = NtoN then
            L2[i].directory[src][m.address] := None;
        endif;
        if m.opcode = ProbeAckData then
            L2[i].cache[m.address].data := m.data;
            L2[i].cache[m.address].dirty := true;
        endif;
        L2[i].slave_pending[src][m.address] := Empty;
    endrule;

    -- 手册里ReleaseAck没有地址参数？
    rule "L2_receive_Release[Data]"
        link[3].opcode = Release | 
        link[3].opcode = ReleaseData
    ==>
    var m : msg_type; 
    var src : child;
    begin
        m := link[3];
        src := j;
        undefine link[3];
        link[3].opcode := Empty;
        if m.para = TtoN then
            L2[i].cache[m.address].state := Tip;
        endif;
        if m.opcode = ReleaseData then
            L2[i].cache[m.address].data := m.data;
            L2[i].cache[m.address].dirty := true;
        endif;
        L2[i].directory[src][m.address] := None;
        link1_send(ReleaseAck, UNDEFINED, src, i, m.address, UNDEFINED);
    endrule;

    rule "L2_receive_GrantAck"
        link[5].opcode = GrantAck |
        link[5].opcode = GrantAck
    ==>
    var m : msg_type; 
    var src : child;
    begin
        m := link[5];
        src := j;
        undefine link[5];
        link[5].opcode := Empty;
        L2[i].slave_pending[src][m.address] := Empty;
    endrule;
endalias;
endruleset;

-- L2 receive
-- from L3
ruleset i : child do 
alias L2 : L3.L2;
      link : L3.link2[i]
do
    rule "L2_receive_Grant"
        link[4].opcode = Grant | 
        link[4].opcode = GrantData
    ==>
    var m : msg_type;
    begin
        m := link[4];
        if m.opcode = GrantData then
            L2[i].cache[m.address].data := m.data;
        endif;
        if m.para = toB then
            L2[i].cache[m.address].state := Branch;
        elsif m.para = toT then
            L2[i].cache[m.address].state := Tip;
        endif;
        undefine link[4];
        link[4].opcode := Empty;
        L2[i].master_pending[m.address] := Empty;
        link2_send(GrantAck, UNDEFINED, i, UNDEFINED, m.address, UNDEFINED);
    endrule;

    rule "L2_receive_ReleaseAck"
        link[4].opcode = ReleaseAck
    ==>
    var m : msg_type;
    begin
        m := link[4];
        undefine link[4];
        L2[i].master_pending[m.address] := Empty;
        link[4].opcode := Empty;
    endrule;

    rule "L2_receive_Probe(Perm/Block)"
        link[2].opcode = ProbeBlock | 
        link[2].opcode = ProbePerm
    ==>
    var m : msg_type;
    begin
        m := link[2];
        if L2[i].cache[m.address].state = None & L2[i].master_pending[m.address] != ReleaseAck then
            undefine link[2];
            link[2].opcode := Empty;
            link2_send(ProbeAck, NtoN, i, UNDEFINED, m.address, UNDEFINED);
        elsif m.opcode = ProbePerm & L2[i].cache[m.address].state = Branch then
            if  forall k : child do
                L2[i].directory[k][m.address] = None endforall &
                L2[i].master_pending[m.address] != ReleaseAck then
                    undefine link[2];
                    link[2].opcode := Empty;
                    L2[i].cache[m.address].state := None;
                    link2_send(ProbeAck, BtoN, i, UNDEFINED, m.address, UNDEFINED);
            else
                for k : child do
                    if  L2[i].directory[k][m.address] = Branch &
                        L2[i].slave_pending[k][m.address] != ProbeAck & 
                        L2[i].slave_pending[k][m.address] != ProbeAckData & 
                        L2[i].slave_pending[k][m.address] != GrantAck then
                        link1_send(ProbePerm, toN, k, i, m.address, UNDEFINED);
                        L2[i].slave_pending[k][m.address] := ProbeAck;
                    endif;
                endfor;
            endif;
        elsif m.opcode = ProbeBlock then
            if L2[i].cache[m.address].state = Tip then
                if  forall k : child do
                    L2[i].directory[k][m.address] = None endforall &
                    L2[i].master_pending[m.address] != ReleaseAck then
                        undefine link[2];
                        link[2].opcode := Empty;
                        L2[i].cache[m.address].state := None;
                        if L2[i].cache[m.address].dirty then
                            link2_send(ProbeAckData, TtoN, i, UNDEFINED, m.address, L2[i].cache[m.address].data);
                            L2[i].cache[m.address].dirty := false;
                        else
                            link2_send(ProbeAck, TtoN, i, UNDEFINED, m.address, UNDEFINED);
                        endif;
                else
                    for k : child do
                        if  L2[i].directory[k][m.address] = Branch &
                            L2[i].slave_pending[k][m.address] != ProbeAck & 
                            L2[i].slave_pending[k][m.address] != ProbeAckData & 
                            L2[i].slave_pending[k][m.address] != GrantAck then
                                link1_send(ProbePerm, toN, k, i, m.address, UNDEFINED);
                                L2[i].slave_pending[k][m.address] := ProbeAck;
                        endif;
                    endfor;
                endif;
            elsif L2[i].cache[m.address].state = Trunk then
                for k : child do
                    if  L2[i].directory[k][m.address] = Tip &
                        L2[i].slave_pending[k][m.address] != ProbeAck & 
                        L2[i].slave_pending[k][m.address] != ProbeAckData & 
                        L2[i].slave_pending[k][m.address] != GrantAck then
                            link1_send(ProbeBlock, toN, k, i, m.address, UNDEFINED);
                            L2[i].slave_pending[k][m.address] := ProbeAck;
                    endif;
                endfor;
            endif;
        endif;
    endrule;
endalias;
endruleset;

-- L2 send msg
ruleset i: child; a : addr do
alias L2 : L3.L2
do
    rule "L2_send_Release1"
        (L2[i].cache[a].state = Tip | 
         L2[i].cache[a].state = Branch) &
        forall j : child do
            L2[i].directory[j][a] = None
        endforall &
        L2[i].master_pending[a] != ReleaseAck &
        L2[i].master_pending[a] != Grant &
        L2[i].master_pending[a] != GrantAck
    ==>
    begin
        if L2[i].cache[a].state = Branch then
            link2_send(Release, BtoN, i, UNDEFINED, a, UNDEFINED);
        elsif L2[i].cache[a].state = Tip then
            link2_send(ReleaseData, TtoN, i, UNDEFINED, a, L2[i].cache[a].data);
        endif;
        undefine L2[i].cache[a].data;
        L2[i].cache[a].state := None;
        L2[i].cache[a].dirty := false;
        L2[i].master_pending[a] := ReleaseAck;
    endrule;

    rule "L2_send_Release2"
        (L2[i].cache[a].state = Tip | 
         L2[i].cache[a].state = Branch) &
        exists j : child do
            L2[i].directory[j][a] = Branch
        end
    ==>
    begin
        for k : child do
            if  L2[i].directory[k][a] = Branch &
                L2[i].slave_pending[k][a] != ProbeAck & 
                L2[i].slave_pending[k][a] != ProbeAckData & 
                L2[i].slave_pending[k][a] != GrantAck then
                link1_send(ProbePerm, toN, k, i, a, UNDEFINED);
                L2[i].slave_pending[k][a] := ProbeAck;
            endif;
        endfor;
    endrule;

    rule "L2_send_Release3"
        L2[i].cache[a].state = Trunk &
        exists j : child do
            L2[i].directory[j][a] = Tip
        end
    ==>
    begin
        for k : child do
            if  L2[i].directory[k][a] = Tip &
                L2[i].slave_pending[k][a] != ProbeAck & 
                L2[i].slave_pending[k][a] != ProbeAckData & 
                L2[i].slave_pending[k][a] != GrantAck then
                    link1_send(ProbeBlock, toN, k, i, a, UNDEFINED);
                    L2[i].slave_pending[k][a] := ProbeAck;
            endif;
        endfor;
    endrule;
endalias;
endruleset;

-- L3 receive
ruleset i : child do
alias link : L3.link2[i] do
    rule "L3_receive_AcquirePerm"
        link[1].opcode = AcquirePerm
    ==>
    var m : msg_type; 
    begin
        m := link[1];
        if L3.cache[m.address].state = Tip then
            if  forall j : child do
                    j != i -> L3.directory[j][m.address] = None
                endforall &
                forall k : child do
                    L3.pending[k][m.address] != ProbeAck & 
                    L3.pending[k][m.address] != ProbeAckData endforall &
                L3.pending[i][m.address] != GrantAck then
                undefine link[1];
                link[1].opcode := Empty;
                if L3.directory[i][m.address] = Branch then
                    link2_send(Grant, toT, i, UNDEFINED, m.address, UNDEFINED);
                elsif L3.directory[i][m.address] = None then
                    link2_send(GrantData, toT, i, UNDEFINED, m.address, L3.cache[m.address].data);
                endif;
                L3.directory[i][m.address] := Tip;
                L3.cache[m.address].state := Trunk;
                L3.pending[i][m.address] := GrantAck;
            elsif exists j : child do
                    j != i & L3.directory[j][m.address] = Branch
                  end then
                    for j : child do
                        if  j != i & L3.directory[j][m.address] = Branch &
                            L3.pending[j][m.address] != ProbeAck & 
                            L3.pending[j][m.address] != ProbeAckData & 
                            L3.pending[j][m.address] != GrantAck then
                            link2_send(ProbePerm, toN, j, UNDEFINED, m.address, UNDEFINED);
                            L3.pending[j][m.address] := ProbeAck;
                        endif;
                    endfor;
            endif;
        elsif L3.cache[m.address].state = None then
            L3.cache[m.address].data := memdata[m.address];
            L3.cache[m.address].state := Tip;
            auxdata[m.address] := memdata[m.address];
        endif;
    endrule;

    rule "L3_receive_AcquireBlock"
        link[1].opcode = AcquireBlock
    ==>
    var m : msg_type; 
    begin
        m := link[1];
        if L3.cache[m.address].state = None then
            L3.cache[m.address].data := memdata[m.address];
            L3.cache[m.address].state := Tip;
            auxdata[m.address] := memdata[m.address];
        elsif m.para = NtoB then
            if L3.cache[m.address].state = Tip &
               forall j : child do
                  j != i -> L3.directory[j][m.address] = None endforall then
                    if forall j : child do
                        L3.pending[j][m.address] != ProbeAck & 
                        L3.pending[j][m.address] != ProbeAckData endforall &
                        L3.pending[i][m.address] != GrantAck then
                        undefine link[1];
                        link[1].opcode := Empty;
                        link2_send(GrantData, toB, i, UNDEFINED, m.address, L3.cache[m.address].data);
                        L3.directory[i][m.address] := Branch;
                        L3.pending[i][m.address] := GrantAck;
                    endif;
            elsif L3.cache[m.address].state = Tip & 
                  exists j : child do
                    j != i & L3.directory[j][m.address] = Branch end then
                        for j : child do
                            if j != i & L3.directory[j][m.address] = Branch then
                                if  L3.pending[j][m.address] != ProbeAck & 
                                    L3.pending[j][m.address] != ProbeAckData & 
                                    L3.pending[j][m.address] != GrantAck then
                                        link2_send(ProbePerm, toN, j, UNDEFINED, m.address, UNDEFINED);
                                        L3.pending[j][m.address] := ProbeAckData;
                                endif;
                            endif;
                        endfor;
            endif;
        elsif m.para = NtoT then
            if L3.cache[m.address].state = Tip then
                if  forall j : child do
                    j != i -> L3.directory[j][m.address] = None
                    endforall &
                    forall j : child do
                        L3.pending[j][m.address] != ProbeAck & 
                        L3.pending[j][m.address] != ProbeAckData endforall &
                        L3.pending[i][m.address] != GrantAck then
                        undefine link[1];
                        link[1].opcode := Empty;
                        link2_send(GrantData, toT, i, UNDEFINED, m.address, L3.cache[m.address].data);
                        L3.cache[m.address].state := Trunk;
                        L3.directory[i][m.address] := Tip;
                        L3.pending[i][m.address] := GrantAck;
                elsif L3.cache[m.address].state = Tip & 
                      exists j : child do
                        j != i & L3.directory[j][m.address] = Branch end then
                        for j : child do
                            if j != i & L3.directory[j][m.address] = Branch then
                                if  L3.pending[j][m.address] != ProbeAck & 
                                    L3.pending[j][m.address] != ProbeAckData & 
                                    L3.pending[j][m.address] != GrantAck then
                                    link2_send(ProbePerm, toN, j, UNDEFINED, m.address, UNDEFINED);
                                    L3.pending[j][m.address] := ProbeAck;
                                endif;
                            endif;
                        endfor;
                endif;
            elsif L3.cache[m.address].state = Trunk & 
                  exists j : child do
                    j != i & L3.directory[j][m.address] = Tip end then
                    for j : child do
                        if j != i & L3.directory[j][m.address] = Tip then
                            if  L3.pending[j][m.address] != ProbeAck & 
                                L3.pending[j][m.address] != ProbeAckData & 
                                L3.pending[j][m.address] != GrantAck then
                                link2_send(ProbeBlock, toN, j, UNDEFINED, m.address, UNDEFINED);
                                L3.pending[j][m.address] := ProbeAckData;
                            endif;
                        endif;
                    endfor;
            endif;
        endif;
    endrule;

    rule "L3_receive_ProbeAck[Data]"
        (link[3].opcode = ProbeAck |
         link[3].opcode = ProbeAck) |
        (link[3].opcode = ProbeAckData |
         link[3].opcode = ProbeAckData)
    ==>
    var m : msg_type; 
    begin
        m := link[3];
        undefine link[3];
        link[3].opcode := Empty;
        if m.para = TtoN then
            L3.directory[i][m.address] := None;
            L3.cache[m.address].state := Tip;
        elsif m.para = TtoB then
            L3.directory[i][m.address] := Branch;
            L3.cache[m.address].state := Tip;
        elsif m.para = BtoN | m.para = NtoN then
            L3.directory[i][m.address] := None;
        endif;
        if m.opcode = ProbeAckData then
            L3.cache[m.address].data := m.data;
            L3.cache[m.address].dirty := true;
        endif;
        L3.pending[i][m.address] := Empty;
    endrule;

    rule "L3_receive_Release[Data]"
        (link[3].opcode = Release | 
         link[3].opcode = ReleaseData) |
        (link[3].opcode = Release | 
         link[3].opcode = ReleaseData)
    ==>
    var m : msg_type; 
    begin
        m := link[3];
        undefine link[3];
        link[3].opcode := Empty;
        if m.para = TtoN then
            L3.cache[m.address].state := Tip;
        endif;
        if m.opcode = ReleaseData then
            L3.cache[m.address].data := m.data;
            L3.cache[m.address].dirty := true;
        endif;
        L3.directory[i][m.address] := None;
        link2_send(ReleaseAck, UNDEFINED, i, UNDEFINED, m.address, UNDEFINED);
    endrule;

    rule "L3_receive_GrantAck"
        link[5].opcode = GrantAck |
        link[5].opcode = GrantAck
    ==>
    begin
        L3.pending[i][link[5].address] := Empty;
        undefine link[5];
        link[5].opcode := Empty;
    endrule;
endalias;
endruleset;

-- L3 send msg
ruleset a: addr do
    rule "L3_send_Release1"
        L3.cache[a].state = Tip &
        forall j : child do
            L3.directory[j][a] = None
        end
    ==>
        if L3.cache[a].dirty then
            memdata[a] := L3.cache[a].data;
            L3.cache[a].dirty := false;
        endif;
        L3.cache[a].state := None;
        undefine L3.cache[a].data;
    endrule;

    rule "L3_send_Release2"
        L3.cache[a].state = Tip &
        exists j : child do
            L3.directory[j][a] = Branch
        end
    ==>
        for k : child do
            if  L3.directory[k][a] = Branch &
                L3.pending[k][a] != ProbeAck & 
                L3.pending[k][a] != ProbeAckData & 
                L3.pending[k][a] != GrantAck then
                link2_send(ProbePerm, toN, k, UNDEFINED, a, UNDEFINED);
                L3.pending[k][a] := ProbeAck;
            endif;
        endfor;
    endrule;

    rule "L3_send_Release3"
        L3.cache[a].state = Trunk &
        forall j : child do
            L3.directory[j][a] = Tip
        end
    ==>
        for k : child do
            if  L3.directory[k][a] = Tip &
                L3.pending[k][a] != ProbeAck & 
                L3.pending[k][a] != ProbeAckData & 
                L3.pending[k][a] != GrantAck then
                link2_send(ProbeBlock, toN, k, UNDEFINED, a, UNDEFINED);
                L3.pending[k][a] := ProbeAck;
            endif;
        endfor;
    endrule;
endruleset;

startstate "Init"
begin
    for a : addr do
        L3.cache[a].state := None;
        L3.cache[a].dirty := false;
        undefine L3.cache[a].data;

        for i : child do
            undefine L3.link2[i];
            for c : chan do
                L3.link2[i][c].opcode := Empty;
            endfor;
            L3.pending[i][a] := Empty;
            L3.directory[i][a] := None;

            L3.L2[i].cache[a].state := None;
            L3.L2[i].cache[a].dirty := false;
            undefine L3.L2[i].cache[a].data;
            L3.L2[i].master_pending[a] := Empty;

            for j : child do
                L3.L2[i].slave_pending[j][a] := Empty;
                L3.L2[i].directory[j][a] := None;
                undefine L3.L2[i].link1[j];
                for c : chan do
                    L3.L2[i].link1[j][c].opcode := Empty;
                endfor;

                L3.L2[i].L1[j].cache[a].state := None;
                L3.L2[i].L1[j].cache[a].dirty := false;
                undefine L3.L2[i].L1[j].cache[a].data;
                L3.L2[i].L1[j].pending[a] := Empty;
            endfor;
        endfor;
    endfor;

    for a : addr do
        for d : data_type do 
            memdata[a] := d;
            auxdata[a] := d;
        endfor;
    endfor;
endstartstate;

invariant "newest"
forall i : child; j : child; a : addr do
    (L3.L2[i].L1[j].cache[a].state = Tip | L3.L2[i].L1[j].cache[a].state = Branch) -> (!IsUndefined(L3.L2[i].L1[j].cache[a].data) & L3.L2[i].L1[j].cache[a].data = auxdata[a])
endforall;

-- invariant "newest_2"
-- forall a : addr do
--     L3.cache[a].state = None -> memdata[a] = auxdata[a]
-- endforall;

invariant "global_filter"
    state_collect();

invariant "leaf_is_not_trunk"
forall i : child; j : child; a : addr do
    L3.L2[i].L1[j].cache[a].state != Trunk
endforall;

invariant "invalid_not_have_valid_child_r"
(forall a : addr do
    L3.cache[a].state = None -> 
    forall i : child do
        L3.directory[i][a] = None 
    endforall
endforall) &
(forall i : child; a : addr do
    L3.L2[i].cache[a].state = None -> 
    forall j : child do
        L3.L2[i].directory[j][a] = None 
    endforall
endforall);

invariant "trunk_not_have_branch_child_r"
(forall a : addr do
    L3.cache[a].state = Trunk -> 
    forall i : child do
        L3.directory[i][a] != Branch
    endforall
endforall) &
(forall i : child; a : addr do
    L3.L2[i].cache[a].state = Trunk -> 
    forall j : child do
        L3.L2[i].directory[j][a] != Branch
    endforall
endforall);

invariant "branch_not_have_t_child_r"
(forall a : addr do
    L3.cache[a].state = Branch -> 
    forall i : child do
        L3.directory[i][a] != Tip & L3.directory[i][a] != Trunk
    endforall
endforall) &
(forall i : child; a : addr do
    L3.L2[i].cache[a].state = Branch -> 
    forall j : child do
        L3.L2[i].directory[j][a] != Tip & L3.L2[i].directory[j][a] != Trunk
    endforall
endforall);

invariant "trunk_have_t_child_r"
(forall a : addr do
    L3.cache[a].state = Trunk -> 
    exists i : child do
        L3.directory[i][a] = Trunk | L3.directory[i][a] = Tip
    end
endforall) &
(forall i : child; a : addr do
    L3.L2[i].cache[a].state = Trunk -> 
    exists j : child do
        L3.L2[i].directory[j][a] = Trunk | L3.L2[i].directory[j][a] = Tip
    end
endforall);