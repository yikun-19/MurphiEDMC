const
    num_L1: 4;
    num_L2: 2;
    num_L3: 1;
    child_num: 2;
    stor_num: 2;
    msg_num: 2;

type
    L1_node: num_L3+num_L2+1 .. num_L3+num_L2+num_L1;
    L2_node: num_L3+1 .. num_L3+num_L2;
    L3_node: 1 .. num_L3;
    node: 1 .. num_L1+num_L2+num_L3;
    master_node: num_L3+1 .. num_L3+num_L2+num_L1;
    slave_node: 1 .. num_L3+num_L2;
    child_range: 0 .. child_num-1;
    addr: 1 .. 2;  -- addr: 1 .. 4;
    data_type: 1 .. 2;
    extend_data_type: 0 .. 2;
    chan_num: 1 .. 5;
    stor_range: 1 .. stor_num;
    extend_stor_range: 0 .. stor_num;
    msg_range: 1 .. msg_num;
    extend_msg_range: 0 .. msg_num; 
    cache_state: enum{None,Trunk,Branch,Tip};
    op_type: enum{Empty, AcquireBlock, AcquirePerm, ProbeBlock, ProbePerm, ProbeAck, ProbeAckData, Grant, GrantData, GrantAck, Release, ReleaseData, ReleaseAck};
    trans: enum{toN, toB, toT, NtoB, NtoT, BtoT, TtoB, TtoN, BtoN, TtoT, BtoB, NtoN};

    -- *Todo: change sink to follow the tilelink spec.
    msg_type: record 
        opcode: op_type;
        para: trans; 
        src: master_node; 
        sink: slave_node;
        address: addr;
        data: data_type; 
    end;
    
    cacheline: record
        address: addr;
        state: cache_state;
        data: data_type;
        dirty: boolean;
    end;
    
    cache_record: record
        used: extend_stor_range;
        line: array[stor_range] of cacheline;
        valid: array[addr] of extend_stor_range;
    end;

    L1_cache: record 
        paren: node;
        cache: cache_record;
        pending: array[addr] of op_type;
    end;
    
    Ln_cache: record
        child: node;
        paren: node;
        cache: cache_record;
        master_pending: array[child_range] of array[addr] of op_type;
        slave_pending: array[addr] of op_type;
        directory: array[child_range] of array[addr] of cache_state;
    end;

    channel: record
        messages: array[msg_range] of msg_type;
        used: extend_msg_range;
    end;
var
    L1: array[L1_node] of L1_cache;
    Ln: array[slave_node] of Ln_cache;
    link : array[master_node] of array[chan_num] of channel;
    memdata: array[addr] of data_type;
    auxdata: array[addr] of data_type;

procedure removeReco(var c_record:cache_record; address:addr);
    if c_record.valid[address] <= stor_num & c_record.valid[address] >= 1 then
        for i:= c_record.valid[address] to c_record.used-1 do 
            c_record.line[i] := c_record.line[i+1];
            c_record.valid[c_record.line[i+1].address] := i;
        endfor;
        
        c_record.valid[address] := 0;
        c_record.used := c_record.used - 1;
    endif;
end;

function updateReco(var c_record:cache_record; address:addr; info:cacheline): boolean;
    if c_record.valid[address] <= stor_num & c_record.valid[address] >= 1 then
        c_record.line[c_record.valid[address]] := info;
        return true;
    elsif c_record.used < stor_num then
        c_record.used := c_record.used + 1;
        c_record.line[c_record.used] := info;
        c_record.valid[address] := c_record.used;
        return true;
    else
        return false;
    endif;
end;

function getState(c_record:cache_record; address:addr): cache_state;
    if c_record.valid[address] = 0 then
        return None;
    else
        return c_record.line[c_record.valid[address]].state;
    endif;
end;

function getCacheState(i:node; address:addr): cache_state;
var local_cache:cache_record;
begin
    if i >= num_L3+num_L2+1 & i <= num_L3+num_L2+num_L1 then
        local_cache := L1[i].cache;
        return getState(local_cache,  address);
    else
        local_cache := Ln[i].cache;
        return getState(local_cache,  address);
    endif;
end;

/*function getData(c_record:cache_record; address:addr): extend_data_type;
    if c_record.valid[address] = 0 then
        return 0;
    else
        return c_record.line[c_record.valid[address]].data;
    endif;
end;*/

function addMsg(var ch:channel; msg:msg_type): boolean;
    if ch.used < msg_num then
        ch.used := ch.used + 1;
        ch.messages[ch.used] := msg;
        return true;
    else 
        return false;
    endif;
end;

procedure popMsg(var ch:channel);
    for i:= 1 to ch.used - 1 do 
        ch.messages[i] := ch.messages[i+1];
    endfor;
    ch.used := ch.used - 1 ;
end;

function topMsg(var ch:channel): msg_type;
var emptyMsg: msg_type;
begin
    if ch.used = 0 then
        return emptyMsg;
    else
        return ch.messages[1];
    endif;
end;

function send(op: op_type; para: trans; src: master_node; sink: node; a: addr; d: data_type; n: node; up: boolean; r: child_range): boolean;
var msg:msg_type;
var isL1: boolean;
Begin
    msg.opcode  := op;
    msg.para    := para;
    msg.src     := src;
    msg.sink    := sink;
    msg.address := a;
    msg.data    := d;
    isL1 := n >= num_L3+num_L2+1 & n <= num_L3+num_L2+num_L1 ? true : false;

    alias
        c: isL1 ? L1[n].pending[a] : (up ? Ln[n].master_pending[r][a] : Ln[n].slave_pending[a]); 
    do 
    switch op
        case AcquireBlock, AcquirePerm:
            if c != GrantData & c != Grant & c != ReleaseAck then 
                return addMsg(link[src][1], msg);
            else
                return false;
            endif;
        case ProbeBlock, ProbePerm:
            if c != ProbeAck & c != ProbeAckData & c != GrantAck  then 
                return addMsg(link[src][2], msg);
            else
                return false;
            endif;
        case Release, ReleaseData, ProbeAck, ProbeAckData:
            if c != GrantData & c != Grant & c != ReleaseAck then
                return addMsg(link[src][3], msg);
            else
                return false;
            endif;
        case Grant, GrantData:
            if c != ProbeAck & c != ProbeAckData & c != GrantAck then
                return addMsg(link[src][4], msg);
            else
                return false;
            endif;
        case ReleaseAck:
            return addMsg(link[src][4], msg);
        case GrantAck:
            return addMsg(link[src][5], msg);
    endswitch;
    endalias;
End;



-- L1 sends msg
ruleset i : L1_node; j : addr do 
alias l1: L1[i].cache;
do
    rule "send_Acquire_toB"
        getState(l1,j) = None
    ==>
    begin
        if send(AcquireBlock, NtoB, i, UNDEFINED, j, UNDEFINED, i, false, 0) then
            L1[i].pending[j] := GrantData;
        endif;
    endrule;

    rule "send_Acquire_toT"
        (getState(l1,j) = None  | getState(l1,j) = Branch) 
    ==>
    begin
        if getState(l1,j) = None then
            if send(AcquireBlock, NtoT, i, UNDEFINED, j, UNDEFINED, i, false, 0) then
                L1[i].pending[j] := GrantData;
            endif;
        elsif getState(l1,j) = Branch then
            if send(AcquirePerm, BtoT, i, UNDEFINED, j, UNDEFINED, i, false, 0) then 
                L1[i].pending[j] := Grant;
            endif;
        endif;
    endrule;

    rule "send_Release"
        (getState(l1,j) = Branch | getState(l1,j) = Tip)
    ==>
    var sendSucc : boolean;
    begin
        
        if getState(l1,j) = Branch then 
            sendSucc := send(Release, BtoN, i, UNDEFINED, j, UNDEFINED, i, false, 0);
        elsif getState(l1,j) = Tip then
            if !l1.line[l1.valid[j]].dirty then
                sendSucc := send(Release, TtoN, i, UNDEFINED, j, UNDEFINED, i, false, 0);
            else
                sendSucc := send(ReleaseData, TtoN, i, UNDEFINED, j, l1.line[l1.valid[j]].data, i, false, 0);
                l1.line[l1.valid[j]].dirty := false;
            endif;
        endif;
        if sendSucc then
            removeReco(l1, j);
            L1[i].pending[j] := ReleaseAck;
        endif;
    endrule;

endalias;
endruleset;

-- L1 responds
ruleset i : L1_node do 
    rule "respond_Grant"
        link[i][4].used > 0 &
        (link[i][4].messages[1].opcode = Grant | link[i][4].messages[1].opcode = GrantData)&
        (link[i][4].messages[1].para = toB | link[i][4].messages[1].para = toT) 
    ==>
    var m : msg_type;
    var cline : cacheline;
    begin
        m := link[i][4].messages[1];
        cline.dirty := false;
        cline.address := m.address;
        if L1[i].cache.valid[m.address] > 0 then
            cline := L1[i].cache.line[L1[i].cache.valid[m.address]];
        endif;
        if m.opcode = GrantData then
            cline.data := m.data;
        endif;
        if m.para = toB then
            cline.state := Branch;
        elsif m.para = toT then
            cline.state := Tip;
        endif;
        if updateReco(L1[i].cache, m.address, cline) & 
           send(GrantAck, UNDEFINED, i, UNDEFINED, m.address, UNDEFINED, i, false, 0)
        then
            popMsg(link[i][4]);
            L1[i].pending[m.address] := Empty;
        endif;
    endrule;

    rule "respond_Probe"
        link[i][2].used > 0 &
        (link[i][2].messages[1].opcode = ProbePerm | link[i][2].messages[1].opcode = ProbeBlock) &
        (link[i][2].messages[1].para = toN | link[i][2].messages[1].para = toB)
    ==>
    var m : msg_type;
    var sendSucc : boolean;
    begin
        alias 
            l1: L1[i].cache;
        do
        m := link[i][2].messages[1];
        if m.para = toN then
            if getState(l1, m.address) = None then
                sendSucc := send(ProbeAck, NtoN, m.src, UNDEFINED, m.address, UNDEFINED, i, false, 0);
            elsif getState(l1, m.address) = Branch then
                sendSucc := send(ProbeAck, BtoN, m.src, UNDEFINED, m.address, UNDEFINED, i, false, 0);
            elsif getState(l1, m.address) = Tip then
                if m.opcode = ProbeBlock then
                    if l1.line[l1.valid[m.address]].dirty then
                        sendSucc := send(ProbeAckData, TtoN, m.src, UNDEFINED, m.address, l1.line[l1.valid[m.address]].data, i, false, 0);
                    else
                        sendSucc := send(ProbeAck, TtoN, m.src, UNDEFINED, m.address, UNDEFINED, i, false, 0);
                    endif;
                endif;
            endif;
            if sendSucc then
                popMsg(link[i][2]);
                removeReco(l1, m.address);
            endif;
        elsif m.para = toB then
            if getState(l1, m.address) = None then
                sendSucc := send(ProbeAck, NtoN, m.src, UNDEFINED, m.address, UNDEFINED, i, false, 0);
            elsif getState(l1, m.address) = Tip then
                if m.opcode = ProbeBlock then
                    if l1.line[l1.valid[m.address]].dirty then
                        sendSucc := send(ProbeAckData, TtoB, m.src, UNDEFINED, m.address, l1.line[l1.valid[m.address]].data, i, false, 0);
                    else
                        sendSucc := send(ProbeAck, TtoB, m.src, UNDEFINED, m.address, UNDEFINED, i, false, 0);
                    endif;
                    if sendSucc then
                        l1.line[l1.valid[m.address]].state := Branch;
                    endif;
                endif;
            elsif getState(l1, m.address) = Branch then
                sendSucc := true;
            endif;
            if sendSucc then
                popMsg(link[i][2]);
            endif;
        endif; 
        endalias;  
    endrule;

    rule "receive_ReleaseAck"
        link[i][4].used > 0 &
        link[i][4].messages[1].opcode = ReleaseAck
    ==>
        L1[i].pending[link[i][4].messages[1].address] := Empty;
        popMsg(link[i][4]);
    endrule;
endruleset;


-- Ln receive msg from  upper caches
ruleset i : master_node do
    -- *Perhaps we need to use one array to cover all the cache nodes.
    -- *Another way is enumerate nodes twice and use topo array.
    -- *response immediately

    rule "receive_Acquire1"
        link[i][1].used > 0 &
        (link[i][1].messages[1].opcode = AcquirePerm | link[i][1].messages[1].opcode = AcquireBlock)
    ==>
    var m : msg_type;  
    var p : slave_node;
    var child_index : child_range;
    begin
        m := link[i][1].messages[1];    
        if i >= num_L3+num_L2+1 & i <= num_L3+num_L2+num_L1 then
            p := L1[i].paren;
        elsif i >= num_L3+1 & i<= num_L3+num_L2 then
            p := Ln[i].paren;
        endif;
        child_index := i - Ln[p].child;
        
        alias
            ln: Ln[p].cache;
        do

        if m.para = NtoB & (getState(ln, m.address) = Branch |  getState(ln, m.address) = Tip) then
            if send(GrantData, toB, i, UNDEFINED, m.address, ln.line[ln.valid[m.address]].data, p, true, child_index) then
                Ln[p].directory[child_index][m.address] := Branch;
                popMsg(link[i][1]);
                Ln[p].master_pending[child_index][m.address] := GrantAck;
            endif; 
        elsif getState(ln, m.address) = Tip & forall k := Ln[p].child to Ln[p].child + child_num-1 do  k != i -> Ln[p].directory[k-Ln[p].child][m.address] = None end then
            if Ln[p].directory[child_index][m.address] = None then
                if send(GrantData, toT, i, UNDEFINED, m.address, ln.line[ln.valid[m.address]].data, p, true, child_index) then 
                    Ln[p].directory[child_index][m.address] := Tip;
                    ln.line[ln.valid[m.address]].state := Trunk;
                    popMsg(link[i][1]);
                    Ln[p].master_pending[child_index][m.address] := GrantAck;
                endif;
            elsif Ln[p].directory[child_index][m.address] = Branch then
                if send(Grant, toT, i, UNDEFINED, m.address, UNDEFINED, p, true, child_index) then
                    Ln[p].directory[child_index][m.address] := Tip;
                    ln.line[ln.valid[m.address]].state := Trunk;
                    popMsg(link[i][1]);
                    Ln[p].master_pending[child_index][m.address] := GrantAck;
                endif;
            endif;
        endif;
        endalias;
    endrule;

    -- *need to probe
    rule "receive_Acquire2"
        link[i][1].used > 0 &
        (link[i][1].messages[1].opcode = AcquirePerm | link[i][1].messages[1].opcode = AcquireBlock) &
        (link[i][1].messages[1].para = NtoT | link[i][1].messages[1].para = BtoT) 
    ==>
    var m : msg_type;  
    var p : slave_node;
    begin
        m := link[i][1].messages[1];
        if i >= num_L3+num_L2+1 & i <= num_L3+num_L2+num_L1 then
            p := L1[i].paren;
        elsif i >= num_L3+1 & i<= num_L3+num_L2 then
            p := Ln[i].paren;
        endif;
        if getState(Ln[p].cache, m.address) = Tip &
        exists k := Ln[p].child to Ln[p].child + child_num-1 do
            k != i & Ln[p].directory[k-Ln[p].child][m.address] = Branch
        end then
            for k := Ln[p].child to Ln[p].child + child_num-1 do
                if k != i & Ln[p].directory[k-Ln[p].child][m.address] = Branch then
                    if send(ProbePerm, toN, k, UNDEFINED, m.address, UNDEFINED, p, true, k-Ln[p].child) then 
                        Ln[p].master_pending[k-Ln[p].child][m.address] := ProbeAck;
                    endif;
                endif;
            endfor;
        endif;
    endrule;

    -- *current cache is Trunk, need to probe
    rule "receive_Acquire3"
        link[i][1].used > 0 &
        link[i][1].messages[1].opcode = AcquireBlock &
        (link[i][1].messages[1].para = NtoT | link[i][1].messages[1].para = NtoB)
    ==>
    var m : msg_type;
    var pa : trans;
    var p : slave_node;
    begin
        m := link[i][1].messages[1];
        if m.para = NtoT then
            pa := toN;
        elsif m.para = NtoB then
            pa := toB;
        endif;
        if i >= num_L3+num_L2+1 & i <= num_L3+num_L2+num_L1 then
            p := L1[i].paren;
        elsif i >= num_L3+1 & i<= num_L3+num_L2 then
            p := Ln[i].paren;
        endif;
        if getState(Ln[p].cache, m.address) = Trunk then
            for k := Ln[p].child to Ln[p].child + child_num-1 do
                if k != i & Ln[p].directory[k-Ln[p].child][m.address] = Tip then
                    if send(ProbeBlock, pa, k, UNDEFINED, m.address, UNDEFINED, p, true, k-Ln[p].child)  then
                        Ln[p].master_pending[k-Ln[p].child][m.address] := ProbeAckData;
                    endif;
                endif;
            endfor;
        endif;
    endrule;

    -- * Other situation
    rule "receive Acquire4"
        link[i][1].used > 0 &
        (link[i][1].messages[1].opcode = AcquireBlock | link[i][1].messages[1].opcode = AcquirePerm)
    ==>
    var m : msg_type;
    var p : slave_node;
    var sendSucc : boolean;
    var cline : cacheline;
    begin
        m := link[i][1].messages[1];
        if i >= num_L3+num_L2+1 & i <= num_L3+num_L2+num_L1 then
            p := L1[i].paren;
        elsif i >= num_L3+1 & i<= num_L3+num_L2 then
            p := Ln[i].paren;
        endif;
        alias
            ln: Ln[p].cache;
        do
        if p = num_L3 & getState(Ln[p].cache, m.address) = None then 
            cline.address := m.address;
            cline.data := memdata[m.address];
            cline.state := Tip;
            cline.dirty := false;
            if updateReco(ln, m.address, cline) then
                auxdata[m.address] := memdata[m.address];
            endif;
        elsif p >= num_L3+1 & p<= num_L3+num_L2 & getState(Ln[p].cache, m.address) = None then
            if m.para = NtoT then
                sendSucc:= send(AcquireBlock, NtoT, p, UNDEFINED, m.address, UNDEFINED, p, false, 0);
            elsif m.para = NtoB then
                sendSucc:= send(AcquireBlock, NtoB, p, UNDEFINED, m.address, UNDEFINED, p, false, 0);
            endif;
            if sendSucc then
                Ln[p].slave_pending[m.address] := GrantData;
            endif;
        elsif p >= num_L3+1 & p<= num_L3+num_L2 & (m.para = NtoT | m.para = BtoT) & 
        getState(Ln[p].cache, m.address) = Branch then
            sendSucc:= send(AcquireBlock, BtoT, p, UNDEFINED, m.address, UNDEFINED, p, false, 0);
            if sendSucc then
                Ln[p].slave_pending[m.address] := Grant;
            endif;
        endif;
        endalias;
    endrule;

    -- * modify dirty on time
    rule "receive_ProbeAck[Data]"
        link[i][3].used > 0 &
        (link[i][3].messages[1].opcode = ProbeAck | link[i][3].messages[1].opcode = ProbeAckData)
    ==>
    var m : msg_type;
    var p : slave_node;
    begin -- 不应该收到ProbeAck就认为L2是Tip，此时L2可能已经收到L1的Release而变为了Tip，且正在释放数据
        m := link[i][3].messages[1];
        if i >= num_L3+num_L2+1 & i <= num_L3+num_L2+num_L1 then
            p := L1[i].paren;
        elsif i >= num_L3+1 & i<= num_L3+num_L2 then
            p := Ln[i].paren;
        endif;
        alias
            ln: Ln[p].cache;
        do
        if m.para = TtoN then
            Ln[p].directory[i-Ln[p].child][m.address] := None;
            ln.line[ln.valid[m.address]].state := Tip;
        elsif m.para = TtoB then
            Ln[p].directory[i-Ln[p].child][m.address] := Branch;
            ln.line[ln.valid[m.address]].state := Tip;
        elsif m.para = BtoN | m.para = NtoN then
            Ln[p].directory[i-Ln[p].child][m.address] := None;
        endif;
        if m.opcode = ProbeAckData then
            ln.line[ln.valid[m.address]].data := m.data;
            ln.line[ln.valid[m.address]].dirty := true;
        endif;
        popMsg(link[i][3]);
        Ln[p].master_pending[i-Ln[p].child][m.address] := Empty;
        endalias;
    endrule;

    rule "receive_Release[Data]"
        link[i][3].used > 0 &
        (link[i][3].messages[1].opcode = Release | link[i][3].messages[1].opcode = ReleaseData) &
        (link[i][3].messages[1].para = BtoN | link[i][3].messages[1].para = TtoN)
    ==>
    var m : msg_type;
    var p : slave_node;
    begin
        m := link[i][3].messages[1];
        if i >= num_L3+num_L2+1 & i <= num_L3+num_L2+num_L1 then
            p := L1[i].paren;
        elsif i >= num_L3+1 & i<= num_L3+num_L2 then
            p := Ln[i].paren;
        endif;
        alias
            ln: Ln[p].cache;
        do
        
        if send(ReleaseAck, UNDEFINED, i, UNDEFINED, m.address, UNDEFINED, p, true, i-Ln[p].child) then
            if m.para = TtoN then
                ln.line[ln.valid[m.address]].state := Tip;
            endif;
            if m.opcode = ReleaseData then
                ln.line[ln.valid[m.address]].data := m.data;
                ln.line[ln.valid[m.address]].dirty := true;
            endif;
            popMsg(link[i][3]);
            Ln[p].directory[i-Ln[p].child][m.address] := None;
        endif;
        endalias;
    endrule;

    rule "receive_GrantAck"
        link[i][5].used > 0 &
        link[i][5].messages[1].opcode = GrantAck
    ==>
    var p : slave_node;
    begin
        if i >= num_L3+num_L2+1 & i <= num_L3+num_L2+num_L1 then
            p := L1[i].paren;
        elsif i >= num_L3+1 & i<= num_L3+num_L2 then
            p := Ln[i].paren;
        endif;
        Ln[p].master_pending[i-Ln[p].child][link[i][5].messages[1].address] := Empty;
        popMsg(link[i][5]);
    endrule;

    rule "receive_ReleaseAck2"
        link[i][4].used > 0 &
        link[i][4].messages[1].opcode = ReleaseAck &
        i >= num_L3+1 & 
        i<= num_L3+num_L2
    ==>
        Ln[i].slave_pending[link[i][4].messages[1].address] := Empty;
        popMsg(link[i][4]);
    endrule;
endruleset;

-- Ln receive msg from  lower caches
ruleset i : L2_node do
alias
    ln: Ln[i].cache;
do
    rule "respond_Grant2"
        link[i][4].used > 0 &
        (link[i][4].messages[1].opcode = Grant | link[i][4].messages[1].opcode = GrantData)&
        (link[i][4].messages[1].para = toB | link[i][4].messages[1].para = toT) 
    ==>
    var m : msg_type;
    var cline : cacheline;
    begin
        m := link[i][4].messages[1];
        if m.opcode = GrantData then
            cline.data := m.data;
            cline.dirty := false;
            cline.address := m.address;
            if updateReco(ln, m.address, cline) then
                if m.para = toB then
                    ln.line[ln.valid[m.address]].state := Branch;
                elsif m.para = toT then
                    ln.line[ln.valid[m.address]].state := Tip;
                endif;
                if send(GrantAck, UNDEFINED, i, UNDEFINED, m.address, UNDEFINED, i, false, 0) then
                    popMsg(link[i][4]);
                    Ln[i].slave_pending[m.address] := Empty;
                endif;
            endif;
        else
            if m.para = toB then
                ln.line[ln.valid[m.address]].state := Branch;
            elsif m.para = toT then
                ln.line[ln.valid[m.address]].state := Tip;
            endif;
            if send(GrantAck, UNDEFINED, i, UNDEFINED, m.address, UNDEFINED, i, false, 0) then
                popMsg(link[i][4]);
                Ln[i].slave_pending[m.address] := Empty;
            endif;
        endif;
        
        
    endrule;

    rule "respond_Probe2"
        link[i][2].used > 0 &
        (link[i][2].messages[1].opcode = ProbePerm | link[i][2].messages[1].opcode = ProbeBlock) &
        (link[i][2].messages[1].para = toN | link[i][2].messages[1].para = toB) 
    ==>
    var m : msg_type;
    var sendSucc: boolean;
    begin
        m := link[i][2].messages[1];
        if m.para = toN then
            if getState(ln, m.address) = None then
                if send(ProbeAck, NtoN, m.src, UNDEFINED, m.address, UNDEFINED, i, false, 0) then 
                    popMsg(link[i][2]);
                    removeReco(ln, m.address);
                endif;
            elsif getState(ln, m.address) = Branch & 
            forall k := Ln[i].child to Ln[i].child + child_num-1 do Ln[i].directory[k-Ln[i].child][m.address] = None end then
                if send(ProbeAck, BtoN, m.src, UNDEFINED, m.address, UNDEFINED, i, false, 0) then 
                    popMsg(link[i][2]);
                    removeReco(ln, m.address);
                endif;
            elsif getState(ln, m.address) = Branch &  
            exists k := Ln[i].child to Ln[i].child + child_num-1 do Ln[i].directory[k-Ln[i].child][m.address] = Branch end then
                for k := Ln[i].child to Ln[i].child + child_num-1 do
                    if Ln[i].directory[k-Ln[i].child][m.address] = Branch then
                        if send(ProbeBlock, toN, k, UNDEFINED, m.address, UNDEFINED, i, true, k-Ln[i].child) then
                            Ln[i].master_pending[k-Ln[i].child][m.address] := ProbeAckData;
                        endif;
                    endif;
                endfor; 
            elsif getState(ln, m.address) = Tip & 
            -- need to make sure that no messages in channel
            forall k := Ln[i].child to Ln[i].child + child_num-1 do Ln[i].directory[k-Ln[i].child][m.address] = None end then
                if m.opcode = ProbeBlock then
                    if ln.line[ln.valid[m.address]].dirty then
                        if send(ProbeAckData, TtoN, m.src, UNDEFINED, m.address, ln.line[ln.valid[m.address]].data, i, 
                        false, 0) then
                            popMsg(link[i][2]);
                            removeReco(ln, m.address);
                        endif;
                    elsif !ln.line[ln.valid[m.address]].dirty then
                        if send(ProbeAck, TtoN, m.src, UNDEFINED, m.address, UNDEFINED, i, false, 0) then
                            popMsg(link[i][2]);
                            removeReco(ln, m.address);
                        endif;
                    endif;
                endif;
            elsif getState(ln, m.address) = Tip & 
            exists k := Ln[i].child to Ln[i].child + child_num-1 do Ln[i].directory[k-Ln[i].child][m.address] = Branch end then
                for k := Ln[i].child to Ln[i].child + child_num-1 do
                    if k != i & Ln[i].directory[k-Ln[i].child][m.address] = Branch then
                        if  send(ProbeBlock, toN, k, UNDEFINED, m.address, UNDEFINED, i, true, k-Ln[i].child) then
                            Ln[i].master_pending[k-Ln[i].child][m.address] := ProbeAckData;
                        endif;
                    endif;
                endfor; 
            endif;
        elsif m.para = toB then
            sendSucc := false;
            if getState(ln, m.address) = None then
                sendSucc := send(ProbeAck, NtoN, m.src, UNDEFINED, m.address, UNDEFINED, i, false, 0);
            elsif getState(ln, m.address) = Tip then
                if ln.line[ln.valid[m.address]].dirty then
                    sendSucc := send(ProbeAckData, TtoB, m.src, UNDEFINED, m.address, ln.line[ln.valid[m.address]].data, i, false, 0);
                elsif !ln.line[ln.valid[m.address]].dirty then
                    sendSucc := send(ProbeAck, TtoB, m.src, UNDEFINED, m.address, UNDEFINED, i, false, 0);
                endif;
                if sendSucc then
                    ln.line[ln.valid[m.address]].state := Branch;
                endif;
            elsif getState(ln, m.address) = Branch then
                sendSucc := true;
            endif;
            if sendSucc then
                popMsg(link[i][2])
            endif;
        endif;   
    endrule;
endalias;
endruleset;

-- Ln sends msg
ruleset k : slave_node; j : addr do
alias
    ln: Ln[k].cache;
do
    rule "slave_send_Release1"
        (getState(ln,j) = Tip | getState(ln,j) = Branch) &
        forall i := Ln[k].child to Ln[k].child + child_num-1 do
            Ln[k].directory[i-Ln[k].child][j] = None
        end
    ==>
    var p : slave_node;
    var sendSucc: boolean;
    begin
        if k >= 1  & k <= num_L3 then
            memdata[j] := ln.line[ln.valid[j]].data;
            removeReco(ln, j);
        elsif k >= num_L3+1 & k <= num_L3+num_L2 then
            p := Ln[k].paren;
            if getState(ln,j) = Branch then 
                sendSucc := send(Release, BtoN, k, UNDEFINED, j, UNDEFINED, k, false, 0);
            elsif getState(ln,j) = Tip then
                if !ln.line[ln.valid[j]].dirty then
                    sendSucc := send(Release, TtoN, k, UNDEFINED, j, UNDEFINED, k, false, 0);
                else
                    sendSucc := send(ReleaseData, TtoN, k, UNDEFINED, j, ln.line[ln.valid[j]].data, k, false, 0);
                    if sendSucc then
                        ln.line[ln.valid[j]].dirty := false; -- 原来没有
                    endif;
                endif;
            endif;
            if sendSucc then
                removeReco(ln, j);
                Ln[k].slave_pending[j] := ReleaseAck; 
            endif; 
        endif;
    endrule;

    rule "slave_send_Release2"
        getState(ln,j) = Tip &
        exists i := Ln[k].child to Ln[k].child + child_num-1 do
            Ln[k].directory[i-Ln[k].child][j] = Branch
        end
    ==>
        for i := Ln[k].child to Ln[k].child + child_num-1 do
            if  Ln[k].directory[i-Ln[k].child][j] = Branch  then
                if Ln[k].master_pending[i-Ln[k].child][j] != GrantAck & send(ProbePerm, toN, i, UNDEFINED, j, UNDEFINED, k, true, i-Ln[k].child) then
                    Ln[k].master_pending[i-Ln[k].child][j] := ProbeAck;
                endif;
            endif;
        endfor;
    endrule;

    rule "slave_send_Release3"
        getState(ln,j)= Trunk &
        exists i := Ln[k].child to Ln[k].child + child_num-1 do
            Ln[k].directory[i-Ln[k].child][j] = Tip
        end
    ==>
        for i := Ln[k].child to Ln[k].child + child_num-1 do
            if  Ln[k].directory[i-Ln[k].child][j] = Tip then
                if send(ProbeBlock, toN, i, UNDEFINED, j, UNDEFINED, k, true, i-Ln[k].child) then
                    Ln[k].master_pending[i-Ln[k].child][j] := ProbeAckData;
                endif;
            endif;
        endfor;
    endrule;
endalias;
endruleset;

ruleset i : L1_node; j : addr; d: data_type do
alias
    l1: L1[i].cache;
do
    rule "store"
        getState(l1,j) = Tip
    ==>
        l1.line[l1.valid[j]].dirty := true;
        l1.line[l1.valid[j]].data := d;
        auxdata[j] := d;
    endrule;
endalias;
endruleset;

startstate "Init"
begin
    -- * enum the topology
    
    for i : L1_node do
        L1[i].paren := i / 2;
        undefine L1[i].cache;
        for j : addr do
            L1[i].cache.valid[j] := 0;
            L1[i].cache.used := 0;
            L1[i].pending[j] := Empty;
        endfor;

        for l : chan_num do
            undefine link[i][l];
            link[i][l].used := 0;
        endfor;  
    endfor;

    for i : L2_node do
        Ln[i].child := i * 2;
        Ln[i].paren := 1;
        undefine Ln[i].cache;
        for j : addr do
            Ln[i].cache.valid[j] := 0;
            Ln[i].cache.used := 0;
            Ln[i].slave_pending[j] := Empty;
            for k : child_range do
                Ln[i].directory[k][j] := None;
                Ln[i].master_pending[k][j] := Empty;
            endfor;
        endfor;

        for l : chan_num do
            undefine link[i][l];
            link[i][l].used := 0;
        endfor;  
    endfor;
    
    for i : L3_node do
        Ln[i].child := i + 1;
        Ln[i].paren := i;
        -- undefine Ln[i].cache;
        for j : addr do
            Ln[i].cache.valid[j] := 0;
            Ln[i].cache.used := 0;
            Ln[i].slave_pending[j] := Empty;
            for k : child_range do
                Ln[i].directory[k][j] := None;
                Ln[i].master_pending[k][j] := Empty;
            endfor;
        endfor;
    endfor;
    
    
    for j : addr; d : data_type do 
        memdata[j] := d;
        auxdata[j] := d;
    endfor;
endstartstate;

-- invariant "newest"
-- forall i : L1_node; j : addr do
--     (getState(L1[i].cache, j) = Tip | getState(L1[i].cache, j) = Branch) -> ( L1[i].cache.valid[j]!= 0 & L1[i].cache.line[L1[i].cache.valid[j]].data = auxdata[j])
-- endforall;



-- it seems useless
-- invariant "leaf_is_no_trunk"
-- forall i: L1_node; a : addr do
--     getState(L1[i].cache, a) != Trunk
-- endforall;


/* invariant "newest_2"
forall i : L3_node; j : addr do
    Ln[i].cache[j].state = None -> memdata[j] = auxdata[j]
endforall; */




-- invariant "OneTip"
-- forall i : node; j : node; a : addr do
--     (i != j -> !(getCacheState(i,a) = Tip & getCacheState(j,a) = Tip))
-- endforall;

-- invariant "invalid_not_have_valid_child_r"
-- forall i : slave_node; a : addr do
--     getCacheState(i,a) = None -> 
--     forall j := Ln[i].child to Ln[i].child + child_num-1 do
--         getCacheState(j,a) = None       
--     end
-- endforall;

-- invariant "trunk_not_have_branch_child_r"
-- forall i : slave_node; a : addr do
--     getCacheState(i,a) = Trunk -> 
--     forall j := Ln[i].child to Ln[i].child + child_num-1 do
--         forall l := 1 to 5 do
--             link[j][l].used = 0
--         end -> 
--         getCacheState(j,a) != Branch       
--     end
-- endforall;

-- invariant "trunk_have_t_child_r"
-- forall i : slave_node; a : addr do
--     getCacheState(i,a) = Trunk ->
--     exists j := Ln[i].child to Ln[i].child + child_num-1 do
--         forall l := 1 to 5 do
--             link[j][l].used = 0
--         end ->
--         getCacheState(j,a) = Trunk | getCacheState(j,a) = Tip       
--     end
-- endforall;

-- invariant "branch_not_have_t_child_r"
-- forall i : slave_node; a : addr do
--     getCacheState(i,a) = Branch -> 
--     forall j := Ln[i].child to Ln[i].child + child_num-1 do
--         getCacheState(j,a) != Trunk & getCacheState(j,a) != Tip       
--     end
-- endforall;

-- invariant "with_special_topo_L3_isTip"
-- forall a : addr do
--     !(getCacheState(1,a) = Tip & getCacheState(2,a) = None & getCacheState(3,a) = Branch &
--       getCacheState(4,a) = None & getCacheState(5,a) = None & getCacheState(6,a) = Branch &
--       getCacheState(7,a) = Branch 
--     )
-- endforall;


invariant "test_reachable_state_1"
forall a : addr do
 !( getCacheState(1, a) = None & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_2"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Trunk & getCacheState(6, a) = None & getCacheState(7, a) = Tip )
endforall;

invariant "test_reachable_state_3"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Trunk & getCacheState(6, a) = Tip & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_4"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Tip & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_5"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Tip & getCacheState(6, a) = None & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_6"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Tip & getCacheState(6, a) = Branch & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_7"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Tip & getCacheState(6, a) = Branch & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_8"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = Trunk & getCacheState(4, a) = None & getCacheState(5, a) = Tip & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_9"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = Trunk & getCacheState(4, a) = Tip & getCacheState(5, a) = None & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_10"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = Tip & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_11"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = Tip & getCacheState(4, a) = None & getCacheState(5, a) = Branch & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_12"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = Tip & getCacheState(4, a) = Branch & getCacheState(5, a) = None & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_13"
forall a : addr do
 !( getCacheState(1, a) = Trunk & getCacheState(2, a) = Tip & getCacheState(4, a) = Branch & getCacheState(5, a) = Branch & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_14"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_15"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_16"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_17"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_18"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = None & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_19"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_20"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = Branch & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_21"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = None & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_22"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = Branch & getCacheState(3, a) = None & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_23"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_24"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_25"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_26"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_27"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_28"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_29"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_30"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = None & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_31"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_32"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_33"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_34"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = None & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_35"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_36"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = None & getCacheState(7, a) = Branch )
endforall;

invariant "test_reachable_state_37"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = None )
endforall;

invariant "test_reachable_state_38"
forall a : addr do
 !( getCacheState(1, a) = Tip & getCacheState(2, a) = Branch & getCacheState(4, a) = Branch & getCacheState(5, a) = Branch & getCacheState(3, a) = Branch & getCacheState(6, a) = Branch & getCacheState(7, a) = Branch )
endforall;


