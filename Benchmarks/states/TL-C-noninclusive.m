
Const 
    coreNum: 4;
    allNodeNum: 7;
    allBranchNum: 2;
    ChanNum: 5;
    DataNum: 2;
    
Type
    dataType: Scalarset(DataNum);

    chanType: 1 .. ChanNum;

    coreId: allNodeNum-coreNum+1 .. allNodeNum; 

    l2Id: 2..3;

    l3Id: 1..1;

    cacheId: 1..allNodeNum-coreNum;

    nodeId: 1..allNodeNum;

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

    cacheType: record
        state: stateType;
        data: dataType;
        dirty: boolean;
    end;

    treeNode: Record
        cache: cacheType;
        sons: array[branchType] of nodeId;
        directory: array[branchType] of stateType;
        slave_pending: array[branchType] of slave_pending_Type;
        master_pending: master_pending_Type;
        reqId: branchType;
        -- link: array[branchType] of array[chanType] of msgType;
        chan1: array[branchType] of record opcode: AType; para: growType; data: dataType; dirty: boolean; end;
        chan2: array[branchType] of record opcode: BType; para: capType; data: dataType; dirty: boolean; end;
        chan3: array[branchType] of record opcode: CType; para: pruneType; data: dataType; dirty: boolean; end;
        chan4: array[branchType] of record opcode: DType; para: capType; data: dataType; dirty: boolean; end;
        chan5: array[branchType] of record opcode: EType; data: dataType; dirty: boolean; end;
    end;

Var
    Tree: array [nodeId] of treeNode;
    memData: dataType; 
    auxData: dataType;

startstate "Init"
var son: 1..allNodeNum+1;
begin
    son := 2;
    for cur : l3Id do 
        for i : branchType do
            Tree[cur].sons[i] := son;
            Tree[cur].cache.state := None;
            Tree[cur].cache.dirty := false;
            undefine  Tree[cur].cache.data;
            undefine Tree[i].chan1;
            undefine Tree[i].chan2;
            undefine Tree[i].chan3;
            undefine Tree[i].chan4;
            undefine Tree[i].chan5;
            Tree[cur].cache.state := None;
            undefine Tree[cur].master_pending;
            undefine Tree[cur].slave_pending[i];
            Tree[cur].directory[i] := None;
            undefine Tree[cur].reqId;
            son := son + 1;
        endfor;
    endfor;

    son := 4;
    for cur : l2Id do
        for i : branchType do
            Tree[cur].sons[i] := son;
            Tree[cur].cache.state := None;
            Tree[cur].cache.dirty := false;
            undefine  Tree[cur].cache.data;
            undefine Tree[i].chan1;
            undefine Tree[i].chan2;
            undefine Tree[i].chan3;
            undefine Tree[i].chan4;
            undefine Tree[i].chan5;
            undefine Tree[cur].master_pending;
            undefine Tree[cur].slave_pending[i];
            Tree[cur].directory[i] := None;
            undefine Tree[cur].reqId;
            son := son + 1;
        endfor;
    endfor;

    for cur : coreId do
        Tree[cur].cache.state := None;
        Tree[cur].cache.dirty := false;
        undefine  Tree[cur].cache.data;
        undefine Tree[cur].master_pending;
    endfor;

    for d : dataType do 
        memData := d;
        auxData := d;
    endfor;
endstartstate;

-- modify data
ruleset i : coreId; d: dataType do
rule "store"
    Tree[i].cache.state = Tip
==>
    Tree[i].cache.dirty := true;
    Tree[i].cache.data := d;
    auxData := d;
endrule;
endruleset;

-- L1 sends msg
ruleset j : l2Id; b : branchType do 
rule "send_AcquireBlock_toB"
    Tree[Tree[j].sons[b]].cache.state = None &
    IsUndefined(Tree[Tree[j].sons[b]].master_pending)
==>
begin
    Tree[j].chan1[b].opcode := Acquire;
    Tree[j].chan1[b].para := NtoB;
    Tree[Tree[j].sons[b]].master_pending := pending_Grant;
endrule;

rule "send_AcquirePerm_toT"
    Tree[Tree[j].sons[b]].cache.state = Branch &
    IsUndefined(Tree[Tree[j].sons[b]].master_pending)
==>
begin
    Tree[j].chan1[b].opcode := Acquire;
    Tree[j].chan1[b].para := BtoT;
    Tree[Tree[j].sons[b]].master_pending := pending_Grant;
endrule;

rule "send_AcquireBlock_toT"
    Tree[Tree[j].sons[b]].cache.state = None &
    IsUndefined(Tree[Tree[j].sons[b]].master_pending)
==>
begin
    Tree[j].chan1[b].opcode := Acquire;
    Tree[j].chan1[b].para := NtoT;
    Tree[Tree[j].sons[b]].master_pending := pending_Grant;
endrule;

rule "send_Release_BtoN"
    Tree[Tree[j].sons[b]].cache.state = Branch &
    IsUndefined(Tree[j].chan3[b].opcode) &
    IsUndefined(Tree[Tree[j].sons[b]].master_pending)
==>
begin
    Tree[j].chan3[b].opcode := Release;
    Tree[j].chan3[b].para := BtoN;
    Tree[j].chan3[b].data := Tree[Tree[j].sons[b]].cache.data;
    Tree[j].chan3[b].dirty := false;
    Tree[Tree[j].sons[b]].master_pending := pending_ReleaseAck;
    Tree[Tree[j].sons[b]].cache.state := None;
    undefine Tree[Tree[j].sons[b]].cache.data;
endrule;

rule "send_Release_TtoN"
    Tree[Tree[j].sons[b]].cache.state = Tip &
    IsUndefined(Tree[j].chan3[b].opcode) &
    IsUndefined(Tree[Tree[j].sons[b]].master_pending) 
==>
begin
    Tree[j].chan3[b].opcode := Release;
    Tree[j].chan3[b].para := TtoN;
    Tree[j].chan3[b].data := Tree[Tree[j].sons[b]].cache.data;
    Tree[j].chan3[b].dirty := Tree[Tree[j].sons[b]].cache.dirty;
    Tree[Tree[j].sons[b]].cache.dirty := false;
    Tree[Tree[j].sons[b]].master_pending := pending_ReleaseAck;
    Tree[Tree[j].sons[b]].cache.state := None;
    undefine Tree[Tree[j].sons[b]].cache.data;
endrule;
endruleset;

-- L1 responds
ruleset j : l2Id; b : branchType do 
rule "respond_Grant_BtoT"
    !IsUndefined(Tree[j].chan4[b].opcode) &
    Tree[j].chan4[b].opcode = Grant &
    Tree[j].chan4[b].para = toT &
    Tree[Tree[j].sons[b]].cache.state = Branch
==>
begin
    Tree[Tree[j].sons[b]].cache.state := Tip;
    undefine Tree[j].chan4[b];
    undefine Tree[Tree[j].sons[b]].master_pending;
    Tree[j].chan5[b].opcode := GrantAck;
endrule;

rule "respond_Grant_NtoT"
    !IsUndefined(Tree[j].chan4[b].opcode) &
    Tree[j].chan4[b].opcode = GrantData &
    Tree[j].chan4[b].para = toT &
    Tree[Tree[j].sons[b]].cache.state = None
==>
begin
    Tree[Tree[j].sons[b]].cache.state := Tip;
    Tree[Tree[j].sons[b]].cache.data := Tree[j].chan4[b].data;
    undefine Tree[j].chan4[b];
    undefine Tree[Tree[j].sons[b]].master_pending;
    Tree[j].chan5[b].opcode := GrantAck;
endrule;

rule "respond_GrantData_NtoB"
    !IsUndefined(Tree[j].chan4[b].opcode) &
    Tree[j].chan4[b].opcode = GrantData &
    Tree[j].chan4[b].para = toB &
    Tree[Tree[j].sons[b]].cache.state = None
==>
begin
    Tree[Tree[j].sons[b]].cache.state := Branch;
    Tree[Tree[j].sons[b]].cache.data := Tree[j].chan4[b].data;
    undefine Tree[j].chan4[b];
    undefine Tree[Tree[j].sons[b]].master_pending;
    Tree[j].chan5[b].opcode := GrantAck;
endrule;

rule "respond_Probe_NtoN"
    (IsUndefined(Tree[Tree[j].sons[b]].master_pending) | 
    Tree[Tree[j].sons[b]].master_pending != pending_ReleaseAck) &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    (Tree[j].chan2[b].para = toN | 
    Tree[j].chan2[b].para = toB) &
    Tree[Tree[j].sons[b]].cache.state = None
==>
begin
    Tree[j].chan3[b].opcode := ProbeAck;
    Tree[j].chan3[b].para := NtoN;
    undefine Tree[j].chan2[b];
    Tree[Tree[j].sons[b]].cache.state := None;
endrule;

rule "respond_Probe_BtoN"
    (IsUndefined(Tree[Tree[j].sons[b]].master_pending) | 
    Tree[Tree[j].sons[b]].master_pending != pending_ReleaseAck) &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[j].chan2[b].para = toN &
    Tree[Tree[j].sons[b]].cache.state = Branch
==>
begin
    Tree[j].chan3[b].opcode := ProbeAck;
    Tree[j].chan3[b].para := BtoN;
    Tree[j].chan3[b].data := Tree[Tree[j].sons[b]].cache.data;
    Tree[j].chan3[b].dirty := false;
    undefine Tree[j].chan2[b];
    Tree[Tree[j].sons[b]].cache.state := None;
    undefine Tree[Tree[j].sons[b]].cache.data;
endrule;

rule "respond_Probe_BtoB"
    (IsUndefined(Tree[Tree[j].sons[b]].master_pending) | 
    Tree[Tree[j].sons[b]].master_pending != pending_ReleaseAck) &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[j].chan2[b].para = toB &
    Tree[Tree[j].sons[b]].cache.state = Branch
==>
begin
    Tree[j].chan3[b].opcode := ProbeAck;
    Tree[j].chan3[b].para := BtoB;
    Tree[j].chan3[b].data := Tree[Tree[j].sons[b]].cache.data;
    Tree[j].chan3[b].dirty := false;
    undefine Tree[j].chan2[b];
endrule;

rule "respond_Probe_TtoN"
    (IsUndefined(Tree[Tree[j].sons[b]].master_pending) | 
    Tree[Tree[j].sons[b]].master_pending != pending_ReleaseAck) &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[j].chan2[b].para = toN &
    Tree[Tree[j].sons[b]].cache.state = Tip
==>
begin
    Tree[j].chan3[b].opcode := ProbeAck;
    Tree[j].chan3[b].para := TtoN;
    Tree[j].chan3[b].data := Tree[Tree[j].sons[b]].cache.data;
    Tree[j].chan3[b].dirty := Tree[Tree[j].sons[b]].cache.dirty;
    Tree[Tree[j].sons[b]].cache.dirty := false;
    undefine Tree[j].chan2[b];
    Tree[Tree[j].sons[b]].cache.state := None;
    undefine Tree[Tree[j].sons[b]].cache.data;
endrule;

rule "respond_Probe_TtoB"
    (IsUndefined(Tree[Tree[j].sons[b]].master_pending) | 
    Tree[Tree[j].sons[b]].master_pending != pending_ReleaseAck) &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[j].chan2[b].para = toB &
    Tree[Tree[j].sons[b]].cache.state = Tip
==>
begin
    Tree[j].chan3[b].opcode := ProbeAck;
    Tree[j].chan3[b].para := TtoB;
    Tree[j].chan3[b].data := Tree[Tree[j].sons[b]].cache.data;
    Tree[j].chan3[b].dirty := Tree[Tree[j].sons[b]].cache.dirty;
    Tree[Tree[j].sons[b]].cache.dirty := false;
    undefine Tree[j].chan2[b];
    Tree[Tree[j].sons[b]].cache.state := Branch;
endrule;

rule "receive_ReleaseAck"
    !IsUndefined(Tree[j].chan4[b].opcode) &
    Tree[j].chan4[b].opcode = ReleaseAck
==>
begin
    undefine Tree[Tree[j].sons[b]].master_pending;
    undefine Tree[j].chan4[b];
endrule;
endruleset;

-- Ln receive
-- from upper level
-- Ln <-> Ln+1
ruleset i : cacheId; b : branchType do 
rule "Ln_receive_Acquire_BtoT_Tip_Branch_None"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = BtoT &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = Tip &
    Tree[i].directory[b] = Branch &
    forall k : branchType do
        k != b -> Tree[i].directory[k] = None
    endforall &
    IsUndefined(Tree[i].slave_pending[b])
==>
begin
    undefine Tree[i].chan1[b];
    Tree[i].chan4[b].opcode := Grant;
    Tree[i].chan4[b].para := toT;
    undefine Tree[i].reqId;
    Tree[i].directory[b] := Tip;
    Tree[i].cache.state := Trunk;
    Tree[i].slave_pending[b] := pending_GrantAck;
endrule;

-- not exsits in table
rule "Ln_receive_Acquire_BtoT_Tip_None_None"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = BtoT &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = Tip &
    Tree[i].directory[b] = None &
    forall k : branchType do
        k != b -> Tree[i].directory[k] = None
    endforall &
    IsUndefined(Tree[i].slave_pending[b])
==>
begin
    undefine Tree[i].chan1[b];
    Tree[i].chan4[b].opcode := GrantData;
    Tree[i].chan4[b].para := toT;
    Tree[i].chan4[b].data := Tree[i].cache.data;
    undefine Tree[i].reqId;
    Tree[i].directory[b] := Tip;
    Tree[i].cache.state := Trunk;
    Tree[i].slave_pending[b] := pending_GrantAck;
endrule;

-- not exsits in table
rule "Ln_receive_Acquire_BtoT_Trunk_None_Tip"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = BtoT &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = Trunk &
    Tree[i].directory[b] = None &
    forall k : branchType do
        k != b -> Tree[i].directory[k] = Tip &
        IsUndefined(Tree[i].slave_pending[k])
    endforall
==>
begin
    Tree[i].reqId := b;
    for k : branchType do
        if k != b & Tree[i].directory[k] = Tip then       
            Tree[i].chan2[k].opcode := Probe;
            Tree[i].chan2[k].para := toN;
            Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

-- not exsits in table
rule "Ln_receive_Acquire_BtoT_Branch_None_Branch"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = BtoT &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = Branch &
    Tree[i].directory[b] = None &
    exists k : branchType do
        k != b & Tree[i].directory[k] = Branch &
        IsUndefined(Tree[i].slave_pending[k])
    end
==>
begin
    Tree[i].reqId := b;
    for k : branchType do
        if k != b & Tree[i].directory[k] = Branch then       
            Tree[i].chan2[k].opcode := Probe;
            Tree[i].chan2[k].para := toN;
            Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

-- not exsits in table
rule "Ln_receive_Acquire_BtoT_None_None_Branch"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = BtoT &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = None &
    Tree[i].directory[b] = None &
    exists k : branchType do
        k != b & Tree[i].directory[k] = Branch &
        IsUndefined(Tree[i].slave_pending[k])
    end
==>
begin
    Tree[i].reqId := b;
    for k : branchType do
        if k != b & Tree[i].directory[k] = Branch then       
            Tree[i].chan2[k].opcode := Probe;
            Tree[i].chan2[k].para := toN;
            Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Acquire_BtoT_Tip_Branch_Branch"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = BtoT &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = Tip &
    Tree[i].directory[b] = Branch &
    exists k : branchType do
        k != b &
        Tree[i].directory[k] = Branch &
        IsUndefined(Tree[i].slave_pending[k])
    end
==>
begin
    Tree[i].reqId := b;
    for k : branchType do
        if k != b & Tree[i].directory[k] = Branch then   
            Tree[i].chan2[k].opcode := Probe;
            Tree[i].chan2[k].para := toN;
            Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Acquire_BtoT_Branch_Branch_Branch"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = BtoT & 
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = Branch & 
    Tree[i].directory[b] = Branch &
    exists k : branchType do
        k != b & Tree[i].directory[k] = Branch &
        IsUndefined(Tree[i].slave_pending[k])
    end
==>
begin
    Tree[i].reqId := b;
    for k : branchType do
        if k != b & Tree[i].directory[k] = Branch then   
            Tree[i].chan2[k].opcode := Probe;
            Tree[i].chan2[k].para := toN;
            Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Acquire_BtoT_None_Branch_Branch"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = BtoT & 
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = None & 
    Tree[i].directory[b] = Branch &
    exists k : branchType do
        k != b & Tree[i].directory[k] = Branch &
        IsUndefined(Tree[i].slave_pending[k])     
    end
==>
begin
    Tree[i].reqId := b;
    for k : branchType do
        if k != b & Tree[i].directory[k] = Branch then       
            Tree[i].chan2[k].opcode := Probe;
            Tree[i].chan2[k].para := toN;
            Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Acquire_NtoB_None_None_Branch"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = NtoB &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = None &
    Tree[i].directory[b] = None &
    exists k : branchType do
        k != b & Tree[i].directory[k] = Branch &
        IsUndefined(Tree[i].slave_pending[k])   
    end
==>
begin
    Tree[i].reqId := b;
    for k : branchType do
        if k != b & Tree[i].directory[k] = Branch then       
            Tree[i].chan2[k].opcode := Probe;
            Tree[i].chan2[k].para := toB;
            Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Acquire_NtoB_None_None_Tip"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = NtoB &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = None &
    Tree[i].directory[b] = None &
    exists k : branchType do
        k != b & Tree[i].directory[k] = Tip &
        IsUndefined(Tree[i].slave_pending[k])   
    end
==>
begin
    Tree[i].reqId := b;
    for k : branchType do
        if k != b & Tree[i].directory[k] = Tip then       
            Tree[i].chan2[k].opcode := Probe;
            Tree[i].chan2[k].para := toB;
            Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Acquire_NtoB_Tip_None_None"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = NtoB &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = Tip &
    Tree[i].directory[b] = None &
    forall k : branchType do
        k != b -> Tree[i].directory[k] = None
    endforall &
    IsUndefined(Tree[i].slave_pending[b]) 
==>
begin
    undefine Tree[i].chan1[b];  
    Tree[i].chan4[b].opcode := GrantData;
    Tree[i].chan4[b].para := toT;
    Tree[i].chan4[b].data := Tree[i].cache.data;
    undefine Tree[i].reqId;
    Tree[i].slave_pending[b] := pending_GrantAck;
    Tree[i].directory[b] := Tip;
    Tree[i].cache.state := Trunk;
endrule;

rule "Ln_receive_Acquire_NtoB_Tip_None_Branch"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = NtoB &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = Tip &
    Tree[i].directory[b] = None &
    forall k : branchType do
        k != b -> Tree[i].directory[k] = Branch
    endforall &
    IsUndefined(Tree[i].slave_pending[b]) 
==>
begin
    undefine Tree[i].chan1[b];
    Tree[i].chan4[b].opcode := GrantData;
    Tree[i].chan4[b].para := toB;
    Tree[i].chan4[b].data := Tree[i].cache.data;
    undefine Tree[i].reqId;
    Tree[i].slave_pending[b] := pending_GrantAck;
    Tree[i].directory[b] := Branch;
endrule;

rule "Ln_receive_Acquire_NtoB_Branch_None_Branch/None"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = NtoB &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = Branch &
    Tree[i].directory[b] = None &
    IsUndefined(Tree[i].slave_pending[b]) 
==>
begin
    undefine Tree[i].chan1[b];
    Tree[i].chan4[b].opcode := GrantData;
    Tree[i].chan4[b].para := toB;
    Tree[i].chan4[b].data := Tree[i].cache.data;
    undefine Tree[i].reqId;
    Tree[i].slave_pending[b] := pending_GrantAck;
    Tree[i].directory[b] := Branch;
endrule;

rule "Ln_receive_Acquire_NtoB_Trunk_None_Tip"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = NtoB &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = Trunk &
    Tree[i].directory[b] = None &
    exists k : branchType do
        k != b &
        Tree[i].directory[k] = Tip &
        IsUndefined(Tree[i].slave_pending[k]) 
    end
==>
begin
    Tree[i].reqId := b;
    for k : branchType do
        if k != b & Tree[i].directory[k] = Tip then       
            Tree[i].chan2[k].opcode := Probe;
            Tree[i].chan2[k].para := toB;
            Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Acquire_NtoT_None_None_Branch"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = NtoT &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = None &
    Tree[i].directory[b] = None &
    exists k : branchType do
        k != b & Tree[i].directory[k] = Branch &
        IsUndefined(Tree[i].slave_pending[k]) 
    end
==>
begin
    Tree[i].reqId := b;
    for k : branchType do
        if k != b & Tree[i].directory[k] = Branch then       
            Tree[i].chan2[k].opcode := Probe;
            Tree[i].chan2[k].para := toN;
            Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Acquire_NtoT_None_None_Tip"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = NtoT &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = None &
    Tree[i].directory[b] = None &
    exists k : branchType do
        k != b & Tree[i].directory[k] = Tip &
        IsUndefined(Tree[i].slave_pending[k]) 
    end
==>
begin
    Tree[i].reqId := b;
    for k : branchType do
        if k != b & Tree[i].directory[k] = Tip then       
            Tree[i].chan2[k].opcode := Probe;
            Tree[i].chan2[k].para := toN;
            Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Acquire_NtoT_Branch_None_Branch"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = NtoT &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = Branch &
    Tree[i].directory[b] = None &
    exists k : branchType do
        k != b & Tree[i].directory[k] = Branch &
        IsUndefined(Tree[i].slave_pending[k]) 
    end
==>
begin
    Tree[i].reqId := b;
    for k : branchType do
        if k != b & Tree[i].directory[k] = Branch then
            Tree[i].chan2[k].opcode := Probe;
            Tree[i].chan2[k].para := toN;
            Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Acquire_NtoT_Tip_None_Branch"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = NtoT &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = Tip &
    Tree[i].directory[b] = None &
    exists k : branchType do
        k != b &
        Tree[i].directory[k] = Branch &
        IsUndefined(Tree[i].slave_pending[k]) 
    end
==>
begin
    Tree[i].reqId := b;
    for k : branchType do
        if k != b & Tree[i].directory[k] = Branch then
            Tree[i].chan2[k].opcode := Probe;
            Tree[i].chan2[k].para := toN;
            Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Acquire_NtoT_Tip_None_None"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = NtoT &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = Tip &
    Tree[i].directory[b] = None &
    forall k : branchType do
        k != b -> Tree[i].directory[k] = None
    end &
    IsUndefined(Tree[i].slave_pending[b]) 
==>
begin
    undefine Tree[i].chan1[b];
    Tree[i].chan4[b].opcode := GrantData;
    Tree[i].chan4[b].para := toT;
    Tree[i].chan4[b].data := Tree[i].cache.data;
    undefine Tree[i].reqId;
    Tree[i].slave_pending[b] := pending_GrantAck;
    Tree[i].directory[b] := Tip;
    Tree[i].cache.state := Trunk;
endrule;

rule "Ln_receive_Acquire_NtoT_Trunk_None_Tip"
    !IsUndefined(Tree[i].chan1[b].opcode) &
    Tree[i].chan1[b].opcode = Acquire &
    Tree[i].chan1[b].para = NtoT &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b) &
    Tree[i].cache.state = Trunk & 
    Tree[i].directory[b] = None &
    exists k : branchType do
        k != b &
        Tree[i].directory[k] = Tip &
        IsUndefined(Tree[i].slave_pending[k]) 
    end
==>
begin
    Tree[i].reqId := b;
    for k : branchType do
        if k != b & Tree[i].directory[k] = Tip then  
            Tree[i].chan2[k].opcode := Probe;
            Tree[i].chan2[k].para := toN;
            Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_GrantAck"
    !IsUndefined(Tree[i].chan5[b].opcode) &
    Tree[i].chan5[b].opcode = GrantAck
==>
begin
    undefine Tree[i].chan5[b];
    undefine Tree[i].slave_pending[b];
endrule;
endruleset;

-- Ln <-> Ln+1 <-> Ln+2
ruleset j : l3Id ; b1 : branchType; b2 : branchType do 
alias i : Tree[j].sons[b2] do
rule "Ln_receive_Acquire_BtoT_Branch_Branch_None"
    !IsUndefined(Tree[i].chan1[b1].opcode) &
    Tree[i].chan1[b1].opcode = Acquire &
    Tree[i].chan1[b1].para = BtoT & 
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b1) &
    Tree[i].cache.state = Branch & 
    Tree[i].directory[b1] = Branch &
    forall k : branchType do
        k != b1 -> Tree[i].directory[k] = None
    endforall &
    IsUndefined(Tree[i].master_pending)
==>
begin
    Tree[i].reqId := b1;
    Tree[j].chan1[b2].opcode := Acquire;
    Tree[j].chan1[b2].para := BtoT;
    Tree[i].master_pending := pending_Grant;
endrule;

rule "Ln_receive_Acquire_BtoT_None_Branch_None"
    !IsUndefined(Tree[i].chan1[b1].opcode) &
    Tree[i].chan1[b1].opcode = Acquire &
    Tree[i].chan1[b1].para = BtoT & 
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b1) &
    Tree[i].cache.state = None & 
    Tree[i].directory[b1] = Branch &
    forall k : branchType do
        k != b1 -> Tree[i].directory[k] = None
    endforall &
    IsUndefined(Tree[i].master_pending)
==>
begin
    Tree[i].reqId := b1;
    Tree[j].chan1[b2].opcode := Acquire;
    Tree[j].chan1[b2].para := BtoT;
    Tree[i].master_pending := pending_Grant;
endrule;

-- not exist in table
rule "Ln_receive_Acquire_BtoT_None_None_None"
    !IsUndefined(Tree[i].chan1[b1].opcode) &
    Tree[i].chan1[b1].opcode = Acquire &
    Tree[i].chan1[b1].para = BtoT & 
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b1) &
    Tree[i].cache.state = None & 
    Tree[i].directory[b1] = None &
    forall k : branchType do
        k != b1 -> Tree[i].directory[k] = None
    endforall &
    IsUndefined(Tree[i].master_pending)
==>
begin
    Tree[i].reqId := b1;
    Tree[j].chan1[b2].opcode := Acquire;
    Tree[j].chan1[b2].para := NtoT;
    Tree[i].master_pending := pending_Grant;
endrule;

-- not exist in table
rule "Ln_receive_Acquire_BtoT_Branch_None_None"
    !IsUndefined(Tree[i].chan1[b1].opcode) &
    Tree[i].chan1[b1].opcode = Acquire &
    Tree[i].chan1[b1].para = BtoT & 
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b1) &
    Tree[i].cache.state = Branch & 
    Tree[i].directory[b1] = None &
    forall k : branchType do
        k != b1 -> Tree[i].directory[k] = None
    endforall &
    IsUndefined(Tree[i].master_pending)
==>
begin
    Tree[i].reqId := b1;
    Tree[j].chan1[b2].opcode := Acquire;
    Tree[j].chan1[b2].para := BtoT;
    Tree[i].master_pending := pending_Grant;
endrule;

rule "Ln_receive_Acquire_NtoB_None_None_None"
    !IsUndefined(Tree[i].chan1[b1].opcode) &
    Tree[i].chan1[b1].opcode = Acquire &
    Tree[i].chan1[b1].para = NtoB &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b1) &
    Tree[i].cache.state = None &
    Tree[i].directory[b1] = None &
    forall k : branchType do
        k != b1 -> Tree[i].directory[k] = None
    endforall &
    IsUndefined(Tree[i].master_pending)
==>
begin
    Tree[i].reqId := b1;
    Tree[j].chan1[b2].opcode := Acquire;
    Tree[j].chan1[b2].para := NtoB;
    Tree[i].master_pending := pending_Grant;
endrule;

rule "Ln_receive_Acquire_NtoT_None_None_None"
    !IsUndefined(Tree[i].chan1[b1].opcode) &
    Tree[i].chan1[b1].opcode = Acquire &
    Tree[i].chan1[b1].para = NtoT &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b1) &
    Tree[i].cache.state = None &
    Tree[i].directory[b1] = None &
    forall k : branchType do
        k != b1 -> Tree[i].directory[k] = None
    end &
    IsUndefined(Tree[i].master_pending)
==>
begin
    Tree[i].reqId := b1;
    Tree[j].chan1[b2].opcode := Acquire;
    Tree[j].chan1[b2].para := NtoT;
    Tree[i].master_pending := pending_Grant;
endrule;

rule "Ln_receive_Acquire_NtoT_Branch_None_None"
    !IsUndefined(Tree[i].chan1[b1].opcode) &
    Tree[i].chan1[b1].opcode = Acquire &
    Tree[i].chan1[b1].para = NtoT &
    (IsUndefined(Tree[i].reqId) | Tree[i].reqId = b1) &
    Tree[i].cache.state = Branch &
    Tree[i].directory[b1] = None &
    forall k : branchType do
        k != b1 -> Tree[i].directory[k] = None
    endforall &
    IsUndefined(Tree[i].master_pending)
==>
begin
    Tree[i].reqId := b1;
    Tree[j].chan1[b2].opcode := Acquire;
    Tree[j].chan1[b2].para := BtoT;
    Tree[i].master_pending := pending_Grant;
endrule;
endalias;
endruleset;

ruleset i : cacheId; b : branchType do
rule "Ln_receive_ProbeAck_1"
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = ProbeAck &
    Tree[i].chan3[b].para = NtoN
==>
begin
    undefine Tree[i].chan3[b];
    Tree[i].directory[b] := None;
    undefine Tree[i].slave_pending[b];
endrule;

rule "Ln_receive_ProbeAck_2"
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = ProbeAck &
    Tree[i].chan3[b].para = BtoN &
    Tree[i].cache.state = None
==>
begin
    Tree[i].cache.state := Branch;
    Tree[i].cache.data := Tree[i].chan3[b].data;
    Tree[i].cache.dirty := Tree[i].chan3[b].dirty;
    undefine Tree[i].chan3[b];
    Tree[i].directory[b] := None;
    undefine Tree[i].slave_pending[b];
endrule;

rule "Ln_receive_ProbeAck_3"
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = ProbeAck &
    Tree[i].chan3[b].para = BtoN &
    Tree[i].cache.state = Branch
==>
begin
    Tree[i].cache.data := Tree[i].chan3[b].data;
    Tree[i].cache.dirty := Tree[i].chan3[b].dirty;
    undefine Tree[i].chan3[b];
    Tree[i].directory[b] := None;
    undefine Tree[i].slave_pending[b];
endrule;

rule "Ln_receive_ProbeAck_4"
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = ProbeAck &
    Tree[i].chan3[b].para = BtoN &
    Tree[i].cache.state = Tip
==>
begin
    Tree[i].cache.data := Tree[i].chan3[b].data;
    Tree[i].cache.dirty := Tree[i].chan3[b].dirty;
    undefine Tree[i].chan3[b];
    Tree[i].directory[b] := None;
    undefine Tree[i].slave_pending[b];
endrule;

rule "Ln_receive_ProbeAck_5"
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = ProbeAck &
    Tree[i].chan3[b].para = BtoB &
    Tree[i].cache.state = None
==>
begin
    Tree[i].cache.state := Branch;
    Tree[i].cache.data := Tree[i].chan3[b].data;
    Tree[i].cache.dirty := Tree[i].chan3[b].dirty;
    undefine Tree[i].chan3[b];
    undefine Tree[i].slave_pending[b];
endrule;

rule "Ln_receive_ProbeAck_6"
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = ProbeAck &
    Tree[i].chan3[b].para = BtoB &
    (Tree[i].cache.state = Branch | Tree[i].cache.state = Tip)
==>
begin
    undefine Tree[i].chan3[b];
    undefine Tree[i].slave_pending[b];
endrule;

rule "Ln_receive_ProbeAck_7"
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = ProbeAck &
    Tree[i].chan3[b].para = TtoN

==>
begin
    Tree[i].cache.state := Tip;
    Tree[i].cache.data := Tree[i].chan3[b].data;
    Tree[i].cache.dirty := Tree[i].chan3[b].dirty;
    undefine Tree[i].chan3[b];
    Tree[i].directory[b] := None;
    undefine Tree[i].slave_pending[b];
endrule;

rule "Ln_receive_ProbeAck_8"
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = ProbeAck &
    Tree[i].chan3[b].para = TtoB
==>
begin
    Tree[i].cache.state := Tip;
    Tree[i].cache.data := Tree[i].chan3[b].data;
    Tree[i].cache.dirty := Tree[i].chan3[b].dirty;
    undefine Tree[i].chan3[b];
    Tree[i].directory[b] := Branch;
    undefine Tree[i].slave_pending[b];
endrule;

rule "Ln_receive_Release_TtoN_Trunk"
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = Release &
    Tree[i].chan3[b].para = TtoN &
    Tree[i].cache.state = Trunk
==>
begin
    Tree[i].cache.state := Tip;
    Tree[i].cache.data := Tree[i].chan3[b].data;
    Tree[i].cache.dirty := Tree[i].chan3[b].dirty;
    undefine Tree[i].chan3[b];
    Tree[i].directory[b] := None;
    Tree[i].chan4[b].opcode := ReleaseAck;
endrule;

rule "Ln_receive_Release_TtoN_None"
    IsUndefined(Tree[i].chan2[b].opcode) &
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = Release &
    Tree[i].chan3[b].para = TtoN &
    Tree[i].cache.state = None
==>
begin
    Tree[i].cache.state := Tip;
    Tree[i].cache.data := Tree[i].chan3[b].data;
    Tree[i].cache.dirty := Tree[i].chan3[b].dirty;
    undefine Tree[i].chan3[b];
    Tree[i].directory[b] := None;
    Tree[i].chan4[b].opcode := ReleaseAck;
endrule;

rule "Ln_receive_Release_BtoN_Tip"
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = Release &
    Tree[i].chan3[b].para = BtoN &
    Tree[i].cache.state = Tip
==>
begin
    Tree[i].cache.data := Tree[i].chan3[b].data;
    Tree[i].cache.dirty := Tree[i].chan3[b].dirty;
    undefine Tree[i].chan3[b];
    Tree[i].directory[b] := None;
    Tree[i].chan4[b].opcode := ReleaseAck;
endrule;

rule "Ln_receive_Release_BtoN_Branch"
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = Release &
    Tree[i].chan3[b].para = BtoN &
    Tree[i].cache.state = Branch
==>
begin
    Tree[i].cache.data := Tree[i].chan3[b].data;
    Tree[i].cache.dirty := Tree[i].chan3[b].dirty;
    undefine Tree[i].chan3[b];
    Tree[i].directory[b] := None;
    Tree[i].chan4[b].opcode := ReleaseAck;
endrule;

rule "Ln_receive_Release_BtoN_None"
    IsUndefined(Tree[i].chan2[b].opcode) &
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = Release &
    Tree[i].chan3[b].para = BtoN &
    Tree[i].cache.state = None
==>
begin
    Tree[i].cache.state := Branch;
    Tree[i].cache.data := Tree[i].chan3[b].data;
    Tree[i].cache.dirty := Tree[i].chan3[b].dirty;
    undefine Tree[i].chan3[b];
    Tree[i].directory[b] := None;
    Tree[i].chan4[b].opcode := ReleaseAck;
endrule;

rule "Ln_receive_Release_TtoB_Trunk"
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = Release &
    Tree[i].chan3[b].para = TtoB &
    Tree[i].cache.state = Trunk
==>
begin
    Tree[i].cache.state := Tip;
    Tree[i].cache.data := Tree[i].chan3[b].data;
    Tree[i].cache.dirty := Tree[i].chan3[b].dirty;
    undefine Tree[i].chan3[b];
    Tree[i].directory[b] := Branch;
    Tree[i].chan4[b].opcode := ReleaseAck;
endrule;

rule "Ln_receive_Release_TtoB_None"
    IsUndefined(Tree[i].chan2[b].opcode) &
    !IsUndefined(Tree[i].chan3[b].opcode) &
    Tree[i].chan3[b].opcode = Release &
    Tree[i].chan3[b].para = TtoB &
    Tree[i].cache.state = None
==>
begin
    Tree[i].cache.state := Tip;
    Tree[i].cache.data := Tree[i].chan3[b].data;
    Tree[i].cache.dirty := Tree[i].chan3[b].dirty;
    undefine Tree[i].chan3[b];
    Tree[i].directory[b] := Branch;
    Tree[i].chan4[b].opcode := ReleaseAck;
endrule;
endruleset;

--Release Through
ruleset j : l3Id ; b1 : branchType; b2 : branchType do 
alias i : Tree[j].sons[b2] do
rule "Ln_receive_ReleaseThrough_1"
    !IsUndefined(Tree[i].chan2[b1].opcode) &
    Tree[i].chan2[b1].opcode = Probe &
    !IsUndefined(Tree[i].chan3[b1].opcode) &
    Tree[i].chan3[b1].opcode = Release &
    Tree[i].chan3[b1].para = TtoN &
    IsUndefined(Tree[j].chan3[b2].opcode) &
    IsUndefined(Tree[i].master_pending) &
    Tree[i].cache.state = None
==>
begin
    Tree[j].chan3[b2] := Tree[i].chan3[b1];
    Tree[i].master_pending := pending_ReleaseAck;

    undefine Tree[i].chan3[b1];
    Tree[i].directory[b1] := None;
    Tree[i].chan4[b1].opcode := ReleaseAck;
endrule;

rule "Ln_receive_ReleaseThrough_2"
    !IsUndefined(Tree[i].chan2[b1].opcode) &
    Tree[i].chan2[b1].opcode = Probe &
    !IsUndefined(Tree[i].chan3[b1].opcode) &
    Tree[i].chan3[b1].opcode = Release &
    Tree[i].chan3[b1].para = BtoN &
    IsUndefined(Tree[j].chan3[b2].opcode) &
    IsUndefined(Tree[i].master_pending) &
    Tree[i].cache.state = None &
    forall k : branchType do
        k != b1 -> Tree[i].directory[k] = None
    endforall
==>
begin
    Tree[j].chan3[b2] := Tree[i].chan3[b1];
    Tree[i].master_pending := pending_ReleaseAck;

    undefine Tree[i].chan3[b1];
    Tree[i].directory[b1] := None;
    Tree[i].chan4[b1].opcode := ReleaseAck;
    Tree[i].cache.state := None;
endrule;

rule "Ln_receive_ReleaseThrough_6"
    !IsUndefined(Tree[i].chan2[b1].opcode) &
    Tree[i].chan2[b1].opcode = Probe &
    !IsUndefined(Tree[i].chan3[b1].opcode) &
    Tree[i].chan3[b1].opcode = Release &
    Tree[i].chan3[b1].para = BtoN &
    IsUndefined(Tree[j].chan3[b2].opcode) &
    IsUndefined(Tree[i].master_pending) &
    Tree[i].cache.state = None &
    exists k : branchType do
        k != b1 & Tree[i].directory[k] = Branch
    end
==>
begin
    undefine Tree[i].chan3[b1];
    Tree[i].directory[b1] := None;
    Tree[i].chan4[b1].opcode := ReleaseAck;
    Tree[i].cache.state := None;
endrule;
endalias;
endruleset;

-- Ln receive
-- from lower level
ruleset j : l3Id; b : branchType do
alias i : Tree[j].sons[b] do
rule "Ln_receive_GrantData_toB"
    !IsUndefined(Tree[j].chan4[b].opcode) &
    Tree[j].chan4[b].opcode = GrantData &
    Tree[j].chan4[b].para = toB &
    Tree[i].cache.state = None &
    !(IsUndefined(Tree[i].reqId)) &
    IsUndefined(Tree[i].slave_pending[Tree[i].reqId])
==>
begin
    Tree[i].chan4[Tree[i].reqId] := Tree[j].chan4[b];
    undefine Tree[i].chan1[Tree[i].reqId];
    Tree[i].slave_pending[Tree[i].reqId] := pending_GrantAck;
    Tree[i].directory[Tree[i].reqId] := Branch;
    undefine Tree[i].reqId;

    undefine Tree[j].chan4[b];
    undefine Tree[i].master_pending;
    Tree[j].chan5[b].opcode := GrantAck;
endrule;

rule "Ln_receive_GrantData_toT"
    !IsUndefined(Tree[j].chan4[b].opcode) &
    Tree[j].chan4[b].opcode = GrantData &
    Tree[j].chan4[b].para = toT &
    Tree[i].cache.state = None &
    !(IsUndefined(Tree[i].reqId)) &
    IsUndefined(Tree[i].slave_pending[Tree[i].reqId])
==>
begin
    Tree[i].chan4[Tree[i].reqId] := Tree[j].chan4[b];
    undefine Tree[i].chan1[Tree[i].reqId];
    Tree[i].slave_pending[Tree[i].reqId] := pending_GrantAck;
    Tree[i].directory[Tree[i].reqId] := Tip;
    undefine Tree[i].reqId;

    undefine Tree[j].chan4[b];
    undefine Tree[i].master_pending;
    Tree[j].chan5[b].opcode := GrantAck;
endrule;

rule "Ln_receive_Grant_toT_1"
    !IsUndefined(Tree[j].chan4[b].opcode) &
    Tree[j].chan4[b].opcode = Grant &
    Tree[j].chan4[b].para = toT &
    Tree[i].cache.state = Branch &
    !(IsUndefined(Tree[i].reqId)) &
    Tree[i].directory[Tree[i].reqId] = None &
    IsUndefined(Tree[i].slave_pending[Tree[i].reqId])
==>
begin
    Tree[i].cache.state := Trunk;
    Tree[i].chan4[Tree[i].reqId].opcode := GrantData;
    Tree[i].chan4[Tree[i].reqId].para := toT;
    Tree[i].chan4[Tree[i].reqId].data := Tree[i].cache.data;
    undefine Tree[i].chan1[Tree[i].reqId];
    Tree[i].slave_pending[Tree[i].reqId] := pending_GrantAck;
    Tree[i].directory[Tree[i].reqId] := Tip;
    undefine Tree[i].reqId;

    undefine Tree[j].chan4[b];
    undefine Tree[i].master_pending;
    Tree[j].chan5[b].opcode := GrantAck;
endrule;

rule "Ln_receive_Grant_toT_2"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan4[b].opcode) &
    Tree[j].chan4[b].opcode = Grant &
    Tree[j].chan4[b].para = toT &
    Tree[i].cache.state = Branch &
    !(IsUndefined(Tree[i].reqId)) &
    Tree[i].directory[Tree[i].reqId] = Branch &
    IsUndefined(Tree[i].slave_pending[Tree[i].reqId])
==>
begin
    Tree[i].cache.state := Trunk;
    Tree[i].chan4[Tree[i].reqId] := Tree[j].chan4[b];
    undefine Tree[i].chan1[Tree[i].reqId];
    Tree[i].slave_pending[Tree[i].reqId] := pending_GrantAck;
    Tree[i].directory[Tree[i].reqId] := Tip;
    undefine Tree[i].reqId;

    undefine Tree[j].chan4[b];
    undefine Tree[i].master_pending;
    Tree[j].chan5[b].opcode := GrantAck;
endrule;

rule "Ln_receive_Grant_toT_3"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan4[b].opcode) &
    Tree[j].chan4[b].opcode = Grant &
    Tree[j].chan4[b].para = toT &
    Tree[i].cache.state = None &
    !(IsUndefined(Tree[i].reqId)) &
    Tree[i].directory[Tree[i].reqId] = Branch &
    IsUndefined(Tree[i].slave_pending[Tree[i].reqId])
==>
begin
    Tree[i].chan4[Tree[i].reqId] := Tree[j].chan4[b];
    undefine Tree[i].chan1[Tree[i].reqId];
    Tree[i].slave_pending[Tree[i].reqId] := pending_GrantAck;
    Tree[i].directory[Tree[i].reqId] := Tip;
    undefine Tree[i].reqId;

    undefine Tree[j].chan4[b];
    undefine Tree[i].master_pending;
    Tree[j].chan5[b].opcode := GrantAck;
endrule;

rule "Ln_receive_ReleaseAck"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan4[b].opcode) &
    Tree[j].chan4[b].opcode = ReleaseAck
==>
begin
    undefine Tree[j].chan4[b];
    undefine Tree[i].master_pending;
endrule;

rule "Ln_receive_Probe_toN_None_None"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[i].cache.state = None & 
    forall k : branchType do
        Tree[i].directory[k] = None
    endforall &
    (IsUndefined(Tree[i].master_pending) | Tree[i].master_pending != pending_ReleaseAck)
==>
begin
    undefine Tree[j].chan2[b];
    Tree[j].chan3[b].opcode := ProbeAck;
    Tree[j].chan3[b].para := NtoN;
endrule;

rule "Ln_receive_Probe_toN_None_Branch"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[j].chan2[b].para = toN &
    Tree[i].cache.state = None & 
    exists k : branchType do
        Tree[i].directory[k] = Branch
    end
==>
begin
    for k : branchType do
        if  Tree[i].directory[k] = Branch &
            IsUndefined(Tree[i].slave_pending[k]) then
                Tree[i].chan2[k].opcode := Probe;
                Tree[i].chan2[k].para := toN;
                Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Probe_toN_None_Tip"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[j].chan2[b].para = toN &
    Tree[i].cache.state = None & 
    exists k : branchType do
        Tree[i].directory[k] = Tip
    end
==>
begin
    for k : branchType do
        if  Tree[i].directory[k] = Tip &
            IsUndefined(Tree[i].slave_pending[k]) then
                Tree[i].chan2[k].opcode := Probe;
                Tree[i].chan2[k].para := toN;
                Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Probe_toN_None_Branch"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[j].chan2[b].para = toB &
    Tree[i].cache.state = None & 
    exists k : branchType do
        Tree[i].directory[k] = Branch
    end
==>
begin
    for k : branchType do
        if  Tree[i].directory[k] = Branch &
            IsUndefined(Tree[i].slave_pending[k]) then
                Tree[i].chan2[k].opcode := Probe;
                Tree[i].chan2[k].para := toN;
                Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Probe_toB_None_Tip"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[j].chan2[b].para = toB &
    Tree[i].cache.state = None & 
    exists k : branchType do
        Tree[i].directory[k] = Tip
    end
==>
begin
    for k : branchType do
        if  Tree[i].directory[k] = Tip &
            IsUndefined(Tree[i].slave_pending[k]) then
                Tree[i].chan2[k].opcode := Probe;
                Tree[i].chan2[k].para := toB;
                Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Probe_toN_Branch_None"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[i].cache.state = Branch & 
    Tree[j].chan2[b].para = toN &
    forall k : branchType do
        Tree[i].directory[k] = None 
    endforall &
    (IsUndefined(Tree[i].master_pending) | Tree[i].master_pending != pending_ReleaseAck)
==>
begin
    undefine Tree[j].chan2[b];
    Tree[j].chan3[b].opcode := ProbeAck;
    Tree[j].chan3[b].para := BtoN;
    Tree[j].chan3[b].data := Tree[i].cache.data;
    Tree[j].chan3[b].dirty := Tree[i].cache.dirty;
    Tree[i].cache.dirty := false;
    Tree[i].cache.state := None;
    undefine Tree[i].cache.data;
endrule;

rule "Ln_receive_Probe_toN_Branch_Branch"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[i].cache.state = Branch & 
    Tree[j].chan2[b].para = toN &
    exists k : branchType do
        Tree[i].directory[k] = Branch 
    end
==>
begin
    for k : branchType do
        if  Tree[i].directory[k] = Branch &
            IsUndefined(Tree[i].slave_pending[k]) then
                Tree[i].chan2[k].opcode := Probe;
                Tree[i].chan2[k].para := toN;
                Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Probe_toB_Branch"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[i].cache.state = Branch & 
    Tree[j].chan2[b].para = toB &
    (IsUndefined(Tree[i].master_pending) | Tree[i].master_pending != pending_ReleaseAck)
==>
begin
    undefine Tree[j].chan2[b];
    Tree[j].chan3[b].opcode := ProbeAck;
    Tree[j].chan3[b].para := BtoB;
    Tree[j].chan3[b].data := Tree[i].cache.data;
    Tree[j].chan3[b].dirty := Tree[i].cache.dirty;
    Tree[i].cache.dirty := false;
endrule;

--add Probe TtoB
rule "Ln_receive_Probe_toN_Tip_None"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[j].chan2[b].para = toN &
    Tree[i].cache.state = Tip & 
    forall k : branchType do
        Tree[i].directory[k] = None 
    endforall &
    (IsUndefined(Tree[i].master_pending) | Tree[i].master_pending != pending_ReleaseAck)
==>
begin
    undefine Tree[j].chan2[b];
    Tree[j].chan3[b].para := TtoN;
    Tree[j].chan3[b].opcode := ProbeAck;
    Tree[j].chan3[b].data := Tree[i].cache.data;
    Tree[j].chan3[b].dirty := Tree[i].cache.dirty;
    Tree[i].cache.dirty := false;
    Tree[i].cache.state := None;
    undefine Tree[i].cache.data;
endrule;

rule "Ln_receive_Probe_toN_Tip_Branch"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[j].chan2[b].para = toN &
    Tree[i].cache.state = Tip & 
    exists k : branchType do
        Tree[i].directory[k] = Branch 
    end
==>
begin
    for k : branchType do
        if  Tree[i].directory[k] = Branch &
            IsUndefined(Tree[i].slave_pending[k]) then
                Tree[i].chan2[k].opcode := Probe;
                Tree[i].chan2[k].para := toN;
                Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Probe_toB_Tip"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[j].chan2[b].para = toB &
    Tree[i].cache.state = Tip & 
    (IsUndefined(Tree[i].master_pending) | Tree[i].master_pending != pending_ReleaseAck)
==>
begin
    undefine Tree[j].chan2[b];
    Tree[j].chan3[b].opcode := ProbeAck;
    Tree[j].chan3[b].para := TtoB;
    Tree[j].chan3[b].data := Tree[i].cache.data;
    Tree[j].chan3[b].dirty := Tree[i].cache.dirty;
    Tree[i].cache.dirty := false;
    Tree[i].cache.state := Branch;
endrule;

rule "Ln_receive_Probe_toN_Trunk"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[j].chan2[b].para = toN &
    Tree[i].cache.state = Trunk
==>
begin
    for k : branchType do
        if  Tree[i].directory[k] = Tip &
            IsUndefined(Tree[i].slave_pending[k]) then 
                Tree[i].chan2[k].opcode := Probe;
                Tree[i].chan2[k].para := toN;    
                Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;

rule "Ln_receive_Probe_toB_Trunk"
    Tree[j].sons[b] = i &
    !IsUndefined(Tree[j].chan2[b].opcode) &
    Tree[j].chan2[b].opcode = Probe &
    Tree[j].chan2[b].para = toB &
    Tree[i].cache.state = Trunk
==>
begin
    for k : branchType do
        if  Tree[i].directory[k] = Tip &
            IsUndefined(Tree[i].slave_pending[k]) then 
                Tree[i].chan2[k].opcode := Probe;
                Tree[i].chan2[k].para := toB;  
                Tree[i].slave_pending[k] := pending_ProbeAck;
        endif;
    endfor;
endrule;
endalias;
endruleset;

--mod Link[3].opcode = Empty
-- Ln send msg directly
ruleset j : l3Id; b : branchType do
alias i : Tree[j].sons[b] do
rule "Ln_send_Release_1"
    Tree[i].cache.state = Branch &
    IsUndefined(Tree[i].reqId) &
    forall k : branchType do
        Tree[i].directory[k] = None
    endforall &
    IsUndefined(Tree[j].chan3[b].opcode) &
    IsUndefined(Tree[i].master_pending)
==>
begin
    Tree[j].chan3[b].opcode := Release;
    Tree[j].chan3[b].para := BtoN;
    Tree[j].chan3[b].data := Tree[i].cache.data;
    Tree[j].chan3[b].dirty := Tree[i].cache.dirty;
    Tree[i].cache.dirty := false;
    Tree[i].master_pending := pending_ReleaseAck;
    Tree[i].cache.state := None;
    undefine Tree[i].cache.data;
endrule;

rule "Ln_send_Release_2"
    Tree[i].cache.state = Tip &
    IsUndefined(Tree[i].reqId) &
    forall k : branchType do
        Tree[i].directory[k] = None
    endforall &
    IsUndefined(Tree[j].chan3[b].opcode) &
    IsUndefined(Tree[i].master_pending)
==>
begin
    Tree[j].chan3[b].para := TtoN;
    Tree[j].chan3[b].opcode := Release;
    Tree[j].chan3[b].data := Tree[i].cache.data;
    Tree[j].chan3[b].dirty := Tree[i].cache.dirty;
    Tree[i].cache.dirty := false;
    Tree[i].master_pending := pending_ReleaseAck;
    Tree[i].cache.state := None;
    undefine Tree[i].cache.data;
endrule;

rule "Ln_send_Release_5"
    Tree[i].cache.state = Tip &
    IsUndefined(Tree[j].chan3[b].opcode) &
    IsUndefined(Tree[i].reqId) &
    exists k : branchType do
        Tree[i].directory[k] = Branch
    end
==>
begin
    Tree[j].chan3[b].opcode := Release;
    Tree[j].chan3[b].para := TtoB;
    Tree[j].chan3[b].data := Tree[i].cache.data;
    Tree[j].chan3[b].dirty := Tree[i].cache.dirty;
    Tree[i].cache.dirty := false;
    Tree[i].master_pending := pending_ReleaseAck;
    Tree[i].cache.state := None;
    undefine Tree[i].cache.data;
endrule;
endalias;
endruleset;

ruleset i : cacheId do
rule "Ln_send_Release_4"
    Tree[i].cache.state = Branch &
    IsUndefined(Tree[i].reqId) &
    exists b : branchType do
        Tree[i].directory[b] = Branch
    end
==>
begin
    Tree[i].cache.state := None;
    undefine Tree[i].cache.data;
endrule;

rule "Ln_send_Release_7"
    Tree[i].cache.state = Trunk &
    IsUndefined(Tree[i].reqId) &
    exists b : branchType do
        Tree[i].directory[b] = Tip
    end
==>
begin
    Tree[i].cache.state := None;
    undefine Tree[i].cache.data;
endrule;
endruleset;

--special for l3
ruleset b : branchType do 
rule "L3_send_release_1"
    Tree[1].cache.state = Branch &
    IsUndefined(Tree[1].reqId) &
    forall k : branchType do
        Tree[1].directory[k] = None
    endforall
==>
begin
    Tree[1].cache.state := None;
    memData := Tree[1].cache.data;
    undefine Tree[1].cache.data;
    Tree[1].cache.dirty := false;
endrule;

rule "L3_send_release_2"
    Tree[1].cache.state = Tip &
    IsUndefined(Tree[1].reqId) &
    forall k : branchType do
        Tree[1].directory[k] = None
    endforall
==>
begin
    Tree[1].cache.state := None;
    memData := Tree[1].cache.data;
    undefine Tree[1].cache.data;
    Tree[1].cache.dirty := false;
endrule;

rule "L3_send_release_3"
    Tree[1].cache.state = Tip &
    IsUndefined(Tree[1].reqId) &
    exists k : branchType do
        Tree[1].directory[k] = Branch
    end
==>
begin
    Tree[1].cache.state := None;
    Tree[1].cache.dirty := false;
endrule;

--Release through
rule "L3_receive_Releasethrough_1"
    !IsUndefined(Tree[1].chan2[b].opcode) &
    Tree[1].chan2[b].opcode = Probe &
    !IsUndefined(Tree[1].chan3[b].opcode) &
    Tree[1].chan3[b].opcode = Release &
    Tree[1].chan3[b].para = TtoN &
    Tree[1].cache.state = None
==>
begin
    memData := Tree[1].chan3[b].data;
    undefine Tree[1].chan3[b];
    Tree[1].directory[b] := None;
    Tree[1].chan4[b].opcode := ReleaseAck;
endrule;

rule "L3_receive_Releasethrough_3"
    !IsUndefined(Tree[1].chan2[b].opcode) &
    Tree[1].chan2[b].opcode = Probe &
    !IsUndefined(Tree[1].chan3[b].opcode) &
    Tree[1].chan3[b].opcode = Release &
    Tree[1].chan3[b].para = BtoN &
    Tree[1].cache.state = None
==>
begin
    memData := Tree[1].chan3[b].data;
    undefine Tree[1].chan3[b];
    Tree[1].directory[b] := None;
    Tree[1].chan4[b].opcode := ReleaseAck;
endrule;

rule "L3_receive_ReleaseThrough_5"
    !IsUndefined(Tree[1].chan2[b].opcode) &
    Tree[1].chan2[b].opcode = Probe &
    !IsUndefined(Tree[1].chan3[b].opcode) &
    Tree[1].chan3[b].opcode = Release &
    Tree[1].chan3[b].para = TtoB &
    Tree[1].cache.state = None
==>
begin
    memData := Tree[1].chan3[b].data;
    undefine Tree[1].chan3[b];
    Tree[1].directory[b] := Branch;
    Tree[1].chan4[b].opcode := ReleaseAck;
endrule;

rule "L3_receive_Acquire_BtoT_None_Branch_None"
    !IsUndefined(Tree[1].chan1[b].opcode) &
    Tree[1].chan1[b].opcode = Acquire &
    Tree[1].chan1[b].para = BtoT & 
    (IsUndefined(Tree[1].reqId) | Tree[1].reqId = b) &
    Tree[1].cache.state = None & 
    Tree[1].directory[b] = Branch &
    forall k : branchType do
        k != b -> Tree[1].directory[k] = None
    endforall &
    IsUndefined(Tree[1].slave_pending[b])
==>
begin
    undefine Tree[1].chan1[b];
    undefine Tree[1].reqId;
    Tree[1].chan4[b].opcode := Grant;
    Tree[1].chan4[b].para := toT;
    Tree[1].chan4[b].data := memData;
    auxData := memData;
    Tree[1].directory[b] := Tip;
    Tree[1].slave_pending[b] := pending_GrantAck;
endrule;

-- not exist in table
rule "L3_receive_Acquire_BtoT_None_None_None"
    !IsUndefined(Tree[1].chan1[b].opcode) &
    Tree[1].chan1[b].opcode = Acquire &
    Tree[1].chan1[b].para = BtoT & 
    (IsUndefined(Tree[1].reqId) | Tree[1].reqId = b) &
    Tree[1].cache.state = None & 
    Tree[1].directory[b] = None &
    forall k : branchType do
        k != b -> Tree[1].directory[k] = None
    endforall &
    IsUndefined(Tree[1].master_pending)
==>
begin
    undefine Tree[1].chan1[b];
    undefine Tree[1].reqId;
    Tree[1].chan4[b].opcode := GrantData;
    Tree[1].chan4[b].para := toT;
    Tree[1].chan4[b].data := memData;
    auxData := memData;
    Tree[1].directory[b] := Tip;
    Tree[1].slave_pending[b] := pending_GrantAck;
endrule;

-- not exist in table
rule "L3_receive_Acquire_BtoT_Branch_None_None"
    !IsUndefined(Tree[1].chan1[b].opcode) &
    Tree[1].chan1[b].opcode = Acquire &
    Tree[1].chan1[b].para = BtoT & 
    (IsUndefined(Tree[1].reqId) | Tree[1].reqId = b) &
    Tree[1].cache.state = Branch & 
    Tree[1].directory[b] = None &
    forall k : branchType do
        k != b -> Tree[1].directory[k] = None
    endforall &
    IsUndefined(Tree[1].master_pending)
==>
begin
    undefine Tree[1].chan1[b];
    undefine Tree[1].reqId;
    Tree[1].cache.state := Trunk;
    Tree[1].chan4[b].opcode := GrantData;
    Tree[1].chan4[b].para := toT;
    Tree[1].chan4[b].data := Tree[1].cache.data;
    Tree[1].directory[b] := Tip;
    Tree[1].slave_pending[b] := pending_GrantAck;
endrule;

rule "L3_receive_Acquire_BtoT_Branch_Branch_None"
    !IsUndefined(Tree[1].chan1[b].opcode) &
    Tree[1].chan1[b].opcode = Acquire &
    Tree[1].chan1[b].para = BtoT & 
    (IsUndefined(Tree[1].reqId) | Tree[1].reqId = b) &
    Tree[1].cache.state = Branch & 
    Tree[1].directory[b] = Branch &
    forall k : branchType do
        k != b -> Tree[1].directory[k] = None
    endforall &
    IsUndefined(Tree[1].slave_pending[b])
==>
begin
    undefine Tree[1].chan1[b];
    undefine Tree[1].reqId;
    Tree[1].chan4[b].opcode := Grant;
    Tree[1].chan4[b].para := toT;
    Tree[1].directory[b] := Tip;
    Tree[1].cache.state := Trunk;
    Tree[1].slave_pending[b] := pending_GrantAck;
endrule;

rule "L3_receive_Acquire_NtoB_None_None_None"
    !IsUndefined(Tree[1].chan1[b].opcode) &
    Tree[1].chan1[b].opcode = Acquire &
    Tree[1].chan1[b].para = NtoB &
    (IsUndefined(Tree[1].reqId) | Tree[1].reqId = b) &
    Tree[1].cache.state = None &
    Tree[1].directory[b] = None &
    forall k : branchType do
        k != b -> Tree[1].directory[k] = None
    endforall &
    IsUndefined(Tree[1].slave_pending[b])
==>
begin
    undefine Tree[1].chan1[b];
    undefine Tree[1].reqId;
    Tree[1].chan4[b].opcode := GrantData;
    Tree[1].chan4[b].para := toT;
    Tree[1].chan4[b].data := memData;
    auxData := memData;
    Tree[1].directory[b] := Tip;
    Tree[1].slave_pending[b] := pending_GrantAck;
endrule;

rule "L3_receive_Acquire_NtoT_None_None_None"
    !IsUndefined(Tree[1].chan1[b].opcode) &
    Tree[1].chan1[b].opcode = Acquire &
    Tree[1].chan1[b].para = NtoT &
    (IsUndefined(Tree[1].reqId) | Tree[1].reqId = b) &
    Tree[1].cache.state = None &
    Tree[1].directory[b] = None &
    forall k : branchType do
        k != b -> Tree[1].directory[k] = None
    endforall &
    IsUndefined(Tree[1].slave_pending[b])
==>
begin
    undefine Tree[1].chan1[b];
    undefine Tree[1].reqId;
    Tree[1].chan4[b].opcode := GrantData;
    Tree[1].chan4[b].para := toT;
    Tree[1].chan4[b].data := memData;
    auxData := memData;
    Tree[1].directory[b] := Tip;
    Tree[1].slave_pending[b] := pending_GrantAck;
endrule;

rule "L3_receive_Acquire_NtoT_Branch_None_None"
    !IsUndefined(Tree[1].chan1[b].opcode) &
    Tree[1].chan1[b].opcode = Acquire &
    Tree[1].chan1[b].para = NtoT &
    (IsUndefined(Tree[1].reqId) | Tree[1].reqId = b) &
    Tree[1].cache.state = Branch &
    Tree[1].directory[b] = None &
    forall k : branchType do
        k != b -> Tree[1].directory[k] = None
    endforall &
    IsUndefined(Tree[1].slave_pending[b])
==>
begin
    undefine Tree[1].chan1[b];
    undefine Tree[1].reqId;
    Tree[1].chan4[b].opcode := GrantData;
    Tree[1].chan4[b].para := toT;
    Tree[1].directory[b] := Tip;
    Tree[1].chan4[b].data := Tree[1].cache.data;
    auxData := memData;
    Tree[1].cache.state := Trunk;
    Tree[1].slave_pending[b] := pending_GrantAck;
endrule;
endruleset;

invariant "newest"
forall i : nodeId do
    (Tree[i].cache.state = Tip | Tree[i].cache.state = Branch) -> (!IsUndefined(Tree[i].cache.data) & Tree[i].cache.data = auxData)
endforall;

invariant "Axiom_1"
forall i : nodeId; j : nodeId do
    i != j -> 
    !(Tree[i].cache.state = Tip & Tree[j].cache.state = Tip)
endforall;

invariant "Axiom_2"
forall i : cacheId do
    Tree[i].cache.state = Trunk ->
    exists b :branchType do
        Tree[i].directory[b] = Tip
    end
endforall &
forall i : coreId do
    Tree[i].cache.state != Trunk 
endforall;

invariant "Axiom_3"
forall i : cacheId do
    forall b1 : branchType do
        forall b2 : branchType do
            b1 != b2 & Tree[i].directory[b1] = Tip -> Tree[i].cache.state != Branch & Tree[i].directory[b2] != Branch
        endforall
    endforall
endforall;

invariant "test_reachable_state_1"
forall a : addr do
 !( Tree[1].cache.state = None & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_2"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_3"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_4"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_5"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_6"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_7"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_8"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = Branch & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_9"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = None & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_10"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = Branch & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_11"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_12"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_13"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_14"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_15"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_16"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_17"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_18"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_19"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_20"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_21"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_22"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_23"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_24"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_25"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_26"
forall a : addr do
 !( Tree[1].cache.state = Branch & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_27"
forall a : addr do
 !( Tree[1].cache.state = Trunk & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Trunk & Tree[6].cache.state = None & Tree[7].cache.state = Tip )
endforall;
invariant "test_reachable_state_28"
forall a : addr do
 !( Tree[1].cache.state = Trunk & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Trunk & Tree[6].cache.state = Tip & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_29"
forall a : addr do
 !( Tree[1].cache.state = Trunk & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Tip & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_30"
forall a : addr do
 !( Tree[1].cache.state = Trunk & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Tip & Tree[6].cache.state = None & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_31"
forall a : addr do
 !( Tree[1].cache.state = Trunk & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Tip & Tree[6].cache.state = Branch & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_32"
forall a : addr do
 !( Tree[1].cache.state = Trunk & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Tip & Tree[6].cache.state = Branch & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_33"
forall a : addr do
 !( Tree[1].cache.state = Trunk & Tree[2].cache.state = Trunk & Tree[4].cache.state = None & Tree[5].cache.state = Tip & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_34"
forall a : addr do
 !( Tree[1].cache.state = Trunk & Tree[2].cache.state = Trunk & Tree[4].cache.state = Tip & Tree[5].cache.state = None & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_35"
forall a : addr do
 !( Tree[1].cache.state = Trunk & Tree[2].cache.state = Tip & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_36"
forall a : addr do
 !( Tree[1].cache.state = Trunk & Tree[2].cache.state = Tip & Tree[4].cache.state = None & Tree[5].cache.state = Branch & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_37"
forall a : addr do
 !( Tree[1].cache.state = Trunk & Tree[2].cache.state = Tip & Tree[4].cache.state = Branch & Tree[5].cache.state = None & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_38"
forall a : addr do
 !( Tree[1].cache.state = Trunk & Tree[2].cache.state = Tip & Tree[4].cache.state = Branch & Tree[5].cache.state = Branch & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_39"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_40"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_41"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_42"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_43"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = None & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_44"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_45"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = Branch & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_46"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = None & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_47"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = Branch & Tree[3].cache.state = None & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_48"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_49"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_50"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_51"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_52"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_53"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_54"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_55"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = None & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_56"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_57"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_58"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_59"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = None & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_60"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_61"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = None & Tree[7].cache.state = Branch )
endforall;
invariant "test_reachable_state_62"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = None )
endforall;
invariant "test_reachable_state_63"
forall a : addr do
 !( Tree[1].cache.state = Tip & Tree[2].cache.state = Branch & Tree[4].cache.state = Branch & Tree[5].cache.state = Branch & Tree[3].cache.state = Branch & Tree[6].cache.state = Branch & Tree[7].cache.state = Branch )
endforall;
