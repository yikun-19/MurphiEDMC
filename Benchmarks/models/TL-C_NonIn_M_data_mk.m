--* use send*(A/B/C/D/E)Msg and pop*Msg to replace current statement
--* notice: add emptiness checking of channel* in the guard (chan1[b].buffer[1].used > 0)
--*         if grant channel is full, dont receive acquire msg (check the return value of send*Msg)       

--* multi address
--* add addr param in channedl and maintain it during transaction
--* increase cache strorage and encapsulate function(procedure)
--* Perhaps we can define a function to generate cacheline from (Grant/Release/ProbeAck) msg

-- NI-TL-C_v4.m 


Const 
    coreNum: 4;
    allNodeNum: 7;
    allBranchNum: 2;
    ChanNum: 5;
    chanBuffNum: 2;
    DataNum: 2;
    storNum: 2;
    addNum: 2;

Type
    dataType: Scalarset(DataNum);

    chanType: 1 .. ChanNum;

    chanBuffType: 1 .. chanBuffNum;

    extend_chan_buff_Type : 0 .. chanBuffNum;

    coreId: allNodeNum-coreNum+1 .. allNodeNum; 

    l2Id: 2..3;

    l3Id: 1..1;

    cacheId: 1..allNodeNum-coreNum;
    -- cacheId: Scalarset(allNodeNum-coreNum);

    nodeId: 1..allNodeNum;
    -- nodeId: Scalarset(allNodeNum);

    addrType: 1..addNum;

    storType: 1..storNum;

    extend_stor_Type: 0..storNum;

    branchType: 1.. allBranchNum;
    
    stateType: enum{None,Trunk,Branch,Tip};
    
    AType: enum{Acquire};

    BType: enum{Probe};

    CType: enum{ProbeAck, Release};

    DType: enum{Grant, GrantData, ReleaseAck};

    EType: enum{GrantAck};
    
    growType: enum{NtoB, NtoT, BtoT};

    capType: enum{toN, toB, toT};

    pruneType: enum{BtoN, TtoN, TtoB, NtoN, BtoB};

    slave_pending_Type: enum{pending_ProbeAck, pending_GrantAck};

    master_pending_Type: enum{pending_Grant, pending_GrantData, pending_ReleaseAck};

    msgAType: record
        opcode: AType; 
        para: growType; 
        addr: addrType; 
        data: dataType; 
        dirty: boolean;
    end;

    msgBType: record
        opcode: BType; 
        para: capType; 
        addr: addrType; 
        data: dataType; 
        dirty: boolean;
    end;

    msgCType: record
        opcode: CType; 
        para: pruneType; 
        addr: addrType; 
        data: dataType; 
        dirty: boolean;
    end;

    msgDType: record
        opcode: DType; 
        para: capType; 
        addr: addrType; 
        data: dataType; 
        dirty: boolean;
    end;

    msgEType: record
        opcode: EType; 
        addr: addrType; 
        data: dataType; 
        dirty: boolean;
    end;

    chanAType: record
        buffer: array[chanBuffType] of msgAType;
        used: extend_chan_buff_Type;
    end;

    chanBType: record
        buffer: array[chanBuffType] of msgBType;
        used: extend_chan_buff_Type;
    end;

    chanCType: record
        buffer: array[chanBuffType] of msgCType;
        used: extend_chan_buff_Type;
    end;

    chanDType: record
        buffer: array[chanBuffType] of msgDType;
        used: extend_chan_buff_Type;
    end;

    chanEType: record
        buffer: array[chanBuffType] of msgEType;
        used: extend_chan_buff_Type;
    end;

    lineType: record
        addr: addrType;
        state: stateType;
        data: dataType;
        dirty: boolean;
    end;

    --* change cache type
    cacheType: record
        used: extend_stor_Type;
        line: array[storType] of lineType;
        valid: array[addrType] of extend_stor_Type;
    end;

    treeNode: Record
        cache: cacheType;
        sons: array[branchType] of nodeId;
        directory: array[branchType] of array[addrType] of stateType;
        slave_pending: array[branchType] of array[addrType] of slave_pending_Type;
        master_pending: array[addrType] of master_pending_Type;
        reqId: branchType;
        -- link: array[branchType] of array[chanType] of msgType;
        chan1: array[branchType] of chanAType;
        chan2: array[branchType] of chanBType;
        chan3: array[branchType] of chanCType;
        chan4: array[branchType] of chanDType;
        chan5: array[branchType] of chanEType;
    end;

Var
    Tree: array [nodeId] of treeNode;
    memData: array[addrType] of dataType; 
    auxData: array[addrType] of dataType;

procedure removeData(var ca:cacheType; addr:addrType);
    assert ca.valid[addr] <= storNum & ca.valid[addr] >= 0;
    if ca.valid[addr] >= 1 then
        for i:= ca.valid[addr] to ca.used-1 do
            ca.line[i] := ca.line[i+1];
            ca.valid[ca.line[i+1].addr] := i;   -- cache.valid[addr] 表示 addr 在哪一个 line 中有效 
        endfor;
        ca.valid[addr] := 0;
        ca.used := ca.used - 1;
    endif;
end;

function insertLine(var ca:cacheType; addr:addrType; line:lineType): boolean;
    assert ca.valid[addr] <= storNum & ca.valid[addr] >= 0;
    if ca.valid[addr] >=1 then              -- addr 的数据已经存放在第 ca.valid[addr] 行的 cacheline 中 
        ca.line[ca.valid[addr]] := line;    -- 把想要的 line 内容覆盖该 cacheline 的内容即可，valid 不需要修改
        return true;
    elsif ca.used < storNum then            -- addr 的数据还没有存在某一 cacheline 中
        ca.used := ca.used + 1;         
        ca.line[ca.used] := line;           -- 把想要的 line 内容放在空余的 cacheline 上
        ca.valid[addr] := ca.used;
        return true;
    else                                    -- addr 还没有存，且 cacheline 满了，则插入失败
        return false;
    endif;
end;

function getState(var ca:cacheType; addr:addrType): stateType;  -- 索引方式：addr -> line number(valid) -> data/state/dirty(line)
    if ca.valid[addr] = 0 then
        return None;
    else
        return ca.line[ca.valid[addr]].state;
    endif;
end;

function getData(var ca:cacheType; addr:addrType): dataType;  
    assert ca.valid[addr] <= storNum & ca.valid[addr] >= 1;
    return ca.line[ca.valid[addr]].data;
end;

function getDirty(var ca:cacheType; addr:addrType): boolean;
    assert ca.valid[addr] <= storNum & ca.valid[addr] >= 1;
    return ca.line[ca.valid[addr]].dirty;
end;

procedure updateState(var ca:cacheType; addr:addrType; s:stateType);
    assert ca.valid[addr] <= storNum & ca.valid[addr] >= 1;
    ca.line[ca.valid[addr]].state := s;
end;

procedure updateData(var ca:cacheType; addr:addrType; d:dataType);
    assert ca.valid[addr] <= storNum & ca.valid[addr] >= 1;
    ca.line[ca.valid[addr]].data := d;
end;

procedure updateDirty(var ca:cacheType; addr:addrType; d:boolean);
    assert ca.valid[addr] <= storNum & ca.valid[addr] >= 1;
    ca.line[ca.valid[addr]].dirty := d;
end;

function sendAMsg(var ch:chanAType; msgA:msgAType):boolean;  -- 在 channel 上发送 A 类型的 message(Acquire)
    if ch.used < chanBuffNum then
        ch.used := ch.used + 1;
        ch.buffer[ch.used] := msgA;         -- 把该 message 放在该 A channel 的 buffer 中的 used 行
        return true;
    else
        return false;
    endif;
end;

function sendBMsg(var ch:chanBType; msgB:msgBType):boolean; -- B 类型的 message(Probe)
    if ch.used < chanBuffNum then
        ch.used := ch.used + 1;
        ch.buffer[ch.used] := msgB;
        return true;
    else
        return false;
    endif;
end;

function sendCMsg(var ch:chanCType; msgC:msgCType):boolean; -- C 类型的 message(ProbeAck, Release)
    if ch.used < chanBuffNum then
        ch.used := ch.used + 1;
        ch.buffer[ch.used] := msgC;
        return true;
    else
        return false;
    endif;
end;

function sendDMsg(var ch:chanDType; msgD:msgDType):boolean; -- D 类型的 message(Grant, GrantData, ReleaseAck)
    if ch.used < chanBuffNum then
        ch.used := ch.used + 1;
        ch.buffer[ch.used] := msgD;
        return true;
    else
        return false;
    endif;
end;

function sendEMsg(var ch:chanEType; msgE:msgEType):boolean; -- E 类型的 message(GrantAck)
    if ch.used < chanBuffNum then
        ch.used := ch.used + 1;
        ch.buffer[ch.used] := msgE;
        return true;
    else
        return false;
    endif;
end;

procedure popAMsg(var ch:chanAType);     -- 在该 A channel 的 buffer 中移除(pop)最后一行的 message
    for i:= 1 to ch.used - 1 do 
        ch.buffer[i] := ch.buffer[i+1];
    endfor;
    ch.used := ch.used - 1 ;
end;

procedure popBMsg(var ch:chanBType);
    for i:= 1 to ch.used - 1 do 
        ch.buffer[i] := ch.buffer[i+1];
    endfor;
    ch.used := ch.used - 1 ;
end;

procedure popCMsg(var ch:chanCType);
    for i:= 1 to ch.used - 1 do 
        ch.buffer[i] := ch.buffer[i+1];
    endfor;
    ch.used := ch.used - 1 ;
end;

procedure popDMsg(var ch:chanDType);
    for i:= 1 to ch.used - 1 do 
        ch.buffer[i] := ch.buffer[i+1];
    endfor;
    ch.used := ch.used - 1 ;
end;

procedure popEMsg(var ch:chanEType);
    for i:= 1 to ch.used - 1 do 
        ch.buffer[i] := ch.buffer[i+1];
    endfor;
    ch.used := ch.used - 1 ;
end;

startstate "Init"
var son: 1..allNodeNum+1;
begin
    son := 2;
    for cur : l3Id do    -- 初始化 L3
        for i : branchType do
            Tree[cur].sons[i] := son;
            --* change initialization of cache
            undefine Tree[cur].cache;
            Tree[cur].cache.used := 0;
            for j : addrType do
                Tree[cur].cache.valid[j] := 0;
            endfor;
            -- Tree[cur].cache.state := None;
            -- Tree[cur].cache.dirty := false;
            -- undefine  Tree[cur].cache.data;
            undefine Tree[cur].chan1[i];
            Tree[cur].chan1[i].used := 0;
            undefine Tree[cur].chan2[i];
            Tree[cur].chan2[i].used := 0;
            undefine Tree[cur].chan3[i];
            Tree[cur].chan3[i].used := 0;
            undefine Tree[cur].chan4[i];
            Tree[cur].chan4[i].used := 0;
            undefine Tree[cur].chan5[i];
            Tree[cur].chan5[i].used := 0;
            for j : addrType do
                undefine Tree[cur].master_pending[j];
                undefine Tree[cur].slave_pending[i][j];
                Tree[cur].directory[i][j] := None;
            endfor;
            undefine Tree[cur].reqId;
            son := son + 1;
        endfor;
    endfor;

    son := 4;
    for cur : l2Id do    -- 初始化 L2
        for i : branchType do
            Tree[cur].sons[i] := son;
            undefine Tree[cur].cache;
            Tree[cur].cache.used := 0;
            for j : addrType do
                Tree[cur].cache.valid[j] := 0;
            endfor;
            -- Tree[cur].cache.state := None;
            -- Tree[cur].cache.dirty := false;
            -- undefine  Tree[cur].cache.data;
            undefine Tree[cur].chan1[i];
            Tree[cur].chan1[i].used := 0;
            undefine Tree[cur].chan2[i];
            Tree[cur].chan2[i].used := 0;
            undefine Tree[cur].chan3[i];
            Tree[cur].chan3[i].used := 0;
            undefine Tree[cur].chan4[i];
            Tree[cur].chan4[i].used := 0;
            undefine Tree[cur].chan5[i];
            Tree[cur].chan5[i].used := 0;
            for j : addrType do
                undefine Tree[cur].master_pending[j];
                undefine Tree[cur].slave_pending[i][j];
                Tree[cur].directory[i][j] := None;
            endfor;
            undefine Tree[cur].reqId;
            son := son + 1;
        endfor;
    endfor;

    for cur : coreId do   -- 初始化 L1(core)
        undefine Tree[cur].cache;
        Tree[cur].cache.used := 0;
        for j : addrType do
            Tree[cur].cache.valid[j] := 0;
            undefine Tree[cur].master_pending[j];
        endfor;
        -- Tree[cur].cache.state := None;
        -- Tree[cur].cache.dirty := false;
        -- undefine  Tree[cur].cache.data;
    endfor;

    for j : addrType; d : dataType do 
        memData[j] := d;
        auxData[j] := d;
    endfor;
endstartstate;

-- cache 结点的状态规定：None: 不能读/写； Branch: 只读； Trunk: 不能读/写； Tip: 读/写

-- modify data
ruleset i : coreId; j : addrType; d: dataType do
rule "store"
    getState(Tree[i].cache, j) = Tip   -- 如果 core i 的 L1 cache 的地址 j 处于 Tip 状态
==>
    Tree[i].cache.line[Tree[i].cache.valid[j]].dirty := true;
    Tree[i].cache.line[Tree[i].cache.valid[j]].data := d;
    auxData[j] := d;
endrule;
endruleset;

-- L1 sends msg
ruleset j : l2Id; b : branchType; a : addrType do 
rule "send_AcquireBlock_toB"
    getState(Tree[Tree[j].sons[b]].cache, a) = None &
    IsUndefined(Tree[Tree[j].sons[b]].master_pending[a])
==>
var msg : msgAType;
begin
    msg.opcode := Acquire;
    msg.para := NtoB;
    msg.addr := a;
    if sendAMsg(Tree[j].chan1[b], msg) then
        Tree[Tree[j].sons[b]].master_pending[a]:= pending_Grant;  -- 发送请求的 L1 cache 的对于 addr 的 master_pending 变为 等待授权(pending_Grant)
    endif;
endrule;

rule "send_AcquireBlock(Perm)_toT"
    (getState(Tree[Tree[j].sons[b]].cache, a) = None 
    | getState(Tree[Tree[j].sons[b]].cache, a) = Branch) &
    IsUndefined(Tree[Tree[j].sons[b]].master_pending[a])
==>
var msg : msgAType;
begin
    msg.opcode := Acquire;
    msg.para := getState(Tree[Tree[j].sons[b]].cache, a) = None ? NtoT : BtoT;
    msg.addr := a;
    if sendAMsg(Tree[j].chan1[b], msg) then
        Tree[Tree[j].sons[b]].master_pending[a]:= pending_Grant;
    endif;   
endrule;

alias c: Tree[Tree[j].sons[b]].cache;
do
    rule "send_Release_BtoN(TtoN)"
        (getState(c, a) = Branch 
        | getState(c, a) = Tip) &
        IsUndefined(Tree[Tree[j].sons[b]].master_pending[a])
    ==>
    var msg : msgCType;
    begin
        msg.opcode := Release;
        msg.para := getState(c, a) = Branch ? BtoN : TtoN;
        msg.addr := a;
        msg.data := c.line[c.valid[a]].data;
        msg.dirty := c.line[c.valid[a]].dirty;
        msg.addr := a;
        if sendCMsg(Tree[j].chan3[b], msg) then
            Tree[Tree[j].sons[b]].master_pending[a]:= pending_ReleaseAck;
            removeData(c, a);
        endif;   
    endrule;
endalias;
endruleset;

-- L1 responds
ruleset j : l2Id; b : branchType do 
alias a: Tree[j].chan4[b].buffer[1].addr;
do
    rule "respond_Grant_BtoT"
        Tree[j].chan4[b].used > 0 &
        Tree[j].chan4[b].buffer[1].opcode = Grant &
        Tree[j].chan4[b].buffer[1].para = toT &
        getState(Tree[Tree[j].sons[b]].cache, a) = Branch
    ==>
    var msg: msgEType;
    begin
        msg.opcode := GrantAck;
        msg.addr := a; 
        if sendEMsg(Tree[j].chan5[b], msg) then
            updateState(Tree[Tree[j].sons[b]].cache, a, Tip);
            undefine Tree[Tree[j].sons[b]].master_pending[a];
            popDMsg(Tree[j].chan4[b]);
        endif;
    endrule;

    rule "respond_Grant_NtoT"
        Tree[j].chan4[b].used > 0 &
        Tree[j].chan4[b].buffer[1].opcode = GrantData &
        (Tree[j].chan4[b].buffer[1].para = toT 
        | Tree[j].chan4[b].buffer[1].para = toB) &
        getState(Tree[Tree[j].sons[b]].cache, a) = None &
        Tree[j].chan5[b].used < chanBuffNum & 
        !(IsUndefined(Tree[j].chan4[b].buffer[1].dirty))  -- @mak
    ==>
    var l: lineType;
    var msg: msgEType;
    begin
        --* why not update dirty?
        l.addr := a;
        l.state := Tree[j].chan4[b].buffer[1].para = toT ? Tip : Branch;
        l.data := Tree[j].chan4[b].buffer[1].data;
        l.dirty := Tree[j].chan4[b].buffer[1].dirty;
        msg.opcode := GrantAck;
        msg.addr := a;
        -- lzm: how to ensure that the insertinline and sendmsg are atomic operation
        if insertLine(Tree[Tree[j].sons[b]].cache, a, l) & sendEMsg(Tree[j].chan5[b], msg) then
            undefine Tree[Tree[j].sons[b]].master_pending;
            popDMsg(Tree[j].chan4[b]);
        endif;
    endrule;
endalias;

alias a: Tree[j].chan2[b].buffer[1].addr;
do
    rule "respond_Probe_NtoN"
        Tree[j].chan2[b].used > 0 &
        Tree[j].chan2[b].buffer[1].opcode = Probe &
        (IsUndefined(Tree[Tree[j].sons[b]].master_pending[a]) | 
        Tree[Tree[j].sons[b]].master_pending[a] != pending_ReleaseAck) &
        (Tree[j].chan2[b].buffer[1].para = toN | 
        Tree[j].chan2[b].buffer[1].para = toB) &
        getState(Tree[Tree[j].sons[b]].cache, a) = None
    ==>
    var msg : msgCType;
    begin
        msg.opcode := ProbeAck;
        msg.para := NtoN;
        msg.addr := a;
        if sendCMsg(Tree[j].chan3[b], msg) then
            removeData(Tree[Tree[j].sons[b]].cache, a);
            popBMsg(Tree[j].chan2[b]);
        endif;
    endrule;

    rule "respond_Probe_BtoN(TtoN)"
        Tree[j].chan2[b].used > 0 &
        Tree[j].chan2[b].buffer[1].opcode = Probe &
        Tree[j].chan2[b].buffer[1].para = toN &
        (IsUndefined(Tree[Tree[j].sons[b]].master_pending[a]) | 
        Tree[Tree[j].sons[b]].master_pending[a] != pending_ReleaseAck) &
        (getState(Tree[Tree[j].sons[b]].cache, a) = Branch 
        | getState(Tree[Tree[j].sons[b]].cache, a) = Tip)
    ==>
    var msg : msgCType;
    begin
        msg.opcode := ProbeAck;
        msg.para := getState(Tree[Tree[j].sons[b]].cache, a) = Branch ? BtoN : TtoN;
        msg.data := getData(Tree[Tree[j].sons[b]].cache, a);
        msg.dirty := getDirty(Tree[Tree[j].sons[b]].cache, a);
        msg.addr := a;
        if sendCMsg(Tree[j].chan3[b], msg) then
            removeData(Tree[Tree[j].sons[b]].cache, a);
            popBMsg(Tree[j].chan2[b]);
        endif;
    endrule;

    rule "respond_Probe_BtoB(TtoB)"
        Tree[j].chan2[b].used > 0 &
        Tree[j].chan2[b].buffer[1].opcode = Probe &
        Tree[j].chan2[b].buffer[1].para = toB &
        (IsUndefined(Tree[Tree[j].sons[b]].master_pending[a]) | 
        Tree[Tree[j].sons[b]].master_pending[a] != pending_ReleaseAck) &
        (getState(Tree[Tree[j].sons[b]].cache, a) = Branch 
        | getState(Tree[Tree[j].sons[b]].cache, a) = Tip )
    ==>
    var msg : msgCType;
    begin
        msg.opcode := ProbeAck;
        msg.para := getState(Tree[Tree[j].sons[b]].cache, a) = Branch ? BtoB : TtoB;
        msg.data := getData(Tree[Tree[j].sons[b]].cache, a);
        msg.dirty := getDirty(Tree[Tree[j].sons[b]].cache, a);
        msg.addr := a;
        if sendCMsg(Tree[j].chan3[b], msg) then
            updateState(Tree[Tree[j].sons[b]].cache, a, Branch); 
            popBMsg(Tree[j].chan2[b]);
        endif;
    endrule;
endalias;

alias a: Tree[j].chan4[b].buffer[1].addr;
do
rule "receive_ReleaseAck"
    Tree[j].chan4[b].used > 0 &
    Tree[j].chan4[b].buffer[1].opcode = ReleaseAck
==>
begin
    undefine Tree[Tree[j].sons[b]].master_pending[a];
    popDMsg(Tree[j].chan4[b]);
endrule;
endalias;
endruleset;

-- Ln receive
-- from upper level
-- Ln <-> Ln+1
ruleset i : cacheId; b : branchType do 
alias a : Tree[i].chan1[b].buffer[1].addr;
do
    rule "Ln_receive_Acquire_BtoT_Tip_Branch(None)_None"
        Tree[i].chan1[b].used > 0 &
        Tree[i].chan1[b].buffer[1].opcode = Acquire &
        Tree[i].chan1[b].buffer[1].para = BtoT &
        (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
        getState(Tree[i].cache, a) =  Tip &
        (Tree[i].directory[b][a] = Branch 
        | Tree[i].directory[b][a] = None) &
        forall k : branchType do
            k != b -> Tree[i].directory[k][a] = None   -- 使用 directory 来读取、记录当前 Ln cache 的 branch 的状态
        endforall &
        IsUndefined(Tree[i].slave_pending[b][a])
    ==>
    var msg : msgDType;
    begin
        msg.opcode := Grant;
        msg.para := toT;
        msg.addr := a;
        if Tree[i].directory[b][a] = None then
            msg.opcode := GrantData;
            msg.data := getData(Tree[i].cache, a);
            msg.dirty := getDirty(Tree[i].cache, a);
        endif;
        if sendDMsg(Tree[i].chan4[b], msg) then
            undefine Tree[i].reqId;
            Tree[i].directory[b][a] := Tip;
            updateState(Tree[i].cache, a, Trunk);
            Tree[i].slave_pending[b][a] := pending_GrantAck;
            popAMsg(Tree[i].chan1[b]);
        endif;
    endrule;

    rule "Ln_receive_Acquire_NtoB(NtoT)_Tip_None_None"
        Tree[i].chan1[b].used > 0 &
        Tree[i].chan1[b].buffer[1].opcode = Acquire &
        (Tree[i].chan1[b].buffer[1].para = NtoB 
        | Tree[i].chan1[b].buffer[1].para = NtoT) &
        (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
        getState(Tree[i].cache, a) =  Tip &
        Tree[i].directory[b][a] = None &
        forall k : branchType do
            k != b -> Tree[i].directory[k][a] = None
        endforall &
        IsUndefined(Tree[i].slave_pending[b][a])
    ==>
    var msg : msgDType;
    begin
        --* why not send dirty
        msg.opcode := GrantData;
        msg.para := toT;
        msg.data := getData(Tree[i].cache, a);
        msg.dirty := getDirty(Tree[i].cache, a);
        msg.addr := a;
        if sendDMsg(Tree[i].chan4[b], msg) then
            undefine Tree[i].reqId;
            Tree[i].slave_pending[b][a] := pending_GrantAck;
            Tree[i].directory[b][a] := Tip;
            updateState(Tree[i].cache, a, Trunk);
            popAMsg(Tree[i].chan1[b]);
        endif;
    endrule;

    rule "Ln_receive_Acquire_NtoB_Tip_None_Branch(Branch_None_Branch/None)"
        Tree[i].chan1[b].used > 0 &
        Tree[i].chan1[b].buffer[1].opcode = Acquire &
        Tree[i].chan1[b].buffer[1].para = NtoB &
        (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
        (getState(Tree[i].cache, a) =  Tip &
        Tree[i].directory[b][a] = None &
        forall k : branchType do
            k != b -> Tree[i].directory[k][a] = Branch
        endforall 
        | getState(Tree[i].cache, a) =  Branch &
        Tree[i].directory[b][a] = None ) &
        IsUndefined(Tree[i].slave_pending[b][a])
    ==>
    var msg : msgDType;
    begin
        --* why not send dirty
        msg.opcode := GrantData;
        msg.para := toB;
        msg.data := getData(Tree[i].cache, a);
        msg.dirty := getDirty(Tree[i].cache, a);
        msg.addr := a;
        if sendDMsg(Tree[i].chan4[b], msg) then
            undefine Tree[i].reqId;
            Tree[i].slave_pending[b][a] := pending_GrantAck;
            Tree[i].directory[b][a] := Branch;
            popAMsg(Tree[i].chan1[b]);
        endif;
    endrule;

    rule "Ln_receive_Acquire_BtoT_Branch(None)_None(Branch)_Branch"
        Tree[i].chan1[b].used > 0 &
        Tree[i].chan1[b].buffer[1].opcode = Acquire &
        Tree[i].chan1[b].buffer[1].para = BtoT &
        (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
        (getState(Tree[i].cache, a) =  Branch
        | getState(Tree[i].cache, a) =  None
        | getState(Tree[i].cache, a) =  Tip) &
        (Tree[i].directory[b][a] = None
        | Tree[i].directory[b][a] = Branch) &
        exists k : branchType do
            k != b & Tree[i].directory[k][a] = Branch &
            IsUndefined(Tree[i].slave_pending[k][a])
        end
    ==>
    var msg : msgBType;
    begin
        assert !(getState(Tree[i].cache, a) =  Tip & Tree[i].directory[b][a] = None);
        Tree[i].reqId := b;
        msg.opcode := Probe;
        msg.para := toN;
        msg.addr := a;
        for k : branchType do
            if k != b & Tree[i].directory[k][a] = Branch &
                IsUndefined(Tree[i].slave_pending[k][a]) then   
                if sendBMsg(Tree[i].chan2[k], msg) then
                    Tree[i].slave_pending[k][a] := pending_ProbeAck;
                endif;
            endif;
        endfor;
    endrule;

    --* I am not sure...
    --* if other branch is in Branch state, does the current cache probe data or acquire data
    rule "Ln_receive_Acquire_NtoB_None_None_Branch(Tip)"
        Tree[i].chan1[b].used > 0 &
        Tree[i].chan1[b].buffer[1].opcode = Acquire &
        Tree[i].chan1[b].buffer[1].para = NtoB &
        (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
        getState(Tree[i].cache, a) =  None &
        Tree[i].directory[b][a] = None &
        exists k : branchType do
            k != b & (Tree[i].directory[k][a] = Branch | Tree[i].directory[k][a] = Tip) &
            IsUndefined(Tree[i].slave_pending[k][a])   
        end
    ==>
    var msg : msgBType;
    begin
        Tree[i].reqId := b;
        msg.opcode := Probe;
        msg.para := toB;
        msg.addr := a;
        for k : branchType do
            if k != b & (Tree[i].directory[k][a] = Branch | Tree[i].directory[k][a] = Tip) &
                IsUndefined(Tree[i].slave_pending[k][a]) then
                if sendBMsg(Tree[i].chan2[k], msg) then
                    Tree[i].slave_pending[k][a] := pending_ProbeAck;
                endif;
            endif;
        endfor;
    endrule;

    rule "Ln_receive_Acquire_NtoT_None_None_Branch(Tip)"
        Tree[i].chan1[b].used > 0 &
        Tree[i].chan1[b].buffer[1].opcode = Acquire &
        Tree[i].chan1[b].buffer[1].para = NtoT &
        (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
        getState(Tree[i].cache, a) =  None &
        Tree[i].directory[b][a] = None &
        exists k : branchType do
            k != b & (Tree[i].directory[k][a] = Branch | Tree[i].directory[k][a] = Tip) &
            IsUndefined(Tree[i].slave_pending[k][a]) 
        end
    ==>
    var msg : msgBType;
    begin
        Tree[i].reqId := b;
        msg.opcode := Probe;
        msg.para := toN;
        msg.addr := a;
        for k : branchType do
            if k != b & (Tree[i].directory[k][a] = Branch | Tree[i].directory[k][a] = Tip) &
                IsUndefined(Tree[i].slave_pending[k][a])  then 
                if sendBMsg(Tree[i].chan2[k], msg) then
                    Tree[i].slave_pending[k][a] := pending_ProbeAck;
                endif;
            endif;
        endfor;
    endrule;

    rule "Ln_receive_Acquire_NtoT_Branch(Tip)_None_Branch"
        Tree[i].chan1[b].used > 0 &
        Tree[i].chan1[b].buffer[1].opcode = Acquire &
        Tree[i].chan1[b].buffer[1].para = NtoT &
        (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
        (getState(Tree[i].cache, a) =  Branch 
        | getState(Tree[i].cache, a) =  Tip) &
        Tree[i].directory[b][a] = None &
        exists k : branchType do
            k != b & Tree[i].directory[k][a] = Branch &
            IsUndefined(Tree[i].slave_pending[k][a]) 
        end
    ==>
    var msg : msgBType;
    begin
        Tree[i].reqId := b;
        msg.opcode := Probe;
        msg.para := toN;
        msg.addr := a;
        for k : branchType do
            if k != b & Tree[i].directory[k][a] = Branch &
                IsUndefined(Tree[i].slave_pending[k][a])  then
                if sendBMsg(Tree[i].chan2[k], msg) then
                    Tree[i].slave_pending[k][a] := pending_ProbeAck;
                endif;
            endif;
        endfor;
    endrule;

    rule "Ln_receive_Acquire_NtoT(BtoT/NtoB)_Trunk_None_Tip"
        Tree[i].chan1[b].used > 0 &
        Tree[i].chan1[b].buffer[1].opcode = Acquire &
        (Tree[i].chan1[b].buffer[1].para = NtoT 
        | Tree[i].chan1[b].buffer[1].para = BtoT
        | Tree[i].chan1[b].buffer[1].para = NtoB) &
        (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
        getState(Tree[i].cache, a) =  Trunk & 
        Tree[i].directory[b][a] = None &
        exists k : branchType do
            k != b &
            Tree[i].directory[k][a] = Tip &
            IsUndefined(Tree[i].slave_pending[k][a]) 
        end
    ==>
    var msg : msgBType;
    begin
        Tree[i].reqId := b;
        msg.opcode := Probe;
        msg.para := Tree[i].chan1[b].buffer[1].para = NtoB ? toB : toN;;
        msg.addr := a;
        for k : branchType do
            if k != b & Tree[i].directory[k][a] = Tip &
                IsUndefined(Tree[i].slave_pending[k][a])  then
                if sendBMsg(Tree[i].chan2[k], msg) then
                    Tree[i].slave_pending[k][a] := pending_ProbeAck;
                endif;
            endif;
        endfor;
    endrule;

endalias;

rule "Ln_receive_GrantAck"
    Tree[i].chan5[b].used > 0 &
    Tree[i].chan5[b].buffer[1].opcode = GrantAck
==>
begin
    undefine Tree[i].slave_pending[b][Tree[i].chan5[b].buffer[1].addr];
    popEMsg(Tree[i].chan5[b]);
endrule;
endruleset;

-- Ln <-> Ln+1 <-> Ln+2
ruleset j : l3Id ; b1 : branchType; b2 : branchType do 
alias i : Tree[j].sons[b2]; a: Tree[i].chan1[b1].buffer[1].addr 
do
    rule "Ln_receive_Acquire_BtoT_Branch(None)_Branch_None"
        Tree[i].chan1[b1].used > 0 &
        Tree[i].chan1[b1].buffer[1].opcode = Acquire &
        Tree[i].chan1[b1].buffer[1].para = BtoT & 
        (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b1) &
        (getState(Tree[i].cache, a) = Branch
        | getState(Tree[i].cache, a) = None) & 
        Tree[i].directory[b1][a] = Branch &
        forall k : branchType do
            k != b1 -> Tree[i].directory[k][a] = None
        endforall &
        IsUndefined(Tree[i].master_pending[a])
    ==>
    var msg : msgAType;
    begin
        Tree[i].reqId := b1;
        msg.opcode := Acquire;
        msg.para := BtoT;
        msg.addr := a;
        if sendAMsg(Tree[j].chan1[b2], msg) then
            Tree[i].master_pending[a] := pending_Grant;
        endif;
    endrule;

    rule "Ln_receive_Acquire_NtoT(BtoT)_Branch_None_None"
        Tree[i].chan1[b1].used > 0 &
        Tree[i].chan1[b1].buffer[1].opcode = Acquire &
        (Tree[i].chan1[b1].buffer[1].para = NtoT 
        | Tree[i].chan1[b1].buffer[1].para = BtoT) &
        (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b1) &
        getState(Tree[i].cache, a) = Branch &
        Tree[i].directory[b1][a] = None &
        forall k : branchType do
            k != b1 -> Tree[i].directory[k][a] = None
        endforall &
        IsUndefined(Tree[i].master_pending[a])
    ==>
    var msg : msgAType;
    begin
        Tree[i].reqId := b1;
        msg.opcode := Acquire;
        msg.para := BtoT;
        msg.addr := a;
        if sendAMsg(Tree[j].chan1[b2], msg) then
            Tree[i].master_pending[a] := pending_Grant;
        endif;
    endrule;

    -- not exist in table
    rule "Ln_receive_Acquire_BtoT(NtoT)_None_None_None"
        Tree[i].chan1[b1].used > 0 &
        Tree[i].chan1[b1].buffer[1].opcode = Acquire &
        (Tree[i].chan1[b1].buffer[1].para = BtoT 
        | Tree[i].chan1[b1].buffer[1].para = NtoT)& 
        (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b1) &
        getState(Tree[i].cache, a) = None & 
        Tree[i].directory[b1][a] = None &
        forall k : branchType do
            k != b1 -> Tree[i].directory[k][a] = None
        endforall &
        IsUndefined(Tree[i].master_pending[a])
    ==>
    var msg : msgAType;
    begin
        Tree[i].reqId := b1;
        msg.opcode := Acquire;
        msg.para := NtoT;
        msg.addr := a;
        if sendAMsg(Tree[j].chan1[b2], msg) then
            Tree[i].master_pending[a] := pending_GrantData;
        endif;
    endrule;

    rule "Ln_receive_Acquire_NtoB_None_None_None"
        Tree[i].chan1[b1].used > 0 &
        Tree[i].chan1[b1].buffer[1].opcode = Acquire &
        Tree[i].chan1[b1].buffer[1].para = NtoB &
        (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b1) &
        getState(Tree[i].cache, a) = None &
        Tree[i].directory[b1][a] = None &
        forall k : branchType do
            k != b1 -> Tree[i].directory[k][a] = None
        endforall &
        IsUndefined(Tree[i].master_pending[a])
    ==>
    var msg : msgAType;
    begin
        Tree[i].reqId := b1;
        msg.opcode := Acquire;
        msg.para := NtoB;
        msg.addr := a;
        if sendAMsg(Tree[j].chan1[b2], msg) then
            Tree[i].master_pending[a] := pending_GrantData;
        endif;
    endrule;
endalias;
endruleset;

ruleset i : cacheId; b : branchType do
alias a: Tree[i].chan3[b].buffer[1].addr 
do
    rule "Ln_receive_ProbeAck_1"
        Tree[i].chan3[b].used > 0 &
        Tree[i].chan3[b].buffer[1].opcode = ProbeAck &
        Tree[i].chan3[b].buffer[1].para = NtoN
    ==>
    begin
        Tree[i].directory[b][a] := None;
        undefine Tree[i].slave_pending[b][a];
        popCMsg(Tree[i].chan3[b]);
    endrule;

    rule "Ln_receive_ProbeAck_6"
        Tree[i].chan3[b].used > 0 &
        Tree[i].chan3[b].buffer[1].opcode = ProbeAck &
        Tree[i].chan3[b].buffer[1].para = BtoB &
        (getState(Tree[i].cache, a) = Branch | getState(Tree[i].cache, a) = Tip)
    ==>
    begin
        undefine Tree[i].slave_pending[b][a];
        popCMsg(Tree[i].chan3[b]);
    endrule;

    rule "Ln_receive_ProbeAck_3(4)"
        Tree[i].chan3[b].used > 0 &
        Tree[i].chan3[b].buffer[1].opcode = ProbeAck &
        Tree[i].chan3[b].buffer[1].para = BtoN &
        (getState(Tree[i].cache, a) = Branch | getState(Tree[i].cache, a) = Tip)
    ==>
    begin
        updateData(Tree[i].cache, a, Tree[i].chan3[b].buffer[1].data);
        updateDirty(Tree[i].cache, a, Tree[i].chan3[b].buffer[1].dirty);
        Tree[i].directory[b][a] := None;
        undefine Tree[i].slave_pending[b][a];
        popCMsg(Tree[i].chan3[b]);
    endrule;


    rule "Ln_receive_ProbeAck_2(5)"
        Tree[i].chan3[b].used > 0 &
        Tree[i].chan3[b].buffer[1].opcode = ProbeAck &
        (Tree[i].chan3[b].buffer[1].para = BtoN | Tree[i].chan3[b].buffer[1].para = BtoB)&
        getState(Tree[i].cache, a) = None
    ==>
    var l: lineType;
    begin
        l.addr := a;
        l.state := Branch;
        l.data := Tree[i].chan3[b].buffer[1].data;
        l.dirty := Tree[i].chan3[b].buffer[1].dirty;
        if insertLine(Tree[i].cache, a, l) then
            if Tree[i].chan3[b].buffer[1].para = BtoN then
                Tree[i].directory[b][a] := None;
            endif;
            undefine Tree[i].slave_pending[b][a];
            popCMsg(Tree[i].chan3[b]);
        endif;
    endrule;

    rule "Ln_receive_ProbeAck_7(8)"
        Tree[i].chan3[b].used > 0 &
        Tree[i].chan3[b].buffer[1].opcode = ProbeAck &
        (Tree[i].chan3[b].buffer[1].para = TtoN | Tree[i].chan3[b].buffer[1].para = TtoB)
    ==>
    var l: lineType;
    begin
        l.addr := a;
        l.state := Tip;
        l.data := Tree[i].chan3[b].buffer[1].data;
        l.dirty := Tree[i].chan3[b].buffer[1].dirty;
        if insertLine(Tree[i].cache, a, l) then
            Tree[i].directory[b][a] := Tree[i].chan3[b].buffer[1].para = TtoN ? None : Branch;
            undefine Tree[i].slave_pending[b][a];
            popCMsg(Tree[i].chan3[b]);
        endif;
    endrule;

    

    rule "Ln_receive_Release_TtoN(BtoN/TtoB)_None"
        -- amazing
        -- Tree[i].chan2[b].used = 0 &
        Tree[i].chan3[b].used > 0 &
        Tree[i].chan3[b].buffer[1].opcode = Release &
        (Tree[i].chan3[b].buffer[1].para = TtoN 
        | Tree[i].chan3[b].buffer[1].para = BtoN
        | Tree[i].chan3[b].buffer[1].para = TtoB ) &
        getState(Tree[i].cache, a) = None &
        Tree[i].chan4[b].used < chanBuffNum
    ==>
    var l: lineType;
    var msg : msgDType;
    begin
        l.addr := a;
        l.state := Tree[i].chan3[b].buffer[1].para = BtoN ? Branch : Tip;
        l.data := Tree[i].chan3[b].buffer[1].data;
        l.dirty := Tree[i].chan3[b].buffer[1].dirty;
        msg.opcode := ReleaseAck;
        msg.addr := a;
        if insertLine(Tree[i].cache, a, l) & sendDMsg(Tree[i].chan4[b], msg) then
            Tree[i].directory[b][a] := Tree[i].chan3[b].buffer[1].para = TtoB ? Branch : None;
            popCMsg(Tree[i].chan3[b]);
        endif;
    endrule;

    rule "Ln_receive_Release_BtoN_Tip(Branch)"
        Tree[i].chan3[b].used > 0 &
        Tree[i].chan3[b].buffer[1].opcode = Release &
        Tree[i].chan3[b].buffer[1].para = BtoN &
        (getState(Tree[i].cache, a) = Tip 
        | getState(Tree[i].cache, a) = Branch)
    ==>
    var msg : msgDType;
    begin
        msg.opcode := ReleaseAck;
        msg.addr := a;
        if sendDMsg(Tree[i].chan4[b], msg) then
            Tree[i].directory[b][a] := None;
            popCMsg(Tree[i].chan3[b]);
        endif;
    endrule;

    rule "Ln_receive_Release_TtoN(TtoB)_Trunk"
        Tree[i].chan3[b].used > 0 &
        Tree[i].chan3[b].buffer[1].opcode = Release &
        Tree[i].chan3[b].buffer[1].para = TtoN &
        getState(Tree[i].cache, a) = Trunk &
        Tree[i].chan4[b].used < chanBuffNum
    ==>
    var l: lineType;
    var msg: msgDType;
    begin
        l.addr := a;
        l.state := Tip;
        l.data := Tree[i].chan3[b].buffer[1].data;
        l.dirty := Tree[i].chan3[b].buffer[1].dirty;
        msg.opcode := ReleaseAck;
        msg.addr := a;
        if insertLine(Tree[i].cache, a, l) & sendDMsg(Tree[i].chan4[b], msg) then
            Tree[i].directory[b][a] := Tree[i].chan3[b].buffer[1].para = TtoN ? None : Branch;
            popCMsg(Tree[i].chan3[b]);
        endif;
    endrule;
    
endalias;
endruleset;

--Release Through
ruleset j : l3Id ; b1 : branchType; b2 : branchType do 
alias i : Tree[j].sons[b2]; a : Tree[i].chan2[b1].buffer[1].addr do
    rule "Ln_receive_ReleaseThrough_1"
        Tree[i].chan2[b1].used > 0 & -- lzm: maybe we should judge whether the slave_pending[b1][a] = ProbeAck
        Tree[i].chan3[b1].used > 0 &
        Tree[i].chan3[b1].buffer[1].opcode = Release &
        (Tree[i].chan3[b1].buffer[1].para = TtoN |
        Tree[i].chan3[b1].buffer[1].para = BtoN) &
        -- IsUndefined(Tree[j].chan3[b2].opcode) &
        Tree[j].chan3[b2].used < chanBuffNum & -- lzm: make sure that the buffer is available
        Tree[i].chan4[b1].used < chanBuffNum & -- lzm: sending messages is an atomic operation 
        IsUndefined(Tree[i].master_pending[a]) &
        Tree[i].chan2[b1].buffer[1].addr = Tree[i].chan3[b1].buffer[1].addr &
        getState(Tree[i].cache, a) = None
    ==>
    var msg : msgDType;
    begin
        -- Tree[j].chan3[b2] := Tree[i].chan3[b1]; -- lzm: add message to the Tree[j].chan3[b2]? 
        msg.opcode := ReleaseAck;
        msg.addr := a;
        if sendCMsg(Tree[j].chan3[b2], Tree[i].chan3[b1].buffer[1]) & sendDMsg(Tree[i].chan4[b1], msg) then
            Tree[i].master_pending[a] := pending_ReleaseAck;
            popCMsg(Tree[i].chan3[b1]);
            Tree[i].directory[b1][a] := None;
        endif;
    endrule;

    --* some errors in guard? if both child (in the directory) is in "None" state, it is impossible to send probe ?
    -- rule "Ln_receive_ReleaseThrough_2"
    --     !IsUndefined(Tree[i].chan2[b1].opcode) &
    --     Tree[i].chan2[b1].buffer[1].opcode = Probe &
    --     !IsUndefined(Tree[i].chan3[b1].opcode) &
    --     Tree[i].chan3[b1].opcode = Release &
    --     Tree[i].chan3[b1].para = BtoN &
    --     IsUndefined(Tree[j].chan3[b2].opcode) &
    --     IsUndefined(Tree[i].master_pending[a]) &
    --     Tree[i].chan2[b1].addr = Tree[i].chan3[b1].addr &
    --     getState(Tree[i].cache, a) = None &
    --     forall k : branchType do
    --         k != b1 -> Tree[i].directory[k][a] = None
    --     endforall
    -- ==>
    -- begin
    --     Tree[j].chan3[b2] := Tree[i].chan3[b1];
    --     Tree[i].master_pending[a] := pending_ReleaseAck;
    --     undefine Tree[i].chan3[b1];
    --     Tree[i].directory[b1][a] := None;
    --     Tree[i].chan4[b1].opcode := ReleaseAck;
    --     Tree[i].chan4[b1].addr := a;
    --     --* original state is None
    --     -- Tree[i].cache.state := None;
    -- endrule;

    --* is it verbose to check directory? since if the cache can receive release with BtoN, one of its child must in branch state
    --* furthermore, it can be merged with first situation
    --lzm: agree with you
    -- rule "Ln_receive_ReleaseThrough_6"
    --     !IsUndefined(Tree[i].chan2[b1].opcode) &
    --     Tree[i].chan2[b1].opcode = Probe &
    --     !IsUndefined(Tree[i].chan3[b1].opcode) &
    --     Tree[i].chan3[b1].opcode = Release &
    --     Tree[i].chan3[b1].para = BtoN &
    --     IsUndefined(Tree[j].chan3[b2].opcode) &
    --     IsUndefined(Tree[i].master_pending[a]) &
    --     Tree[i].chan2[b1].addr = Tree[i].chan3[b1].addr &
    --     getState(Tree[i].cache, a) = None &
    --     exists k : branchType do
    --         k != b1 & Tree[i].directory[k][a] = Branch
    --     end
    -- ==>
    -- begin
    --     undefine Tree[i].chan3[b1];
    --     Tree[i].directory[b1][a] := None;
    --     Tree[i].chan4[b1].opcode := ReleaseAck;
    --     Tree[i].chan4[b1].addr := a;
    -- endrule;
endalias;
endruleset;

-- Ln receive
-- from lower level
ruleset j : l3Id; b : branchType do
alias i : Tree[j].sons[b] 
do
    alias a : Tree[j].chan4[b].buffer[1].addr
    do 
        rule "Ln_receive_GrantData_toB(toT)"
            Tree[j].chan4[b].used > 0 &
            Tree[j].chan4[b].buffer[1].opcode = GrantData &
            (Tree[j].chan4[b].buffer[1].para = toB | Tree[j].chan4[b].buffer[1].para = toT) &
            getState(Tree[i].cache, a) = None &
            !(IsUndefined(Tree[i].reqId)) &
            IsUndefined(Tree[i].slave_pending[Tree[i].reqId][a]) &
            Tree[j].chan5[b].used < chanBuffNum &
            Tree[i].chan4[Tree[i].reqId].used < chanBuffNum
        ==>
        var msg : msgEType;
        begin
            if sendDMsg(Tree[i].chan4[Tree[i].reqId], Tree[j].chan4[b].buffer[1]) then
                Tree[i].slave_pending[Tree[i].reqId][a] := pending_GrantAck;
                Tree[i].directory[Tree[i].reqId][a] := 
                    Tree[j].chan4[b].buffer[1].para = toT ? Tip : Branch ;
            endif;
            msg.opcode := GrantAck;
            msg.addr := a;
            if sendEMsg(Tree[j].chan5[b], msg) then
                popAMsg(Tree[i].chan1[Tree[i].reqId]);
                undefine Tree[i].reqId;
                undefine Tree[i].master_pending[a];
                popDMsg(Tree[j].chan4[b]);
            endif;
        endrule;

        rule "Ln_receive_Grant_toT_2(3)"
            Tree[j].chan4[b].used > 0 &
            Tree[j].chan4[b].buffer[1].opcode = Grant &
            Tree[j].chan4[b].buffer[1].para = toT &
            (getState(Tree[i].cache, a) = Branch 
            | getState(Tree[i].cache, a) = None) &
            !(IsUndefined(Tree[i].reqId)) &
            Tree[i].directory[Tree[i].reqId][a] = Branch &
            IsUndefined(Tree[i].slave_pending[Tree[i].reqId][a]) &
            -- IsUndefined(Tree[j].chan5[b].opcode) &
            -- IsUndefined(Tree[i].chan4[Tree[i].reqId].opcode)
            Tree[j].chan5[b].used < chanBuffNum &
            Tree[i].chan4[Tree[i].reqId].used < chanBuffNum
        ==>
        var msg : msgEType;
        begin
            if sendDMsg(Tree[i].chan4[Tree[i].reqId], Tree[j].chan4[b].buffer[1]) then
                if getState(Tree[i].cache, a) = Branch then
                    updateState(Tree[i].cache, a,Trunk);
                endif;
                Tree[i].slave_pending[Tree[i].reqId][a] := pending_GrantAck;
                Tree[i].directory[Tree[i].reqId][a] := Tip;
            endif;
            msg.opcode := GrantAck;
            msg.addr := a;
            if sendEMsg(Tree[j].chan5[b], msg) then
                popAMsg(Tree[i].chan1[Tree[i].reqId]);
                undefine Tree[i].reqId;
                undefine Tree[i].master_pending[a];
                popDMsg(Tree[j].chan4[b]); 
            endif;
        endrule;

        rule "Ln_receive_Grant_toT_1"
            Tree[j].chan4[b].used > 0 &
            Tree[j].chan4[b].buffer[1].opcode = Grant &
            Tree[j].chan4[b].buffer[1].para = toT &
            getState(Tree[i].cache, a) = Branch &
            !(IsUndefined(Tree[i].reqId)) &
            Tree[i].directory[Tree[i].reqId][a] = None &
            IsUndefined(Tree[i].slave_pending[Tree[i].reqId][a]) &
            Tree[j].chan5[b].used < chanBuffNum &
            Tree[i].chan4[Tree[i].reqId].used < chanBuffNum
        ==>
        var upmsg: msgDType;
        var downmsg: msgEType;
        begin
            updateState(Tree[i].cache, a,Trunk);
            upmsg.opcode := GrantData;
            upmsg.para := toT;
            upmsg.data := getData(Tree[i].cache, a);
            upmsg.addr := a;
            if sendDMsg(Tree[i].chan4[Tree[i].reqId], upmsg) then
                Tree[i].slave_pending[Tree[i].reqId][a] := pending_GrantAck;
                Tree[i].directory[Tree[i].reqId][a] := Tip;
            endif;
            downmsg.opcode := GrantAck;
            downmsg.addr := a;
            if sendEMsg(Tree[j].chan5[b], downmsg) then
                popAMsg(Tree[i].chan1[Tree[i].reqId]);
                undefine Tree[i].reqId;
                undefine Tree[i].master_pending[a];
                popDMsg(Tree[j].chan4[b]);
            endif;
        endrule;

        

        rule "Ln_receive_ReleaseAck"
            Tree[j].chan4[b].used > 0 &
            !IsUndefined(Tree[j].chan4[b].buffer[1].opcode) &
            Tree[j].chan4[b].buffer[1].opcode = ReleaseAck
        ==>
        begin
            undefine Tree[i].master_pending[a];
            popDMsg(Tree[j].chan4[b]);
        endrule;
    endalias;

    alias a : Tree[j].chan2[b].buffer[1].addr 
    do
        rule "Ln_receive_Probe_toN_None_None"
            Tree[j].chan2[b].used > 0 &
            Tree[j].chan2[b].buffer[1].opcode = Probe &
            getState(Tree[i].cache, a) = None & 
            forall k : branchType do
                Tree[i].directory[k][a] = None
            endforall &
            (IsUndefined(Tree[i].master_pending[a]) | Tree[i].master_pending[a] != pending_ReleaseAck)
        ==>
        var msg : msgCType; 
        begin
            msg.opcode := ProbeAck;
            msg.para := NtoN;
            msg.addr := a;
            if sendCMsg(Tree[j].chan3[b], msg) then
                popBMsg(Tree[j].chan2[b]);
            endif;
        endrule;

        rule "Ln_receive_Probe_toN_Branch_None"
            Tree[j].chan2[b].used > 0 &
            Tree[j].chan2[b].buffer[1].opcode = Probe &
            (getState(Tree[i].cache, a) = Branch 
            | getState(Tree[i].cache, a) = Tip) & 
            Tree[j].chan2[b].buffer[1].para = toN &
            forall k : branchType do
                Tree[i].directory[k][a] = None 
            endforall &
            (IsUndefined(Tree[i].master_pending[a]) | Tree[i].master_pending[a] != pending_ReleaseAck)
        ==>
        var msg : msgCType; 
        begin
            msg.opcode := ProbeAck;
            msg.para := getState(Tree[i].cache, a) = Branch ? BtoN : TtoN;
            msg.data := getData(Tree[i].cache, a);
            msg.dirty := getDirty(Tree[i].cache, a);
            msg.addr := a;
            if sendCMsg(Tree[j].chan3[b], msg) then
                removeData(Tree[i].cache, a);
                popBMsg(Tree[j].chan2[b]);
            endif;
        endrule;
        
        rule "Ln_receive_Probe_toN(toB)_None_Tip"
            Tree[j].chan2[b].used > 0 &
            Tree[j].chan2[b].buffer[1].opcode = Probe &
            (Tree[j].chan2[b].buffer[1].para = toN 
            | Tree[j].chan2[b].buffer[1].para = toB) &
            getState(Tree[i].cache, a) = None & 
            exists k : branchType do
                Tree[i].directory[k][a] = Tip
            end
        ==>
        var msg : msgBType;
        begin
            msg.opcode := Probe;
            msg.para := Tree[j].chan2[b].buffer[1].para;
            msg.addr := a;
            for k : branchType do
                if  Tree[i].directory[k][a] = Tip &
                    IsUndefined(Tree[i].slave_pending[k][a]) then 
                        if sendBMsg(Tree[i].chan2[k], msg) then
                            Tree[i].slave_pending[k][a] := pending_ProbeAck;
                        endif;
                endif;
            endfor;
        endrule;

        --* error the param is toB, and in this situation, it should reply with probeack directly
        -- lzm: but the cache[i] might not have the data
        /*
        rule "Ln_receive_Probe_toN_None_Branch"
            Tree[j].sons[b] = i &
            !IsUndefined(Tree[j].chan2[b].buffer[1].opcode) &
            Tree[j].chan2[b].buffer[1].opcode = Probe &
            Tree[j].chan2[b].buffer[1].para = toB &
            getState(Tree[i].cache, a) = None & 
            exists k : branchType do
                Tree[i].directory[k][a] = Branch
            end
        ==>
        begin
            for k : branchType do
                if  Tree[i].directory[k][a] = Branch &
                    IsUndefined(Tree[i].slave_pending[k][a]) &
                    IsUndefined(Tree[i].chan2[k].opcode) then 
                        Tree[i].chan2[k].opcode := Probe;
                        Tree[i].chan2[k].para := toN;
                        Tree[i].chan2[k].addr := a;
                        Tree[i].slave_pending[k][a] := pending_ProbeAck;
                endif;
            endfor;
        endrule;
        */

        rule "Ln_receive_Probe_toN_None(Branch/Tip)_Branch"
            Tree[j].chan2[b].used > 0 &
            Tree[j].chan2[b].buffer[1].opcode = Probe &
            Tree[j].chan2[b].buffer[1].para = toN &
            (getState(Tree[i].cache, a) = None 
            | getState(Tree[i].cache, a) = Branch
            | getState(Tree[i].cache, a) = Tip ) & 
            exists k : branchType do
                Tree[i].directory[k][a] = Branch
            end
        ==>
        var msg : msgBType;
        begin
            msg.opcode := Probe;
            msg.para := toN;
            msg.addr := a;
            for k : branchType do
                if  Tree[i].directory[k][a] = Branch &
                    IsUndefined(Tree[i].slave_pending[k][a]) then 
                        if sendBMsg(Tree[i].chan2[k], msg) then
                            Tree[i].slave_pending[k][a] := pending_ProbeAck;
                        endif;
                endif;
            endfor;
        endrule;

        rule "Ln_receive_Probe_toB_Branch(Tip)"
            Tree[j].chan2[b].used > 0 &
            Tree[j].chan2[b].buffer[1].opcode = Probe &
            Tree[j].chan2[b].buffer[1].para = toB &
            (getState(Tree[i].cache, a) = Branch 
            | getState(Tree[i].cache, a) = Tip) & 
            Tree[j].chan2[b].buffer[1].para = toB &
            (IsUndefined(Tree[i].master_pending[a]) | Tree[i].master_pending[a] != pending_ReleaseAck)
        ==>
        var msg : msgCType;
        begin
            msg.opcode := ProbeAck;
            msg.para := getState(Tree[i].cache, a) = Branch ? BtoB : TtoB;
            msg.data := getData(Tree[i].cache, a);
            msg.dirty := getDirty(Tree[i].cache, a);
            msg.addr := a;
            if sendCMsg(Tree[j].chan3[b], msg) then
                updateState(Tree[i].cache, a, Branch);
            --* dirty should not be changed...
            -- updateDirty(Tree[i].cache, a, false);
                popBMsg(Tree[j].chan2[b]);
            endif;
        endrule;

        rule "Ln_receive_Probe_toN(toB)_Trunk"
            Tree[j].chan2[b].used > 0 &
            Tree[j].chan2[b].buffer[1].opcode = Probe &
            (Tree[j].chan2[b].buffer[1].para = toN 
            | Tree[j].chan2[b].buffer[1].para = toB) &
            getState(Tree[i].cache, a) = Trunk
        ==>
        var msg : msgBType;
        begin
            msg.opcode := Probe;
            msg.para := Tree[j].chan2[b].buffer[1].para;
            msg.addr := a;
            for k : branchType do
                if  Tree[i].directory[k][a] = Tip &
                    IsUndefined(Tree[i].slave_pending[k][a]) then
                        if sendBMsg(Tree[i].chan2[k], msg) then
                            Tree[i].slave_pending[k][a] := pending_ProbeAck;
                        endif;
                endif;
            endfor;
        endrule;

    endalias;
endalias;
endruleset;

--mod Link[3].opcode = Empty
-- Ln send msg directly
ruleset j : l3Id; b : branchType; a : addrType do
alias i : Tree[j].sons[b] do
    rule "Ln_send_Release_1"
        IsUndefined(Tree[i].reqId) &
        getState(Tree[i].cache, a) = Branch &
        forall k : branchType do
            Tree[i].directory[k][a] = None
        endforall &
        IsUndefined(Tree[i].master_pending[a])
    ==>
    var msg : msgCType;
    begin
        msg.opcode := Release;
        msg.para := BtoN;
        msg.data := getData(Tree[i].cache, a);
        msg.dirty := getDirty(Tree[i].cache, a);
        msg.addr := a;
        -- Tree[j].chan3[b].buffer[1].addr := a;
        if sendCMsg(Tree[j].chan3[b], msg) then
            Tree[i].master_pending[a] := pending_ReleaseAck;
            removeData(Tree[i].cache, a);
        endif;
    endrule;

    rule "Ln_send_Release_2"
        getState(Tree[i].cache, a) = Tip &
        IsUndefined(Tree[i].reqId) &
        forall k : branchType do
            Tree[i].directory[k][a] = None
        endforall &
        IsUndefined(Tree[i].master_pending[a]) 
    ==>
    var msg : msgCType;
    begin
        msg.opcode := Release;
        msg.para := TtoN;
        msg.data := getData(Tree[i].cache, a);
        msg.dirty := getDirty(Tree[i].cache, a);
        msg.addr := a;
        -- Tree[j].chan3[b].buffer[1].addr := a;
        if sendCMsg(Tree[j].chan3[b], msg) then
            Tree[i].master_pending[a] := pending_ReleaseAck;
            removeData(Tree[i].cache, a);
        endif;
    endrule;

    rule "Ln_send_Release_5"
        getState(Tree[i].cache, a) = Tip &
        IsUndefined(Tree[i].reqId) &
        exists k : branchType do
            Tree[i].directory[k][a] = Branch
        end &
        IsUndefined(Tree[i].master_pending[a])
    ==>
    var msg : msgCType;
    begin
        msg.opcode := Release;
        msg.para := TtoB;
        msg.data := getData(Tree[i].cache, a);
        msg.dirty := getDirty(Tree[i].cache, a);
        msg.addr := a;
        if sendCMsg(Tree[j].chan3[b], msg) then
            Tree[i].master_pending[a] := pending_ReleaseAck;
            removeData(Tree[i].cache, a);
        endif;
    endrule;
endalias;
endruleset;

ruleset i : cacheId; a : addrType do
rule "Ln_send_Release_4"
    getState(Tree[i].cache, a) = Branch &
    IsUndefined(Tree[i].reqId) &
    exists b : branchType do
        Tree[i].directory[b][a] = Branch
    end
==>
begin
    removeData(Tree[i].cache, a);
endrule;

rule "Ln_send_Release_7"
    getState(Tree[i].cache, a) = Trunk &
    IsUndefined(Tree[i].reqId) &
    exists b : branchType do
        Tree[i].directory[b][a] = Tip
    end
==>
begin
    removeData(Tree[i].cache, a);
endrule;
endruleset;

--special for l3
ruleset b : branchType; a : addrType do 
rule "L3_send_release_1(2)"
    (getState(Tree[1].cache, a) = Branch 
    | getState(Tree[1].cache, a) = Tip) &
    IsUndefined(Tree[1].reqId) &
    forall k : branchType do
        Tree[1].directory[k][a] = None
    endforall
==>
begin
    --* update condition
    if getDirty(Tree[1].cache, a) then
        memData[a] := getData(Tree[1].cache, a);
    endif;
    removeData(Tree[1].cache, a);
endrule;

rule "L3_send_release_3"
    getState(Tree[1].cache, a) = Tip &
    IsUndefined(Tree[1].reqId) &
    exists k : branchType do
        Tree[1].directory[k][a] = Branch
    end
==>
begin
    removeData(Tree[1].cache, a);
endrule;
endruleset;

ruleset b : branchType do 
--Release through
alias a : Tree[1].chan2[b].buffer[1].addr;
do
    rule "L3_receive_Releasethrough_1"
        Tree[1].chan2[b].used > 0 & -- lzm: maybe we should judge whether the slave_pending[b1][a] = ProbeAck
        Tree[1].chan3[b].used > 0 &
        Tree[1].chan2[b].buffer[1].opcode = Probe &
        Tree[1].chan3[b].buffer[1].opcode = Release &
        Tree[1].chan3[b].buffer[1].para = TtoN &
        Tree[1].chan2[b].buffer[1].addr = Tree[1].chan3[b].buffer[1].addr &
        getState(Tree[1].cache, a) = None
    ==>
    var msg : msgDType;
    begin
        msg.opcode := ReleaseAck;
        msg.addr := a;
        if sendDMsg(Tree[1].chan4[b], msg) then
            memData[a] := Tree[1].chan3[b].buffer[1].data;
            Tree[1].directory[b][a] := None;
            popCMsg(Tree[1].chan3[b]);
        endif;
    endrule;

    rule "L3_receive_Releasethrough_3"
        Tree[1].chan2[b].used > 0 &
        Tree[1].chan3[b].used > 0 &
        Tree[1].chan2[b].buffer[1].opcode = Probe &
        Tree[1].chan3[b].buffer[1].opcode = Release &
        Tree[1].chan3[b].buffer[1].para = BtoN &
        Tree[1].chan2[b].buffer[1].addr = Tree[1].chan3[b].buffer[1].addr &
        getState(Tree[1].cache, a) = None
    ==>
    var msg : msgDType;
    begin
        msg.opcode := ReleaseAck;
        msg.addr := a;
        if sendDMsg(Tree[1].chan4[b], msg) then
            memData[a] := Tree[1].chan3[b].buffer[1].data;
            Tree[1].directory[b][a] := None;
            popCMsg(Tree[1].chan3[b]);
        endif;
    endrule;

    rule "L3_receive_ReleaseThrough_5"
        Tree[1].chan2[b].used > 0 &
        Tree[1].chan3[b].used > 0 &
        Tree[1].chan2[b].buffer[1].opcode = Probe &
        Tree[1].chan3[b].buffer[1].opcode = Release &
        Tree[1].chan3[b].buffer[1].para = TtoB &
        Tree[1].chan2[b].buffer[1].addr = Tree[1].chan3[b].buffer[1].addr &
        getState(Tree[1].cache, a) = None
    ==>
    var msg : msgDType;
    begin
        msg.opcode := ReleaseAck;
        msg.addr := a;
        if sendDMsg(Tree[1].chan4[b], msg) then
            memData[a] := Tree[1].chan3[b].buffer[1].data;
            Tree[1].directory[b][a] := Branch;
            popCMsg(Tree[1].chan3[b]);
        endif;
    endrule;
endalias;

alias a : Tree[1].chan1[b].buffer[1].addr;
do
    rule "L3_receive_Acquire_BtoT_None_Branch_None"
        Tree[1].chan1[b].used > 0 &
        Tree[1].chan1[b].buffer[1].opcode = Acquire &
        Tree[1].chan1[b].buffer[1].para = BtoT & 
        (IsUndefined(Tree[1].reqId) | Tree[1].reqId = b) &
        getState(Tree[1].cache, a) = None & 
        Tree[1].directory[b][a] = Branch &
        forall k : branchType do
            k != b -> Tree[1].directory[k][a] = None
        endforall &
        IsUndefined(Tree[1].slave_pending[b][a])
    ==>
    var msg : msgDType;
    begin
        msg.opcode := Grant;
        msg.para := toT;
        msg.data := memData[a];
        msg.dirty := false;
        msg.addr := a;
        if sendDMsg(Tree[1].chan4[b], msg) then
            auxData[a] := memData[a];
            Tree[1].directory[b][a] := Tip;
            Tree[1].slave_pending[b][a] := pending_GrantAck;
            popAMsg(Tree[1].chan1[b]);
            undefine Tree[1].reqId;
        endif;
    endrule;

    -- not exist in table
    rule "L3_receive_Acquire_BtoT_Branch_None_None"
        Tree[1].chan1[b].used > 0 &
        Tree[1].chan1[b].buffer[1].opcode = Acquire &
        Tree[1].chan1[b].buffer[1].para = BtoT & 
        (IsUndefined(Tree[1].reqId) | Tree[1].reqId = b) &
        getState(Tree[1].cache, a) = Branch & 
        Tree[1].directory[b][a] = None &
        forall k : branchType do
            k != b -> Tree[1].directory[k][a] = None
        endforall &
        IsUndefined(Tree[1].master_pending[a])
    ==>
    var msg : msgDType;
    begin
        msg.opcode := GrantData;
        msg.para := toT;
        msg.data := getData(Tree[1].cache, a);
        msg.dirty := getDirty(Tree[1].cache, a);
        msg.addr := a;
        if sendDMsg(Tree[1].chan4[b], msg) then
            updateState(Tree[1].cache, a, Trunk);
            auxData[a] := memData[a];
            Tree[1].directory[b][a] := Tip;
            Tree[1].slave_pending[b][a] := pending_GrantAck;
            popAMsg(Tree[1].chan1[b]);
            undefine Tree[1].reqId;
        endif;
    endrule;

    rule "L3_receive_Acquire_BtoT_Branch_Branch_None"
        Tree[1].chan1[b].used > 0 &
        Tree[1].chan1[b].buffer[1].opcode = Acquire &
        Tree[1].chan1[b].buffer[1].para = BtoT & 
        (IsUndefined(Tree[1].reqId) | Tree[1].reqId = b) &
        getState(Tree[1].cache, a) = Branch & 
        Tree[1].directory[b][a] = Branch &
        forall k : branchType do
            k != b -> Tree[1].directory[k][a] = None
        endforall &
        IsUndefined(Tree[1].slave_pending[b][a])
    ==>
    var msg : msgDType;
    begin
        msg.opcode := Grant;
        msg.para := toT;
        msg.addr := a;
        if sendDMsg(Tree[1].chan4[b], msg) then
            updateState(Tree[1].cache, a, Trunk);
            auxData[a] := memData[a];
            Tree[1].directory[b][a] := Tip;
            Tree[1].slave_pending[b][a] := pending_GrantAck;
            popAMsg(Tree[1].chan1[b]);
            undefine Tree[1].reqId;
        endif;
    endrule;

    rule "L3_receive_Acquire_NtoB(NtoT/BtoT)_None_None_None"
        Tree[1].chan1[b].used > 0 &
        Tree[1].chan1[b].buffer[1].opcode = Acquire &
        (Tree[1].chan1[b].buffer[1].para = NtoB 
        | Tree[1].chan1[b].buffer[1].para = NtoT) &
        (IsUndefined(Tree[1].reqId) | Tree[1].reqId = b) &
        getState(Tree[1].cache, a) = None &
        Tree[1].directory[b][a] = None &
        forall k : branchType do
            k != b -> Tree[1].directory[k][a] = None
        endforall &
        IsUndefined(Tree[1].slave_pending[b][a])
    ==>
    var msg : msgDType;
    begin
        msg.opcode := GrantData;
        msg.para := toT;
        msg.data := memData[a];
        msg.dirty := false;
        msg.addr := a;
        if sendDMsg(Tree[1].chan4[b], msg) then
            auxData[a] := memData[a];
            Tree[1].directory[b][a] := Tip;
            Tree[1].slave_pending[b][a] := pending_GrantAck;
            popAMsg(Tree[1].chan1[b]);
            undefine Tree[1].reqId;
        endif;
    endrule;

    rule "L3_receive_Acquire_NtoT_Branch_None_None"
        Tree[1].chan1[b].used > 0 &
        Tree[1].chan1[b].buffer[1].opcode = Acquire &
        Tree[1].chan1[b].buffer[1].para = NtoT &
        (IsUndefined(Tree[1].reqId) | Tree[1].reqId = b) &
        getState(Tree[1].cache, a) = Branch &
        Tree[1].directory[b][a] = None &
        forall k : branchType do
            k != b -> Tree[1].directory[k][a] = None
        endforall &
        IsUndefined(Tree[1].slave_pending[b][a])
    ==>
    var msg : msgDType;
    begin
        msg.opcode := GrantData;
        msg.para := toT;
        msg.data := getData(Tree[1].cache, a);
        msg.dirty := getDirty(Tree[1].cache, a);
        msg.addr := a;
        if sendDMsg(Tree[1].chan4[b], msg) then
            updateState(Tree[1].cache, a, Trunk);
            Tree[1].directory[b][a] := Tip;
            Tree[1].slave_pending[b][a] := pending_GrantAck;
            popAMsg(Tree[1].chan1[b]);
            undefine Tree[1].reqId;
        endif;
    endrule;
endalias
endruleset;

/*
invariant "reachability"
forall a:addrType do
    !(getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[3].cache, a) = Branch &
    getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[7].cache, a) = None)
endforall;
*/
-- invariant "newest"
-- forall i : nodeId; a:addrType do
--     (getState(Tree[i].cache, a) = Tip | getState(Tree[i].cache, a) = Branch) -> getData(Tree[i].cache, a) = auxData[a]
-- endforall;

-- invariant "Axiom_1"
-- forall i : nodeId; j : nodeId; a:addrType do
--     i != j -> 
--     !(getState(Tree[i].cache, a) = Tip & getState(Tree[j].cache, a) = Tip)
-- endforall;

-- invariant "Axiom_2"
-- forall i : cacheId; a:addrType do
--     getState(Tree[i].cache, a) = Trunk ->
--     exists b :branchType do
--         Tree[i].directory[b][a] = Tip
--     end
-- endforall &
-- forall i : coreId; a:addrType do
--     getState(Tree[i].cache, a) != Trunk 
-- endforall;

-- invariant "Axiom_3"
-- forall i : cacheId; a:addrType do
--     forall b1 : branchType do
--         forall b2 : branchType do
--             b1 != b2 & Tree[i].directory[b1][a] = Tip -> getState(Tree[i].cache, a) != Branch & Tree[i].directory[b2][a] != Branch
--         endforall
--     endforall
-- endforall;

invariant "test_reachable_state_1"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_2"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_3"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Tip )
  endforall;

invariant "test_reachable_state_4"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_5"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_6"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Tip & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_7"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_8"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_9"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_10"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_11"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Tip & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_12"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_13"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_14"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_15"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_16"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_17"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_18"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_19"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_20"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Tip & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_21"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_22"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_23"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_24"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_25"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_26"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_27"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_28"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_29"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_30"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_31"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_32"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_33"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_34"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_35"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_36"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_37"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Trunk & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Tip )
  endforall;

invariant "test_reachable_state_38"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Trunk & getState(Tree[6].cache, a) = Tip & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_39"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Tip & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_40"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Tip & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_41"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Tip & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_42"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Tip & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_43"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_44"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_45"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_46"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_47"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_48"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_49"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_50"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_51"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_52"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_53"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_54"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_55"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_56"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_57"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_58"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_59"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_60"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_61"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_62"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_63"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_64"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_65"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_66"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_67"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_68"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_69"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_70"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_71"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_72"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_73"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_74"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_75"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Trunk & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Tip & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_76"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Trunk & getState(Tree[4].cache, a) = Tip & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_77"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Tip & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_78"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Tip & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_79"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Tip & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_80"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = None & getState(Tree[2].cache, a) = Tip & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_81"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_82"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_83"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_84"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_85"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_86"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_87"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_88"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_89"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_90"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_91"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_92"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_93"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_94"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_95"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_96"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_97"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_98"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_99"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_100"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_101"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_102"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_103"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_104"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_105"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_106"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_107"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_108"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_109"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_110"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_111"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_112"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_113"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_114"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_115"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_116"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_117"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_118"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_119"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_120"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_121"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_122"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_123"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_124"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_125"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_126"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_127"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_128"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_129"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_130"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_131"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_132"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_133"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_134"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_135"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_136"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_137"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_138"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_139"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_140"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_141"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_142"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_143"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_144"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Branch & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_145"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Tip )
  endforall;

invariant "test_reachable_state_146"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Tip & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_147"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Tip & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_148"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Tip & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_149"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Trunk & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Tip )
  endforall;

invariant "test_reachable_state_150"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Trunk & getState(Tree[6].cache, a) = Tip & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_151"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Tip & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_152"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Tip & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_153"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Tip & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_154"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Tip & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_155"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = Trunk & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Tip & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_156"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = Trunk & getState(Tree[4].cache, a) = Tip & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_157"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = Tip & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_158"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = Tip & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_159"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = Tip & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_160"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Trunk & getState(Tree[2].cache, a) = Tip & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_161"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_162"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_163"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_164"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_165"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_166"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_167"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_168"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_169"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_170"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_171"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_172"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_173"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_174"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_175"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_176"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_177"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_178"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_179"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_180"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_181"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_182"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_183"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_184"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_185"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_186"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_187"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_188"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_189"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_190"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_191"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_192"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = None & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_193"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_194"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_195"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_196"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_197"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_198"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_199"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_200"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_201"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_202"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_203"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_204"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_205"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_206"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_207"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_208"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = None & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_209"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_210"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_211"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_212"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_213"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_214"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_215"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_216"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = None & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_217"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_218"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_219"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_220"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = None & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_221"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_222"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = None & getState(Tree[7].cache, a) = Branch )
  endforall;

invariant "test_reachable_state_223"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = None )
  endforall;

invariant "test_reachable_state_224"
  forall a:addrType do
  !( getState(Tree[1].cache, a) = Tip & getState(Tree[2].cache, a) = Branch & getState(Tree[4].cache, a) = Branch & getState(Tree[5].cache, a) = Branch & getState(Tree[3].cache, a) = Branch & getState(Tree[6].cache, a) = Branch & getState(Tree[7].cache, a) = Branch )
  endforall;

