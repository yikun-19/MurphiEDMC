
Const
-- config start
coreNum: 4;
allNodeNum: 7;
allBranchNum: 2;
-- config end
dataNum: 2;
addrNum: 2;

Type

        dataType: 0..dataNum;

addrType: 1..addrNum;

validDataType: 1..dataNum;

l1Id: allNodeNum-coreNum+1 .. allNodeNum;

cacheId: 1..allNodeNum-coreNum;

nodeId: 1..allNodeNum;

branchType: 1.. allBranchNum;

stateType: enum{None,Trunk,Branch,Tip};

AType: enum{A_None, AcquirePerm, AcquireBlock};

BType: enum{B_None, Probe};

CType: enum{C_None, ReleaseData, ProbeAckData};

DType: enum{D_None, Grant, GrantData, ReleaseAck};

EType: enum{E_None, GrantAck};

growType: enum{NtoB, NtoT, BtoT};

capType: enum{toN, toB, toT};

pruneType: enum{BtoN, TtoN, TtoB, NtoN, BtoB};

chAType: record
        opcode: AType;
para: growType;
addr: addrType;
end;

chBType: record
        opcode: BType;
para: capType;
addr: addrType;
end;

chCType: record
        opcode: CType;
para: pruneType;
addr: addrType;
data: dataType;
dirty: boolean;
end;

chDType: record
        opcode: DType;
para: capType;
addr: addrType;
data: dataType;
end;

chEType: record
        opcode: EType;
addr: addrType;
end;

slave_pending_Type: enum{S_None, pending_ProbeAckData, pending_GrantAck};

master_pending_Type: enum{M_None, pending_Grant, pending_GrantData, pending_ReleaseAck};

cacheType: record
        state: stateType;
data: dataType;
dirty: boolean;
end;

TreeNode: Record
        cache: array[addrType] of cacheType;
sons: array[branchType] of nodeId;
directory: array[branchType] of array[addrType] of stateType;
slave_pending: array[branchType] of array[addrType] of slave_pending_Type;
master_pending: array[addrType] of master_pending_Type;
chanA: array[branchType] of chAType;
chanB: array[branchType] of chBType;
chanC: array[branchType] of chCType;
chanD: array[branchType] of chDType;
chanE: array[branchType] of chEType;
end;

Var
        Tree: array [nodeId] of TreeNode;
memData: array[addrType] of validDataType;
auxData: array[addrType] of validDataType;

startstate "Init"
var son: 1..allNodeNum+1;
begin
        son := 2;
for cur : cacheId do
for a : addrType do
Tree[cur].cache[a].state := None;
Tree[cur].cache[a].dirty := false;
Tree[cur].master_pending[a] := M_None;
endfor;
for i : branchType do
Tree[cur].sons[i] := son;
Tree[cur].chanA[i].opcode := A_None;
Tree[cur].chanB[i].opcode := B_None;
Tree[cur].chanC[i].opcode := C_None;
Tree[cur].chanD[i].opcode := D_None;
Tree[cur].chanE[i].opcode := E_None;
for a : addrType do
Tree[cur].slave_pending[i][a] := S_None;
Tree[cur].directory[i][a] := None;
endfor;
son := son + 1;
endfor;
endfor;

for cur : l1Id do
for a : addrType do
Tree[cur].cache[a].state := None;
Tree[cur].cache[a].dirty := false;
Tree[cur].master_pending[a] := M_None;
endfor;
endfor;

for a : addrType do
for d: validDataType do
memData[a] := d;
auxData[a] := d;
endfor;
endfor;
endstartstate;


ruleset i: l1Id; d: validDataType; a : addrType do
rule "Store"
Tree[i].cache[a].state = Tip
                         ==>
Tree[i].cache[a].data := d;
Tree[i].cache[a].dirty := true;
auxData[a] := d;
endrule;
endruleset;

ruleset i: l1Id; a: addrType do
rule "send_AcquireBlock_toB"
Tree[i].cache[a].state = None &
                         Tree[i].master_pending[a] = M_None
                                                     ==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode  := AcquireBlock;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para    := NtoB;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr    := a;
Tree[i].master_pending[a] := pending_GrantData;
endrule;

rule "send_AcquirePerm_toT"
Tree[i].cache[a].state = Branch &
                         Tree[i].master_pending[a] = M_None
                                                     ==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode  := AcquirePerm;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := BtoT;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr := a;
Tree[i].master_pending[a] := pending_Grant;
endrule;

rule "send_AcquireBlock_toT"
Tree[i].cache[a].state = None &
                         Tree[i].master_pending[a] = M_None
                                                     ==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode  := AcquireBlock;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := NtoT;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr := a;
Tree[i].master_pending[a] := pending_GrantData;
endrule;

rule "send_Release_BtoN"
Tree[i].cache[a].state = Branch &
                         Tree[i].master_pending[a] = M_None &
                                                     Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None
                                                                                                      ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ReleaseData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := BtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[a].data;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].dirty := false;
Tree[i].master_pending[a] := pending_ReleaseAck;
Tree[i].cache[a].state := None;
endrule;

rule "send_Release_TtoN"
Tree[i].cache[a].state = Tip &
                         Tree[i].master_pending[a] = M_None &
                                                     Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None
                                                                                                      ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := TtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ReleaseData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[a].data;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].dirty := false;
Tree[i].master_pending[a] := pending_ReleaseAck;
Tree[i].cache[a].state := None;
endrule;
endruleset;

-- L1 responds
ruleset i: l1Id; a: addrType do
rule "respond_Grant_toT"
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = Grant &
                                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].para = toT &
                                                                                                Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                                                               ==>
begin
        Tree[i].cache[a].state := Tip;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
Tree[i].master_pending[a] := M_None;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].opcode  := GrantAck;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].addr  := a;
endrule;

rule "respond_GrantData_toB"
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = GrantData &
                                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].para = toB &
                                                                                                Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                                                               ==>
begin
        Tree[i].cache[a].state := Branch;
Tree[i].cache[a].data := Tree[(i-2)/allBranchNum+1].chanD[i%2+1].data;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
Tree[i].master_pending[a] := M_None;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].opcode  := GrantAck;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].addr  := a;
endrule;

rule "respond_GrantData_toT"
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = GrantData &
                                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].para = toT &
                                                                                                Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                                                               ==>
begin
        Tree[i].cache[a].state := Tip;
Tree[i].cache[a].data := Tree[(i-2)/allBranchNum+1].chanD[i%2+1].data;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
Tree[i].master_pending[a] := M_None;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].opcode := GrantAck;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].addr := a;
endrule;

rule "respond_Probe_NtoN"
(Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe |
                                                  Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe) &
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                               (Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toN |
                                                                                               Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toB) &
                                               Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None &
                                                                                                (Tree[i].master_pending[a] = M_None |
                                                                                                                             Tree[i].master_pending[a] != pending_ReleaseAck)&
                                                                                                Tree[i].cache[a].state = None
                                                                                                                         ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode  := ProbeAckData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para    := NtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr    := a;
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode  := B_None;
Tree[i].cache[a].state := None;
endrule;

rule "respond_Probe_BtoN"
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toN &
                                                                                                Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                               Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None &
                                                                                                                                                                                                (Tree[i].master_pending[a] = M_None |
                                                                                                                                                                                                                             Tree[i].master_pending[a] != pending_ReleaseAck)&
                                                                                                                                                                                                Tree[i].cache[a].state = Branch
                                                                                                                                                                                                                         ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode  := ProbeAckData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para    := BtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr    := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data    := Tree[i].cache[a].data;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].dirty   := false;
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode  := B_None;
Tree[i].cache[a].state := None;
endrule;

rule "respond_Probe_BtoB"
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toB &
                                                                                                Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                               Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None &
                                                                                                                                                                                                (Tree[i].master_pending[a] = M_None |
                                                                                                                                                                                                                             Tree[i].master_pending[a] != pending_ReleaseAck)&
                                                                                                                                                                                                Tree[i].cache[a].state = Branch
                                                                                                                                                                                                                         ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode  := ProbeAckData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para    := BtoB;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr    := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data    := Tree[i].cache[a].data;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].dirty   := false;
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode  := B_None;
endrule;

rule "respond_Probe_TtoN"
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toN &
                                                                                                Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                               Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None &
                                                                                                                                                                                                (Tree[i].master_pending[a] = M_None |
                                                                                                                                                                                                                             Tree[i].master_pending[a] != pending_ReleaseAck)&
                                                                                                                                                                                                Tree[i].cache[a].state = Tip
                                                                                                                                                                                                                         ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para    := TtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode  := ProbeAckData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr    := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data    := Tree[i].cache[a].data;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].dirty   := Tree[i].cache[a].dirty;
Tree[i].cache[a].dirty      := false;
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode  := B_None;
Tree[i].cache[a].state := None;
endrule;

rule "respond_Probe_TtoB"
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None &
                                                                                                                                                 (Tree[i].master_pending[a] = M_None |
                                                                                                                                                                              Tree[i].master_pending[a] != pending_ReleaseAck)&
                                                                                                                                                 Tree[i].cache[a].state = Tip
                                                                                                                                                                          ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para    := TtoB;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode  := ProbeAckData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr    := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data    := Tree[i].cache[a].data;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].dirty   := Tree[i].cache[a].dirty;
Tree[i].cache[a].dirty      := false;
Tree[i].cache[a].state := Branch;
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode  := B_None;
endrule;

rule "receive_ReleaseAck"
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = ReleaseAck &
                                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                ==>
begin
        Tree[i].master_pending[a] := M_None;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
endrule;
endruleset;

-- Ln <-> Ln+1
ruleset i: cacheId; b: branchType; a: addrType do
rule "Ln_receive_AcquirePerm_Tip_Branch_None"
Tree[i].chanA[b].opcode = AcquirePerm &
                          Tree[i].chanA[b].addr = a &
                                                  Tree[i].cache[a].state = Tip &
                                                                           forall k : branchType do
(k != b -> Tree[i].directory[k][a] = None) &
Tree[i].slave_pending[k][a] = S_None
        endforall &
Tree[i].directory[b][a] = Branch
==>
begin
        Tree[i].chanA[b].opcode := A_None;
Tree[i].chanD[b].opcode := Grant;
Tree[i].chanD[b].para := toT;
Tree[i].chanD[b].addr := a;
Tree[i].chanD[b].data := Tree[i].cache[a].data;
Tree[i].directory[b][a] := Tip;
Tree[i].cache[a].state := Trunk;
Tree[i].slave_pending[b][a] := pending_GrantAck;
endrule;

rule "Ln_receive_AcquirePerm_Tip_None_None"
Tree[i].chanA[b].opcode = AcquirePerm &
                          Tree[i].chanA[b].addr = a &
                                                  Tree[i].cache[a].state = Tip &
                                                                           forall k : branchType do
(k != b -> Tree[i].directory[k][a] = None) &
Tree[i].slave_pending[k][a] = S_None
        endforall &
Tree[i].directory[b][a] = None
==>
begin
        Tree[i].chanA[b].opcode := A_None;
Tree[i].chanD[b].opcode := GrantData;
Tree[i].chanD[b].para := toT;
Tree[i].chanD[b].addr := a;
Tree[i].chanD[b].data := Tree[i].cache[a].data;
Tree[i].directory[b][a] := Tip;
Tree[i].cache[a].state := Trunk;
Tree[i].slave_pending[b][a] := pending_GrantAck;
endrule;

rule "Ln_receive_AcquirePerm_Tip_x_Branch"
Tree[i].chanA[b].opcode = AcquirePerm &
                          Tree[i].chanA[b].addr = a &
                                                  Tree[i].cache[a].state = Tip &
                                                                           exists k : branchType do
k != b &
Tree[i].directory[k][a] = Branch &
Tree[i].slave_pending[k][a] = S_None
        end
==>
begin
for k : branchType do
if k != b & Tree[i].directory[k][a] = Branch &
Tree[i].slave_pending[k][a] = S_None then
Tree[i].chanB[k].opcode := Probe;
Tree[i].chanB[k].para := toN;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k][a] := pending_ProbeAckData;
endif;
endfor;
endrule;

rule "Ln_receive_AcquirePerm_x_None_Tip"
Tree[i].chanA[b].opcode = AcquirePerm &
                          Tree[i].chanA[b].addr = a &
                                                  Tree[i].directory[b][a] = None &
                                                                            exists k : branchType do
k != b &
Tree[i].directory[k][a] = Tip &
Tree[i].slave_pending[k][a] = S_None
        end
==>
begin
for k : branchType do
if k != b & Tree[i].directory[k][a] = Branch &
Tree[i].slave_pending[k][a] = S_None then
Tree[i].chanB[k].opcode := Probe;
Tree[i].chanB[k].para := toN;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k][a] := pending_ProbeAckData;
endif;
endfor;
endrule;

rule "Ln_receive_AcquireBlock_NtoB_Branch/Tip_x_x"
Tree[i].chanA[b].opcode = AcquireBlock &
                          Tree[i].chanA[b].para = NtoB &
                                                  Tree[i].chanA[b].addr = a &
                                                                          (Tree[i].cache[a].state = Branch | Tree[i].cache[a].state = Tip) &
                                                                          Tree[i].slave_pending[b][a] = S_None
                                                                                                        ==>
begin
        Tree[i].chanA[b].opcode := A_None;
Tree[i].chanD[b].opcode := GrantData;
Tree[i].chanD[b].para := toB;
Tree[i].chanD[b].addr := a;
Tree[i].chanD[b].data := Tree[i].cache[a].data;
Tree[i].slave_pending[b][a] := pending_GrantAck;
Tree[i].directory[b][a] := Branch;
endrule;

rule "Ln_receive_AcquireBlock_NtoB_x_None_Tip"
Tree[i].chanA[b].opcode = AcquireBlock &
                          Tree[i].chanA[b].para = NtoB &
                                                  Tree[i].chanA[b].addr = a &
                                                                          exists k : branchType do
k != b &
Tree[i].directory[k][a] = Tip &
Tree[i].slave_pending[k][a] = S_None
        end
==>
begin
for k : branchType do
if k != b & Tree[i].directory[k][a] = Tip &
Tree[i].slave_pending[k][a] = S_None then
Tree[i].chanB[k].opcode := Probe;
Tree[i].chanB[k].para := toB;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k][a] := pending_ProbeAckData;
endif;
endfor;
endrule;

rule "Ln_receive_AcquireBlock_NtoB_None_Branch"
Tree[i].chanA[b].opcode = AcquireBlock &
                          Tree[i].chanA[b].para = NtoB &
                                                  Tree[i].chanA[b].addr = a &
                                                                          Tree[i].cache[a].state = None &
                                                                                                   exists k : branchType do
k != b &
Tree[i].directory[k][a] = Branch &
Tree[i].slave_pending[k][a] = S_None
        end
==>
begin
for k : branchType do
if k != b & Tree[i].directory[k][a] = Branch &
Tree[i].slave_pending[k][a] = S_None then
Tree[i].chanB[k].opcode := Probe;
Tree[i].chanB[k].para := toB;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k][a] := pending_ProbeAckData;
endif;
endfor;
endrule;

rule "Ln_receive_AcquireBlock_NtoT_Tip_None_None"
Tree[i].chanA[b].opcode = AcquireBlock &
                          Tree[i].chanA[b].para = NtoT &
                                                  Tree[i].chanA[b].addr = a &
                                                                          Tree[i].cache[a].state = Tip &
                                                                                                   forall k : branchType do
Tree[i].directory[k][a] = None &
Tree[i].slave_pending[k][a] = S_None
        endforall
==>
begin
        Tree[i].chanA[b].opcode := A_None;
Tree[i].chanD[b].opcode := GrantData;
Tree[i].chanD[b].para := toT;
Tree[i].chanD[b].addr := a;
Tree[i].chanD[b].data := Tree[i].cache[a].data;
Tree[i].slave_pending[b][a] := pending_GrantAck;
Tree[i].cache[a].state := Trunk;
Tree[i].directory[b][a] := Tip;
endrule;

rule "Ln_receive_AcquireBlock_NtoT_Tip_x_Branch"
Tree[i].chanA[b].opcode = AcquireBlock &
                          Tree[i].chanA[b].para = NtoT &
                                                  Tree[i].chanA[b].addr = a &
                                                                          Tree[i].cache[a].state = Tip &
                                                                                                   exists k : branchType do
k != b &
Tree[i].directory[k][a] = Branch &
Tree[i].slave_pending[k][a] = S_None
        end
==>
begin
for k : branchType do
if k != b & Tree[i].directory[k][a] = Branch &
Tree[i].slave_pending[k][a] = S_None then
Tree[i].chanB[k].opcode := Probe;
Tree[i].chanB[k].para := toN;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k][a] := pending_ProbeAckData;
endif;
endfor;
endrule;

rule "Ln_receive_AcquireBlock_NtoT_x_None_Tip"
Tree[i].chanA[b].opcode = AcquireBlock &
                          Tree[i].chanA[b].para = NtoT &
                                                  Tree[i].chanA[b].addr = a &
                                                                          Tree[i].directory[b][a] = None &
                                                                                                    exists k : branchType do
k != b &
Tree[i].directory[k][a] = Tip &
Tree[i].slave_pending[k][a] = S_None
        end
==>
begin
for k : branchType do
if k != b & Tree[i].directory[k][a] = Tip then
Tree[i].chanB[k].opcode := Probe;
Tree[i].chanB[k].para := toN;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k][a] := pending_ProbeAckData;
endif;
endfor;
endrule;

rule "Ln_receive_ProbeAck_NtoN"
Tree[i].chanC[b].opcode = ProbeAckData &
                          Tree[i].chanC[b].para = NtoN &
                                                  Tree[i].chanC[b].addr = a
                                                                          ==>
begin
        Tree[i].directory[b][a] := None;
Tree[i].chanC[b].opcode := C_None;
Tree[i].slave_pending[b][a] := S_None;
endrule;

rule "Ln_receive_ProbeAck_BtoN"
Tree[i].chanC[b].opcode = ProbeAckData &
                          Tree[i].chanC[b].para = BtoN &
                                                  Tree[i].chanC[b].addr = a
                                                                          ==>
begin
if Tree[i].cache[a].state = None then
        Tree[i].cache[a].state := Branch;
Tree[i].cache[a].data := Tree[i].chanC[b].data;
endif;
Tree[i].directory[b][a] := None;
Tree[i].chanC[b].opcode := C_None;
Tree[i].slave_pending[b][a] := S_None;
endrule;

rule "Ln_receive_ProbeAck_BtoB"
Tree[i].chanC[b].opcode = ProbeAckData &
                          Tree[i].chanC[b].para = BtoB &
                                                  Tree[i].chanC[b].addr = a
                                                                          ==>
begin
if Tree[i].cache[a].state = None then
        Tree[i].cache[a].state := Branch;
Tree[i].cache[a].data := Tree[i].chanC[b].data;
endif;
Tree[i].chanC[b].opcode := C_None;
Tree[i].slave_pending[b][a] := S_None;
endrule;

rule "Ln_receive_ProbeAckData_TtoN"
Tree[i].chanC[b].opcode = ProbeAckData &
                          Tree[i].chanC[b].para = TtoN &
                                                  Tree[i].chanC[b].addr = a
                                                                          ==>
begin
        Tree[i].directory[b][a] := None;
Tree[i].cache[a].state := Tip;
Tree[i].cache[a].data := Tree[i].chanC[b].data;
Tree[i].cache[a].dirty := Tree[i].chanC[b].dirty;
Tree[i].chanC[b].opcode := C_None;
Tree[i].slave_pending[b][a] := S_None;
endrule;

rule "Ln_receive_ProbeAckData_TtoB"
Tree[i].chanC[b].opcode = ProbeAckData &
                          Tree[i].chanC[b].para = TtoB &
                                                  Tree[i].chanC[b].addr = a
                                                                          ==>
begin
        Tree[i].directory[b][a] := Branch;
Tree[i].cache[a].state := Tip;
Tree[i].cache[a].data := Tree[i].chanC[b].data;
Tree[i].cache[a].dirty := Tree[i].chanC[b].dirty;
Tree[i].chanC[b].opcode := C_None;
Tree[i].slave_pending[b][a] := S_None;
endrule;

rule "Ln_receive_Release_BtoN"
Tree[i].chanC[b].opcode = ReleaseData &
                          Tree[i].chanC[b].para = BtoN &
                                                  Tree[i].chanC[b].addr = a
                                                                          ==>
begin
        Tree[i].directory[b][a] := None;
if Tree[i].cache[a].state = None then
        Tree[i].cache[a].state := Branch;
Tree[i].cache[a].data := Tree[i].chanC[b].data;
endif;
Tree[i].chanD[b].opcode := ReleaseAck;
Tree[i].chanC[b].opcode := C_None;
endrule;

rule "Ln_receive_Release_TtoN"
Tree[i].chanC[b].opcode = ReleaseData &
                          Tree[i].chanC[b].para = TtoN &
                                                  Tree[i].chanC[b].addr = a
                                                                          ==>
begin
        Tree[i].directory[b][a] := None;
Tree[i].cache[a].state := Tip;
Tree[i].cache[a].data := Tree[i].chanC[b].data;
Tree[i].cache[a].dirty := Tree[i].chanC[b].dirty;
Tree[i].chanC[b].opcode := C_None;
Tree[i].chanD[b].opcode := ReleaseAck;
Tree[i].chanD[b].addr := a;
endrule;

rule "Ln_receive_Release_TtoB"
Tree[i].chanC[b].opcode = ReleaseData &
                          Tree[i].chanC[b].para = TtoB &
                                                  Tree[i].chanC[b].addr = a
                                                                          ==>
begin
        Tree[i].directory[b][a] := Branch;
Tree[i].cache[a].state := Tip;
Tree[i].cache[a].data := Tree[i].chanC[b].data;
Tree[i].cache[a].dirty := Tree[i].chanC[b].dirty;
Tree[i].chanC[b].opcode := C_None;
Tree[i].chanD[b].opcode := ReleaseAck;
Tree[i].chanD[b].addr := a;
endrule;

rule "Ln_receive_GrantAck"
Tree[i].chanE[b].opcode = GrantAck &
                          Tree[i].chanE[b].addr = a
                                                  ==>
begin
        Tree[i].chanE[b].opcode := E_None;
Tree[i].slave_pending[b][a] := S_None;
endrule;
endruleset;

-- Ln+1 <-> Ln <-> Ln-1
ruleset i : cacheId; b1 : branchType; a: addrType do
rule "Ln_receive_AcquirePerm_Branch_x_x"
i > 1 &
Tree[i].chanA[b1].opcode = AcquirePerm &
                           Tree[i].chanA[b1].addr = a &
                                                    Tree[i].cache[a].state = Branch &
                                                                             Tree[i].master_pending[a] = M_None
                                                                                                         ==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode := AcquirePerm;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := BtoT;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr := a;
Tree[i].master_pending[a] := pending_Grant;
endrule;

rule "Ln_receive_AcquirePerm_None_Branch_x"
i > 1 &
Tree[i].chanA[b1].opcode = AcquirePerm &
                           Tree[i].chanA[b1].addr = a &
                                                    Tree[i].cache[a].state = None &
                                                                             Tree[i].directory[b1][a] = Branch &
                                                                                                        Tree[i].master_pending[a] = M_None
                                                                                                                                    ==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode := AcquirePerm;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := BtoT;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr := a;
Tree[i].master_pending[a] := pending_GrantData;
endrule;

rule "Ln_receive_AcquirePerm_None_None_None"
i > 1 &
Tree[i].chanA[b1].opcode = AcquirePerm &
                           Tree[i].chanA[b1].addr = a &
                                                    Tree[i].cache[a].state = None &
                                                                             forall k: branchType do
Tree[i].directory[k][a] = None
        endforall &
Tree[i].master_pending[a] = M_None
==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode := AcquireBlock;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := NtoT;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr := a;
Tree[i].master_pending[a] := pending_GrantData;
endrule;

rule "Ln_receive_AcquireBlock_NtoB_None_None_None"
i > 1 &
Tree[i].chanA[b1].opcode = AcquireBlock &
                           Tree[i].chanA[b1].para = NtoB &
                                                    Tree[i].chanA[b1].addr = a &
                                                                             Tree[i].cache[a].state = None &
                                                                                                      forall k: branchType do
Tree[i].directory[k][a] = None
        endforall &
Tree[i].master_pending[a] = M_None
==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode := AcquireBlock;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := NtoB;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr := a;
Tree[i].master_pending[a] := pending_GrantData;
endrule;

rule "Ln_receive_AcquireBlock_NtoT_None_None_None"
i > 1 &
Tree[i].chanA[b1].opcode = AcquireBlock &
                           Tree[i].chanA[b1].para = NtoT &
                                                    Tree[i].chanA[b1].addr = a &
                                                                             Tree[i].cache[a].state = None &
                                                                                                      forall k: branchType do
Tree[i].directory[k][a] = None
        endforall &
Tree[i].master_pending[a] = M_None
==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode := AcquireBlock;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := NtoT;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr := a;
Tree[i].master_pending[a] := pending_GrantData;
endrule;

rule "Ln_receive_AcquireBlock_NtoT_Branch_None_None"
i > 1 &
Tree[i].chanA[b1].opcode = AcquireBlock &
                           Tree[i].chanA[b1].para = NtoT &
                                                    Tree[i].chanA[b1].addr = a &
                                                                             Tree[i].cache[a].state = Branch &
                                                                                                      forall k: branchType do
Tree[i].directory[k][a] = None
        endforall &
Tree[i].master_pending[a] = M_None
==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode := AcquirePerm;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := BtoT;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr := a;
Tree[i].master_pending[a] := pending_Grant;
endrule;
endruleset;

-- Ln receive
-- from lower level
        ruleset i : cacheId; a: addrType do
rule "Ln_receive_Grant"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = Grant &
                                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].para = toT &
                                                                                                Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                                                               ==>
begin
        Tree[i].cache[a].state := Tip;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
Tree[i].master_pending[a] := M_None;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].opcode := GrantAck;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].addr := a;
endrule;


rule "Ln_receive_GrantData_toB"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = GrantData &
                                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].para = toB &
                                                                                                Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                                                               ==>
begin
        Tree[i].cache[a].state := Branch;
Tree[i].cache[a].data := Tree[(i-2)/allBranchNum+1].chanD[i%2+1].data;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
Tree[i].master_pending[a] := M_None;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].opcode := GrantAck;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].addr := a;
endrule;

rule "Ln_receive_GrantData_toT"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = GrantData &
                                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].para = toT &
                                                                                                Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                                                               ==>
begin
        Tree[i].cache[a].state := Tip;
Tree[i].cache[a].data := Tree[(i-2)/allBranchNum+1].chanD[i%2+1].data;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
Tree[i].master_pending[a] := M_None;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].opcode := GrantAck;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].addr := a;
endrule;

rule "Ln_receive_ReleaseAck"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = ReleaseAck &
                                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                ==>
begin
        Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
Tree[i].master_pending[a] := M_None;
endrule;

rule "Ln_receive_Probe_None_None_None"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                Tree[i].cache[a].state = None &
                                                                                                                         forall k: branchType do
Tree[i].directory[k][a] = None
        endforall &
(Tree[i].master_pending[a] = M_None |
Tree[i].master_pending[a] != pending_ReleaseAck)
==>
begin
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode := B_None;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ProbeAckData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := NtoN;
endrule;

rule "Ln_receive_Probe_toN_None_Branch/Tip"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toN &
                                                                                                Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                               Tree[i].cache[a].state = None &
                                                                                                                                                                        exists k: branchType do
(Tree[i].directory[k][a] = Branch |
Tree[i].directory[k][a] = Tip) &
Tree[i].slave_pending[k][a] = S_None
        end
==>
begin
for k: branchType do
if (Tree[i].directory[k][a] = Branch |
Tree[i].directory[k][a] = Tip) &
Tree[i].slave_pending[k][a] = S_None then
Tree[i].chanB[k].opcode := Probe;
Tree[i].chanB[k].para := toN;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k][a] := pending_ProbeAckData;
endif;
end;
endrule;

rule "Ln_receive_Probe_toB_None_Branch/Tip"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toB &
                                                                                                Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                               Tree[i].cache[a].state = None &
                                                                                                                                                                        exists k: branchType do
(Tree[i].directory[k][a] = Branch |
Tree[i].directory[k][a] = Tip) &
Tree[i].slave_pending[k][a] = S_None
        end
==>
begin
for k: branchType do
if (Tree[i].directory[k][a] = Branch |
Tree[i].directory[k][a] = Tip) &
Tree[i].slave_pending[k][a] = S_None then
Tree[i].chanB[k].opcode := Probe;
Tree[i].chanB[k].para := toB;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k][a] := pending_ProbeAckData;
endif;
end;
endrule;

rule "Ln_receive_Probe_toN_Branch_None"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toN &
                                                                                                Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                               Tree[i].cache[a].state = Branch &
                                                                                                                                                                        forall k : branchType do
Tree[i].directory[k][a] = None
        endforall &
(Tree[i].master_pending[a] = M_None |
Tree[i].master_pending[a] != pending_ReleaseAck)
==>
begin
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode := B_None;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ProbeAckData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := BtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[a].data;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].dirty := Tree[i].cache[a].dirty;
Tree[i].cache[a].dirty := false;
Tree[i].cache[a].state := None;
endrule;

rule "Ln_receive_Probe_toN_Branch_Branch"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toN &
                                                                                                Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                               Tree[i].cache[a].state = Branch &
                                                                                                                                                                        exists k : branchType do
Tree[i].directory[k][a] = Branch &
Tree[i].slave_pending[k][a] = S_None
        end
==>
begin
for k : branchType do
if  Tree[i].directory[k][a] = Branch &
Tree[i].slave_pending[k][a] = S_None then
Tree[i].chanB[k].opcode := Probe;
Tree[i].chanB[k].para := toN;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k][a] := pending_ProbeAckData;
endif;
endfor;
endrule;

rule "Ln_receive_Probe_toN_Tip_None"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toN &
                                                                                                Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                               Tree[i].cache[a].state = Tip &
                                                                                                                                                                        forall k : branchType do
Tree[i].directory[k][a] = None
        endforall &
(Tree[i].master_pending[a] = M_None |
Tree[i].master_pending[a] != pending_ReleaseAck)
==>
begin
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode := B_None;
Tree[i].cache[a].state := None;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := TtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ProbeAckData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[a].data;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].dirty := Tree[i].cache[a].dirty;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].dirty := false;
Tree[i].cache[a].state := None;
endrule;

rule "Ln_receive_Probe_toB_Branch"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toB &
                                                                                                Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                               Tree[i].cache[a].state = Branch &
                                                                                                                                                                        (Tree[i].master_pending[a] = M_None |
                                                                                                                                                                                                     Tree[i].master_pending[a] != pending_ReleaseAck)
                                                                                                                                                                        ==>
begin
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode := B_None;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := BtoB;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ProbeAckData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[a].data;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].dirty := Tree[i].cache[a].dirty;
Tree[i].chanC[i%2+1].dirty := false;
endrule;

rule "Ln_receive_Probe_toB_None_Branch"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toB &
                                                                                                Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                               Tree[i].cache[a].state = None &
                                                                                                                                                                        exists k: branchType do
Tree[i].directory[k][a] = Branch &
Tree[i].slave_pending[k][a] = S_None
        end
==>
begin
for k : branchType do
if  Tree[i].directory[k][a] = Branch &
Tree[i].slave_pending[k][a] = S_None then
Tree[i].chanB[k].opcode := Probe;
Tree[i].chanB[k].para := toB;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k][a] := pending_ProbeAckData;
endif;
endfor;
endrule;

rule "Ln_receive_Probe_toB_Tip"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toB &
                                                                                                Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                               Tree[i].cache[a].state = Tip &
                                                                                                                                                                        (Tree[i].master_pending[a] = M_None |
                                                                                                                                                                                                     Tree[i].master_pending[a] != pending_ReleaseAck)
                                                                                                                                                                        ==>
begin
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode := B_None;
Tree[i].cache[a].state := Branch;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := TtoB;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ProbeAckData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[a].data;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].dirty := Tree[i].cache[a].dirty;
Tree[i].chanC[i%2+1].dirty := false;
endrule;

rule "Ln_receive_Probe_toN_Trunk"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toN &
                                                                                                Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                               Tree[i].cache[a].state = Trunk
                                                                                                                                                                        ==>
begin
for k : branchType do
if  Tree[i].directory[k][a] = Tip &
Tree[i].slave_pending[k][a] = S_None then
Tree[i].chanB[k].opcode := Probe;
Tree[i].chanB[k].para := toN;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k][a] := pending_ProbeAckData;
endif;
endfor;
endrule;

rule "Ln_receive_Probe_toB_Trunk"
i > 1 &
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = Probe &
                                                 Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toB &
                                                                                                Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                               Tree[i].cache[a].state = Trunk
                                                                                                                                                                        ==>
begin
for k : branchType do
if  Tree[i].directory[k][a] = Tip &
Tree[i].slave_pending[k][a] = S_None then
Tree[i].chanB[k].opcode := Probe;
Tree[i].chanB[k].para := toB;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k][a] := pending_ProbeAckData;
endif;
endfor;
endrule;
endruleset;

-- Ln send msg
        ruleset i : cacheId; a: addrType do
rule "Ln_send_Release_Branch_None"
i > 1 &
Tree[i].cache[a].state = Branch &
                         forall k : branchType do
Tree[i].directory[k][a] = None &
(Tree[i].chanA[k].opcode = A_None |
                           Tree[i].chanA[k].addr = a)
endforall &
Tree[i].master_pending[a] = M_None &
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None
                                                 ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ReleaseData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := BtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[a].data;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].dirty := Tree[i].cache[a].dirty;
Tree[i].chanC[i%2+1].dirty := false;
Tree[i].master_pending[a] := pending_ReleaseAck;
Tree[i].cache[a].state := None;
endrule;

rule "Ln_send_Release_Tip_None"
i > 1 &
Tree[i].cache[a].state = Tip &
                         forall k : branchType do
Tree[i].directory[k][a] = None &
(Tree[i].chanA[k].opcode = A_None |
                           Tree[i].chanA[k].addr = a)
endforall &
Tree[i].master_pending[a] = M_None &
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None
                                                 ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := TtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ReleaseData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[a].data;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].dirty := Tree[i].cache[a].dirty;
Tree[i].chanC[i%2+1].dirty := false;
Tree[i].master_pending[a] := pending_ReleaseAck;
Tree[i].cache[a].state := None;
endrule;

rule "Ln_send_Release_Tip_Branch"
i > 1 &
Tree[i].cache[a].state = Tip &
                         exists k : branchType do
Tree[i].directory[k][a] = Branch
        end &
forall k : branchType do
(Tree[i].chanA[k].opcode = A_None |
                           Tree[i].chanA[k].addr = a)
endforall &
Tree[i].master_pending[a] = M_None &
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None
                                                 ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := TtoB;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ReleaseData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[a].data;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].dirty := Tree[i].cache[a].dirty;
Tree[i].chanC[i%2+1].dirty := false;
Tree[i].master_pending[a] := pending_ReleaseAck;
Tree[i].cache[a].state := None;
endrule;
endruleset;

ruleset i : cacheId; a: addrType do
rule "Ln_send_Release_Branch_Branch"
Tree[i].cache[a].state = Branch &
                         exists k : branchType do
Tree[i].directory[k][a] = Branch
        end
==>
begin
        Tree[i].cache[a].state := None;
endrule;

rule "Ln_send_Release_Trunk_Tip"
Tree[i].cache[a].state = Trunk
                         ==>
begin
        Tree[i].cache[a].state := None;
endrule;
endruleset;

--special for l3
        ruleset a : addrType do
rule "L3_send_release"
Tree[1].cache[a].state != None
==>
begin
        Tree[1].cache[a].state := None;
memData[a] := Tree[1].cache[a].data;
Tree[1].cache[a].data := 0;
endrule;
endruleset;

ruleset b: branchType; a: addrType do
rule "L3_receive_AcquirePerm_Branch_x_x"
Tree[1].chanA[b].opcode = AcquirePerm &
                          Tree[1].cache[a].state = Branch
                                                   ==>
begin
        Tree[1].cache[a].state := Tip;
Tree[1].cache[a].data := memData[a];
auxData[a] := memData[a];
endrule;

rule "L3_receive_AcquirePerm_None_Branch_x"
Tree[1].chanA[b].opcode = AcquirePerm &
                          Tree[1].cache[a].state = None &
                                                   Tree[1].directory[b][a] = Branch
                                                                             ==>
begin
        Tree[1].cache[a].state := Tip;
Tree[1].cache[a].data := memData[a];
auxData[a] := memData[a];
endrule;

rule "L3_receive_Acquire_None_None_None"
Tree[1].cache[a].state = None &
                         forall k: branchType do
Tree[1].directory[k][a] = None
        endforall
==>
begin
        Tree[1].cache[a].state := Tip;
Tree[1].cache[a].data := memData[a];
auxData[a] := memData[a];
endrule;

rule "L3_receive_AcquireBlock_NtoT_Branch_None_None"
Tree[1].chanA[b].opcode = AcquireBlock &
                          Tree[1].chanA[b].para = NtoT &
                                                  Tree[1].chanA[b].addr = a &
                                                                          Tree[1].cache[a].state = Branch &
                                                                                                   forall k: branchType do
Tree[1].directory[k][a] = None
        endforall
==>
begin
        Tree[1].cache[a].state := Tip;
Tree[1].cache[a].data := memData[a];
auxData[a] := memData[a];
endrule;
endruleset;





invariant "test_reachable_state_3"
forall a:addrType do
!( Tree[1].cache[1].state = None & Tree[2].cache[1].state = None & Tree[4].cache[1].state = None & Tree[5].cache[1].state = None & Tree[3].cache[1].state = None & Tree[6].cache[1].state = None & Tree[7].cache[1].state = Tip )
endforall;


