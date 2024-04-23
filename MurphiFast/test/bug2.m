
Const
-- config start
coreNum: 4;
allNodeNum: 7;
allBranchNum: 2;
-- config end
dataNum: 2;
addrNum: 4;
lineNum: 2;

Type
        dataType: 0..dataNum;

validDataType: 1..dataNum;

lineType: 0..lineNum-1;

markType: 0..addrNum/lineNum-1;

l1Id: allNodeNum-coreNum+1 .. allNodeNum;

cacheId: 1..allNodeNum-coreNum;

addrType: 0..addrNum-1;

nodeId: 1..allNodeNum;

branchType: 1.. allBranchNum;

stateType: enum{None,Trunk,Branch,Tip};

AType: enum{A_None, AcquirePerm, AcquireBlock};

BType: enum{B_None, ProbePerm, ProbeBlock};

CType: enum{C_None, Release, ReleaseData, ProbeAck, ProbeAckData};

DType: enum{D_None, Grant, GrantData, ReleaseAck};

EType: enum{E_None, GrantAck};

growType: enum{NtoB, NtoT, BtoT};

capType: enum{toN, toB, toT};

pruneType: enum{BtoN, TtoN, TtoB, NtoN};

chAType: record
        opcode: AType;
addr: addrType;
para: growType;
end;

chBType: record
        opcode: BType;
addr: addrType;
para: capType;
end;

chCType: record
        opcode: CType;
addr: addrType;
para: pruneType;
data: dataType;
end;

chDType: record
        opcode: DType;
addr: addrType;
para: capType;
data: dataType;
end;

chEType: record
        opcode: EType;
addr: addrType;
end;

slave_pending_Type: enum{S_None, pending_ProbeAck, pending_ProbeAckData, pending_GrantAck};

master_pending_Type: enum{M_None, pending_Grant, pending_GrantData, pending_ReleaseAck};

directoryType: record
        state: stateType;
addr: addrType;
end;

cacheType: record
        state: stateType;
mark: markType;
data: dataType;
dirty: boolean;
end;

TreeNode: Record
        cache: array[lineType] of cacheType;
sons: array[branchType] of nodeId;
directory: array[branchType] of array[lineType] of directoryType;
slave_pending: array[branchType] of slave_pending_Type;
master_pending: master_pending_Type;
chanA: array[branchType] of chAType;
chanB: array[branchType] of chBType;
chanC: array[branchType] of chCType;
chanD: array[branchType] of chDType;
chanE: array[branchType] of chEType;
end;

Var
        Tree: array [nodeId] of TreeNode;
memData:array[addrType] of validDataType;
auxData: array[addrType] of validDataType;

startstate "Init"
var son: 1..allNodeNum+1;
begin
        son := 2;
for cur : cacheId do
for c : lineType do
Tree[cur].cache[c].state := None;
Tree[cur].cache[c].dirty := false;
Tree[cur].master_pending := M_None;
endfor;
for i : branchType do
Tree[cur].sons[i] := son;
Tree[cur].chanA[i].opcode := A_None;
Tree[cur].chanB[i].opcode := B_None;
Tree[cur].chanC[i].opcode := C_None;
Tree[cur].chanD[i].opcode := D_None;
Tree[cur].chanE[i].opcode := E_None;
for c : lineType do
Tree[cur].slave_pending[i] := S_None;
Tree[cur].directory[i][c].state := None;
endfor;
son := son + 1;
endfor;
endfor;

for cur : l1Id do
for c : lineType do
Tree[cur].cache[c].state := None;
Tree[cur].cache[c].dirty := false;
Tree[cur].master_pending := M_None;
endfor;
endfor;

for a : addrType do
for d: validDataType do
memData[a] := d;
auxData[a] := d;
endfor;
endfor;
endstartstate;

ruleset i: l1Id; d: validDataType; a: addrType; c: lineType; m: markType do
rule "Store"
m = a/lineNum &
    c = a%lineNum &
        Tree[i].cache[c].state = Tip &
                                 Tree[i].cache[c].mark = m
                                                         ==>
Tree[i].cache[c].data := d;
Tree[i].cache[c].dirty := true;
auxData[a] := d;
endrule;
endruleset;

-- L1 sends msg
        ruleset i: l1Id; d: validDataType; a: addrType; c: lineType; m: markType do
rule "send_AcquireBlock_toB"
c = a%lineNum &
    Tree[i].cache[c].state = None &
                             Tree[i].master_pending = M_None
                                                      ==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode  := AcquireBlock;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para    := NtoB;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr    := a;
Tree[i].master_pending := pending_GrantData;
endrule;

rule "send_AcquirePerm_toT"
c = a%lineNum &
    m = a/lineNum &
        Tree[i].cache[c].state = Branch &
                                 Tree[i].cache[c].mark = m &
                                                         Tree[i].master_pending = M_None
                                                                                  ==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode  := AcquirePerm;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := BtoT;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr    := a;
Tree[i].master_pending := pending_Grant;
endrule;

rule "send_AcquireBlock_toT"
c = a%lineNum &
    Tree[i].cache[c].state = None &
                             Tree[i].master_pending = M_None
                                                      ==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode  := AcquireBlock;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := NtoT;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr    := a;
Tree[i].master_pending := pending_GrantData;
endrule;

rule "send_Release_BtoN"
m = a/lineNum &
    c = a%lineNum &
        Tree[i].cache[c].state = Branch &
                                 Tree[i].cache[c].mark = m &
                                                         Tree[i].master_pending = M_None &
                                                                                  Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None
                                                                                                                                   ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := Release;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := BtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
Tree[i].master_pending := pending_ReleaseAck;
Tree[i].cache[c].data := 0;
Tree[i].cache[c].state := None;
endrule;

rule "send_Release_TtoN"
m = a/lineNum &
    c = a%lineNum &
        Tree[i].cache[c].state = Tip &
                                 Tree[i].cache[c].mark = m &
                                                         Tree[i].master_pending = M_None &
                                                                                  Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None
                                                                                                                                   ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := Release;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := TtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
if Tree[i].cache[c].dirty then
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ReleaseData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[c].data;
Tree[i].cache[c].dirty := false;
endif;
Tree[i].master_pending := pending_ReleaseAck;
Tree[i].cache[c].state := None;
Tree[i].cache[c].data := 0;
endrule;
endruleset;

-- L1 responds
ruleset i: l1Id; a: addrType; c: lineType; m: markType  do
rule "respond_Grant_toT"
c = a%lineNum &
    m = a/lineNum &
        Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = Grant &
                                                         Tree[(i-2)/allBranchNum+1].chanD[i%2+1].para = toT &
                                                                                                        Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                                                                       ==>
begin
        Tree[i].cache[c].state := Tip;
Tree[i].cache[c].mark := m;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
Tree[i].master_pending := M_None;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].opcode  := GrantAck;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].addr    := a;
endrule;

rule "respond_GrantData_toB"
c = a%lineNum &
    m = a/lineNum &
        Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = GrantData &
                                                         Tree[(i-2)/allBranchNum+1].chanD[i%2+1].para = toB &
                                                                                                        Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                                                                       ==>
begin
        Tree[i].cache[c].state := Branch;
Tree[i].cache[c].mark := m;
Tree[i].cache[c].data := Tree[(i-2)/allBranchNum+1].chanD[i%2+1].data;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
Tree[i].master_pending := M_None;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].opcode := GrantAck;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].addr    := a;
endrule;

rule "respond_GrantData_toT"
c = a%lineNum &
    m = a/lineNum &
        Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = GrantData &
                                                         Tree[(i-2)/allBranchNum+1].chanD[i%2+1].para = toT &
                                                                                                        Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                                                                       ==>
begin
        Tree[i].cache[c].state := Tip;
Tree[i].cache[c].mark := m;
Tree[i].cache[c].data := Tree[(i-2)/allBranchNum+1].chanD[i%2+1].data;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
Tree[i].master_pending := M_None;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].opcode := GrantAck;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].addr   := a;
endrule;

rule "respond_Probe_NtoN"
c = a%lineNum &
    m = a/lineNum &
        (Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = ProbePerm |
                                                          Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = ProbeBlock) &
        (Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toN |
                                                        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toB) &
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                       Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None &
                                                                                                        (Tree[i].master_pending != M_None ->
                                                                                                                Tree[i].master_pending != pending_ReleaseAck)&
                                                                                                        Tree[i].cache[c].state = None
                                                                                                                                 ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode  := ProbeAck;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para    := NtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr    := a;
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode  := B_None;
Tree[i].cache[c].state := None;
endrule;

rule "respond_ProbePerm_BtoN"
c = a%lineNum &
    m = a/lineNum &
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = ProbePerm &
                                                         Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toN &
                                                                                                        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                                       Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None &
                                                                                                                                                                                                        (Tree[i].master_pending != M_None ->
                                                                                                                                                                                                                Tree[i].master_pending != pending_ReleaseAck)&
                                                                                                                                                                                                        Tree[i].cache[c].state = Branch &
                                                                                                                                                                                                                                 Tree[i].cache[c].mark = m
                                                                                                                                                                                                                                                         ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode  := ProbeAck;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para    := BtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr    := a;
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode  := B_None;
Tree[i].cache[c].state := None;
Tree[i].cache[c].data  := 0;
endrule;

rule "respond_ProbeBlock_TtoN"
c = a%lineNum &
    m = a/lineNum &
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = ProbeBlock &
                                                         Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toN &
                                                                                                        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                                       Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None &
                                                                                                                                                                                                        (Tree[i].master_pending != M_None ->
                                                                                                                                                                                                                Tree[i].master_pending != pending_ReleaseAck)&
                                                                                                                                                                                                        Tree[i].cache[c].state = Tip &
                                                                                                                                                                                                                                 Tree[i].cache[c].mark = m
                                                                                                                                                                                                                                                         ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para    := TtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode  := ProbeAck;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr    := a;
if Tree[i].cache[c].dirty then
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ProbeAckData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[c].data;
Tree[i].cache[c].dirty := false;
endif;
Tree[i].cache[c].data := 0;
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode  := B_None;
Tree[i].cache[c].state := None;
endrule;

rule "respond_ProbeBlock_TtoB"
c = a%lineNum &
    m = a/lineNum &
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = ProbeBlock &
                                                         Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None &
                                                                                                                                                         (Tree[i].master_pending != M_None ->
                                                                                                                                                                 Tree[i].master_pending != pending_ReleaseAck)&
                                                                                                                                                         Tree[i].cache[c].state = Tip &
                                                                                                                                                                                  Tree[i].cache[c].mark = m
                                                                                                                                                                                                          ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para    := TtoB;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode  := ProbeAck;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr    := a;
if Tree[i].cache[c].dirty then
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ProbeAckData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[c].data;
Tree[i].cache[c].dirty := false;
endif;
Tree[i].cache[c].state := Branch;
Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode := B_None;
endrule;

rule "receive_ReleaseAck"
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = ReleaseAck &
                                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                ==>
begin
        Tree[i].master_pending := M_None;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
endrule;
endruleset;

-- Ln <-> Ln+1
ruleset i : cacheId; b : branchType; a: addrType; c: lineType; m: markType do
rule "Ln_receive_AcquirePerm_Tip_Branch_None"
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanA[b].opcode = AcquirePerm &
                                  Tree[i].chanA[b].addr = a &
                                                          Tree[i].cache[c].state = Tip &
                                                                                   Tree[i].cache[c].mark = m &
                                                                                                           forall k : branchType do
(k != b -> Tree[i].directory[k][c].state = None) &
Tree[i].slave_pending[k] = S_None
        endforall &
Tree[i].directory[b][c].state = Branch &
                                Tree[i].directory[b][c].addr = a
                                                               ==>
begin
        Tree[i].chanA[b].opcode := A_None;
Tree[i].chanD[b].opcode := Grant;
Tree[i].chanD[b].para := toT;
Tree[i].chanD[b].addr := a;
Tree[i].directory[b][c].state := Tip;
Tree[i].directory[b][c].addr := a;
Tree[i].cache[c].state := Trunk;
Tree[i].slave_pending[b] := pending_GrantAck;
endrule;

rule "Ln_receive_AcquirePerm_Tip_x_Branch"
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanA[b].opcode = AcquirePerm &
                                  Tree[i].chanA[b].addr = a &
                                                          Tree[i].cache[c].state = Tip &
                                                                                   Tree[i].cache[c].mark = m &
                                                                                                           exists k : branchType do
k != b &
Tree[i].directory[k][c].state = Branch &
                                Tree[i].directory[k][c].addr = a &
                                                               Tree[i].slave_pending[k] = S_None
end
==>
begin
for k : branchType do
if k != b & Tree[i].directory[k][c].state = Branch &
                                            Tree[i].directory[k][c].addr = a &
                                                                           Tree[i].slave_pending[k] = S_None then
        Tree[i].chanB[k].opcode := ProbePerm;
Tree[i].chanB[k].para := toN;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k] := pending_ProbeAck;
endif;
endfor;
endrule;

rule "Ln_receive_AcquirePerm_Trunk"
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanA[b].opcode = AcquirePerm &
                                  Tree[i].chanA[b].addr = a &
                                                          Tree[i].cache[c].mark = m &
                                                                                  Tree[i].cache[c].state = Trunk
                                                                                                           ==>
begin
for k : branchType do
if  Tree[i].directory[k][c].state = Tip &
                                    Tree[i].directory[k][c].addr = a &
                                                                   Tree[i].slave_pending[k] = S_None then
        Tree[i].chanB[k].opcode := ProbeBlock;
Tree[i].chanB[k].addr := a;
Tree[i].chanB[k].para := toN;
Tree[i].slave_pending[k] := pending_ProbeAck;
endif;
endfor;
endrule;

rule "Ln_receive_AcquireBlock_NtoB_Branch/Tip_x_x"
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanA[b].opcode = AcquireBlock &
                                  Tree[i].chanA[b].addr = a &
                                                          Tree[i].chanA[b].para = NtoB &
                                                                                  ((Tree[i].cache[c].state = Branch | Tree[i].cache[c].state = Tip) &
                                                                                   Tree[i].cache[c].mark = m) &
                                                                                  Tree[i].slave_pending[b] = S_None
                                                                                                             ==>
begin
        Tree[i].chanA[b].opcode := A_None;
Tree[i].chanD[b].opcode := GrantData;
Tree[i].chanD[b].para := toB;
Tree[i].chanD[b].addr := a;
Tree[i].chanD[b].data := Tree[i].cache[c].data;
Tree[i].slave_pending[b] := pending_GrantAck;
Tree[i].directory[b][c].state := Branch;
Tree[i].directory[b][c].addr := a;
endrule;

rule "Ln_receive_AcquireBlock_NtoB_Trunk"
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanA[b].opcode = AcquireBlock &
                                  Tree[i].chanA[b].para = NtoB &
                                                          Tree[i].chanA[b].addr = a &
                                                                                  Tree[i].cache[c].state = Trunk &
                                                                                                           Tree[i].cache[c].mark = m &
                                                                                                                                   exists k : branchType do
k != b &
Tree[i].directory[k][c].state = Tip &
                                Tree[i].directory[k][c].addr = a &
                                                               Tree[i].slave_pending[k] = S_None
end
==>
begin
for k : branchType do
if k != b & Tree[i].directory[k][c].state = Tip &
                                            Tree[i].directory[k][c].addr = a &
                                                                           Tree[i].slave_pending[k] = S_None then
        Tree[i].chanB[k].opcode := ProbeBlock;
Tree[i].chanB[k].para := toB;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k] := pending_ProbeAck;
endif;
endfor;
endrule;

rule "Ln_receive_AcquireBlock_NtoT_Tip_None_None"
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanA[b].opcode = AcquireBlock &
                                  Tree[i].chanA[b].para = NtoT &
                                                          Tree[i].chanA[b].addr = a &
                                                                                  Tree[i].cache[c].state = Tip &
                                                                                                           Tree[i].cache[c].mark = m &
                                                                                                                                   forall k : branchType do
Tree[i].directory[k][c].state = None &
                                Tree[i].slave_pending[k] = S_None
endforall
==>
begin
        Tree[i].chanA[b].opcode := A_None;
Tree[i].chanD[b].opcode := GrantData;
Tree[i].chanD[b].para := toT;
Tree[i].chanD[b].addr := a;
Tree[i].chanD[b].data := Tree[i].cache[c].data;
Tree[i].slave_pending[b] := pending_GrantAck;
Tree[i].cache[c].state := Trunk;
Tree[i].cache[c].mark  := m;
Tree[i].directory[b][c].state := Tip;
Tree[i].directory[b][c].addr := a;
endrule;

rule "Ln_receive_AcquireBlock_NtoT_Tip_x_Branch"
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanA[b].opcode = AcquireBlock &
                                  Tree[i].chanA[b].para = NtoT &
                                                          Tree[i].chanA[b].addr = a &
                                                                                  Tree[i].cache[c].state = Tip &
                                                                                                           Tree[i].cache[c].mark = m &
                                                                                                                                   exists k : branchType do
k != b &
Tree[i].directory[k][c].state = Branch &
                                Tree[i].directory[k][c].addr = a &
                                                               Tree[i].slave_pending[k] = S_None
end
==>
begin
for k : branchType do
if k != b & Tree[i].directory[k][c].state = Branch &
                                            Tree[i].directory[k][c].addr = a &
                                                                           Tree[i].slave_pending[k] = S_None then
        Tree[i].chanB[k].opcode := ProbePerm;
Tree[i].chanB[k].para := toN;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k] := pending_ProbeAck;
endif;
endfor;
endrule;

rule "Ln_receive_AcquireBlock_NtoT_Trunk"
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanA[b].opcode = AcquireBlock &
                                  Tree[i].chanA[b].para = NtoT &
                                                          Tree[i].chanA[b].addr = a &
                                                                                  Tree[i].cache[c].state = Trunk &
                                                                                                           Tree[i].cache[c].mark = m &
                                                                                                                                   exists k : branchType do
k != b &
Tree[i].directory[k][c].state = Tip &
                                Tree[i].directory[k][c].addr = a &
                                                               Tree[i].slave_pending[k] = S_None
end
==>
begin
for k : branchType do
if k != b &
Tree[i].directory[k][c].state = Tip &
                                Tree[i].directory[k][c].addr = a &
                                                               Tree[i].slave_pending[k] = S_None then
        Tree[i].chanB[k].opcode := ProbeBlock;
Tree[i].chanB[k].para := toN;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k] := pending_ProbeAck;
endif;
endfor;
endrule;

rule "Ln_receive_ProbeAck"
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanC[b].opcode = ProbeAck &
                                  Tree[i].chanC[b].addr = a &
                                                          Tree[i].directory[b][c].addr = a &
                                                                                         Tree[i].cache[c].mark = m &
                                                                                                                 (Tree[i].chanC[b].para = NtoN |
                                                                                                                                          Tree[i].chanC[b].para = BtoN |
                                                                                                                                                                  Tree[i].chanC[b].para = TtoN |
                                                                                                                                                                                          Tree[i].chanC[b].para = TtoB)
                                                                                                                 ==>
begin
if Tree[i].chanC[b].para = TtoB then
        Tree[i].directory[b][c].state := Branch;
else
Tree[i].directory[b][c].state := None;
endif;
if Tree[i].chanC[b].para = TtoN | Tree[i].chanC[b].para = TtoB then
        Tree[i].cache[c].state := Tip;
endif;
Tree[i].chanC[b].opcode := C_None;
Tree[i].slave_pending[b] := S_None;
endrule;

rule "Ln_receive_ProbeAckData_TtoN"
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanC[b].opcode = ProbeAckData &
                                  Tree[i].chanC[b].para = TtoN &
                                                          Tree[i].chanC[b].addr = a &
                                                                                  Tree[i].directory[b][c].addr = a &
                                                                                                                 Tree[i].cache[c].mark = m
                                                                                                                                         ==>
begin
        Tree[i].directory[b][c].state := None;
Tree[i].cache[c].state := Tip;
Tree[i].cache[c].data := Tree[i].chanC[b].data;
Tree[i].cache[c].dirty := true;
Tree[i].chanC[b].opcode := C_None;
Tree[i].slave_pending[b] := S_None;
endrule;

rule "Ln_receive_ProbeAckData_TtoB"
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanC[b].opcode = ProbeAckData &
                                  Tree[i].chanC[b].para = TtoB &
                                                          Tree[i].chanC[b].addr = a &
                                                                                  Tree[i].directory[b][c].addr = a &
                                                                                                                 Tree[i].cache[c].mark = m
                                                                                                                                         ==>
begin
        Tree[i].directory[b][c].state := Branch;
Tree[i].cache[c].state := Tip;
Tree[i].cache[c].data := Tree[i].chanC[b].data;
Tree[i].cache[c].dirty := true;
Tree[i].chanC[b].opcode := C_None;
Tree[i].slave_pending[b] := S_None;
endrule;

rule "Ln_receive_Release_BtoN/NtoN/TtoN"
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanC[b].opcode = Release &
                                  Tree[i].chanC[b].addr = a &
                                                          (Tree[i].chanC[b].para = BtoN |
                                                                                   Tree[i].chanC[b].para = NtoN |
                                                                                                           Tree[i].chanC[b].para = TtoN) &
                                                          Tree[i].directory[b][c].addr = a &
                                                                                         Tree[i].cache[c].mark = m
                                                                                                                 ==>
begin
if Tree[i].chanC[b].para = TtoN then
        Tree[i].cache[c].state := Tip;
endif;
Tree[i].directory[b][c].state := None;
Tree[i].chanD[b].opcode := ReleaseAck;
Tree[i].chanC[b].opcode := C_None;
endrule;

rule "Ln_receive_ReleaseData"
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanC[b].opcode = ReleaseData &
                                  Tree[i].chanC[b].addr = a &
                                                          Tree[i].directory[b][c].addr = a &
                                                                                         Tree[i].cache[c].mark = m
                                                                                                                 ==>
begin
        Tree[i].cache[c].state := Tip;
Tree[i].cache[c].data := Tree[i].chanC[b].data;
Tree[i].cache[c].dirty := true;
Tree[i].directory[b][c].state := None;
Tree[i].chanD[b].opcode := ReleaseAck;
Tree[i].chanC[b].opcode := C_None;
endrule;

rule "Ln_receive_GrantAck"
Tree[i].chanE[b].opcode = GrantAck &
                          Tree[i].chanE[b].addr = a
                                                  ==>
begin
        Tree[i].chanE[b].opcode := E_None;
Tree[i].slave_pending[b]:= S_None;
endrule;
endruleset;

-- Ln+1 <-> Ln <-> Ln-1
ruleset i : cacheId; b1 : branchType; a: addrType; c: lineType; m: markType do
rule "Ln_receive_AcquirePerm_Branch_x_x"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanA[b1].opcode = AcquirePerm &
                                   Tree[i].chanA[b1].addr = a &
                                                            Tree[i].cache[c].state = Branch &
                                                                                     Tree[i].cache[c].mark = m &
                                                                                                             Tree[i].master_pending = M_None
                                                                                                                                      ==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode := AcquirePerm;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := BtoT;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr := a;
Tree[i].master_pending := pending_Grant;
endrule;

rule "Ln_receive_AcquirePerm_None_x_x"
i > 1 &
c = a%lineNum &
    Tree[i].chanA[b1].opcode = AcquirePerm &
                               Tree[i].chanA[b1].addr = a &
                                                        Tree[i].cache[c].state = None &
                                                                                 Tree[i].master_pending = M_None
                                                                                                          ==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode := AcquireBlock;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := NtoT;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr := a;
Tree[i].master_pending := pending_GrantData;
endrule;

rule "Ln_receive_AcquireBlock_NtoB_None_x_x"
i > 1 &
c = a%lineNum &
    Tree[i].chanA[b1].opcode = AcquireBlock &
                               Tree[i].chanA[b1].para = NtoB &
                                                        Tree[i].chanA[b1].addr = a &
                                                                                 Tree[i].cache[c].state = None &
                                                                                                          Tree[i].master_pending = M_None
                                                                                                                                   ==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode := AcquireBlock;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := NtoB;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr := a;
Tree[i].master_pending := pending_GrantData;
endrule;

rule "Ln_receive_AcquireBlock_NtoT_None_x_x"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanA[b1].opcode = AcquireBlock &
                                   Tree[i].chanA[b1].para = NtoT &
                                                            Tree[i].chanA[b1].addr = a &
                                                                                     Tree[i].cache[c].state = None &
                                                                                                              Tree[i].master_pending = M_None
                                                                                                                                       ==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode := AcquireBlock;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := NtoT;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr := a;
Tree[i].master_pending := pending_GrantData;
endrule;

rule "Ln_receive_AcquireBlock_NtoT_Branch_x_x"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[i].chanA[b1].opcode = AcquireBlock &
                                   Tree[i].chanA[b1].para = NtoT &
                                                            Tree[i].chanA[b1].addr = a &
                                                                                     Tree[i].cache[c].state = Branch &
                                                                                                              Tree[i].cache[c].mark = m &
                                                                                                                                      Tree[i].master_pending = M_None
                                                                                                                                                               ==>
begin
        Tree[(i-2)/allBranchNum+1].chanA[i%2+1].opcode := AcquirePerm;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].para := BtoT;
Tree[(i-2)/allBranchNum+1].chanA[i%2+1].addr := a;
Tree[i].master_pending := pending_Grant;
endrule;
endruleset;

-- Ln receive
-- from lower level
        ruleset i : cacheId; a: addrType; c: lineType; m: markType do
rule "Ln_receive_Grant1"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[i].cache[c].state = None &
                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = Grant &
                                                                                  Tree[(i-2)/allBranchNum+1].chanD[i%2+1].para = toT &
                                                                                                                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                                                                                                ==>
begin
        Tree[i].cache[c].state := Tip;
Tree[i].cache[c].mark := m;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
Tree[i].master_pending := M_None;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].opcode := GrantAck;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].addr := a;
endrule;

rule "Ln_receive_Grant2"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[i].cache[c].state = Branch & Tree[i].cache[c].mark = m &
                                                                  Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = Grant &
                                                                                                                   Tree[(i-2)/allBranchNum+1].chanD[i%2+1].para = toT &
                                                                                                                                                                  Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                                                                                                                                 ==>
begin
        Tree[i].cache[c].state := Tip;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
Tree[i].master_pending := M_None;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].opcode := GrantAck;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].addr := a;
endrule;

rule "Ln_receive_GrantData_toB"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[i].cache[c].state = None &
                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = GrantData &
                                                                                  Tree[(i-2)/allBranchNum+1].chanD[i%2+1].para = toB &
                                                                                                                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                                                                                                ==>
begin
        Tree[i].cache[c].state := Branch;
Tree[i].cache[c].mark := m;
Tree[i].cache[c].data := Tree[(i-2)/allBranchNum+1].chanD[i%2+1].data;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
Tree[i].master_pending := M_None;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].opcode := GrantAck;
Tree[(i-2)/allBranchNum+1].chanE[i%2+1].addr := a;
endrule;

rule "Ln_receive_GrantData_toT"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[i].cache[c].state = None &
                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode = GrantData &
                                                                                  Tree[(i-2)/allBranchNum+1].chanD[i%2+1].para = toT &
                                                                                                                                 Tree[(i-2)/allBranchNum+1].chanD[i%2+1].addr = a
                                                                                                                                                                                ==>
begin
        Tree[i].cache[c].state := Tip;
Tree[i].cache[c].mark := m;
Tree[i].cache[c].data := Tree[(i-2)/allBranchNum+1].chanD[i%2+1].data;
Tree[(i-2)/allBranchNum+1].chanD[i%2+1].opcode := D_None;
Tree[i].master_pending := M_None;
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
Tree[i].master_pending := M_None;
endrule;

rule "Ln_receive_Probe_None"
i > 1 &
c = a%lineNum &
    (Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = ProbeBlock |
                                                      Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = ProbePerm) &
    Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                   Tree[i].cache[c].state = None &
                                                                            (Tree[i].master_pending = M_None |
                                                                                                      Tree[i].master_pending != pending_ReleaseAck)
                                                                            ==>
begin
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode := B_None;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ProbeAck;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := NtoN;
endrule;

rule "Ln_receive_ProbePerm_Branch_None"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = ProbePerm &
                                                         Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                        Tree[i].cache[c].state = Branch &
                                                                                                                                 Tree[i].cache[c].mark = m &
                                                                                                                                                         forall k : branchType do
Tree[i].directory[k][c].state = None
endforall &
(Tree[i].master_pending = M_None |
                          Tree[i].master_pending != pending_ReleaseAck)
==>
begin
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode := B_None;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ProbeAck;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := BtoN;
Tree[i].cache[c].state := None;
endrule;

rule "Ln_receive_ProbePerm_Branch_Branch"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = ProbePerm &
                                                         Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                        Tree[i].cache[c].state = Branch &
                                                                                                                                 Tree[i].cache[c].mark = m &
                                                                                                                                                         exists k : branchType do
Tree[i].directory[k][c].state = Branch &
                                Tree[i].slave_pending[k] = S_None
end &
(Tree[i].master_pending = M_None |
                          Tree[i].master_pending != pending_ReleaseAck)
==>
begin
for k : branchType do
if  Tree[i].directory[k][c].state = Branch &
                                    Tree[i].slave_pending[k] = S_None then
        Tree[i].chanB[k].opcode := ProbePerm;
Tree[i].chanB[k].para := toN;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k] := pending_ProbeAck;
endif;
endfor;
endrule;

rule "Ln_receive_ProbeBlock_toN_Tip_None"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = ProbeBlock &
                                                         Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toN &
                                                                                                        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                                       Tree[i].cache[c].state = Tip &
                                                                                                                                                                                Tree[i].cache[c].mark = m &
                                                                                                                                                                                                        forall k : branchType do
Tree[i].directory[k][c].state = None
endforall &
(Tree[i].master_pending = M_None |
                          Tree[i].master_pending != pending_ReleaseAck)
==>
begin
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode := B_None;
Tree[i].cache[c].state := None;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ProbeAck;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := TtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
if Tree[i].cache[c].dirty then
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ProbeAckData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[c].data;
Tree[i].cache[c].dirty := false;
endif;
endrule;

rule "Ln_receive_ProbeBlock_toB_Tip"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = ProbeBlock &
                                                         Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toB &
                                                                                                        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                                       Tree[i].cache[c].state = Tip &
                                                                                                                                                                                Tree[i].cache[c].mark = m &
                                                                                                                                                                                                        (Tree[i].master_pending != M_None ->
                                                                                                                                                                                                                Tree[i].master_pending != pending_ReleaseAck)
                                                                                                                                                                                                        ==>
begin
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode := B_None;
Tree[i].cache[c].state := Branch;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ProbeAck;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := TtoB;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
if Tree[i].cache[c].dirty then
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ProbeAckData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[c].data;
Tree[i].cache[c].dirty := false;
endif;
endrule;

rule "Ln_receive_ProbeBlock_toN_Trunk"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = ProbeBlock &
                                                         Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toN &
                                                                                                        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                                       Tree[i].cache[c].state = Trunk &
                                                                                                                                                                                Tree[i].cache[c].mark = m
                                                                                                                                                                                                        ==>
begin
for k : branchType do
if  Tree[i].directory[k][c].state = Tip &
                                    Tree[i].slave_pending[k] = S_None then
        Tree[i].chanB[k].opcode := ProbeBlock;
Tree[i].chanB[k].para := toN;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k] := pending_ProbeAck;
endif;
endfor;
endrule;

rule "Ln_receive_ProbeBlock_toB_Trunk"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].opcode = ProbeBlock &
                                                         Tree[(i-2)/allBranchNum+1].chanB[i%2+1].para = toB &
                                                                                                        Tree[(i-2)/allBranchNum+1].chanB[i%2+1].addr = a &
                                                                                                                                                       Tree[i].cache[c].state = Trunk &
                                                                                                                                                                                Tree[i].cache[c].mark = m
                                                                                                                                                                                                        ==>
begin
for k : branchType do
if  Tree[i].directory[k][c].state = Tip &
                                    Tree[i].slave_pending[k] = S_None then
        Tree[i].chanB[k].opcode := ProbeBlock;
Tree[i].chanB[k].para := toB;
Tree[i].chanB[k].addr := a;
Tree[i].slave_pending[k] := pending_ProbeAck;
endif;
endfor;
endrule;
endruleset;

-- Ln send msg
        ruleset i : cacheId; a: addrType; c: lineType; m: markType do
rule "Ln_send_Release_Branch"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[i].cache[c].state = Branch &
                                 Tree[i].cache[c].mark = m &
                                                         forall k : branchType do
Tree[i].directory[k][c].state = None &
                                Tree[i].chanA[k].opcode = A_None
endforall &
Tree[i].master_pending = M_None &
                         Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None
                                                                          ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := Release;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := BtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
Tree[i].master_pending := pending_ReleaseAck;
Tree[i].cache[c].state := None;
Tree[i].cache[c].data  := 0;
endrule;

rule "Ln_send_Release_Tip"
i > 1 &
c = a%lineNum &
    m = a/lineNum &
        Tree[i].cache[c].state = Tip &
                                 Tree[i].cache[c].mark = m &
                                                         forall k : branchType do
Tree[i].directory[k][c].state = None &
                                Tree[i].chanA[k].opcode = A_None
endforall &
Tree[i].master_pending = M_None &
                         Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode = C_None
                                                                          ==>
begin
        Tree[(i-2)/allBranchNum+1].chanC[i%2+1].para := TtoN;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := Release;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].addr := a;
if Tree[i].cache[c].dirty then
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].opcode := ReleaseData;
Tree[(i-2)/allBranchNum+1].chanC[i%2+1].data := Tree[i].cache[c].data;
Tree[i].cache[c].dirty := false;
endif;
Tree[i].master_pending := pending_ReleaseAck;
Tree[i].cache[c].state := None;
Tree[i].cache[c].data := 0;
endrule;
endruleset;

--special for l3
        ruleset a: addrType; c: lineType; m: markType do
rule "L3_send_release_Tip"
c = a%lineNum &
    m = a/lineNum &
        Tree[1].cache[c].state = Tip &
                                 Tree[1].cache[c].mark = m &
                                                         forall k : branchType do
Tree[1].directory[k][c].state = None &
                                Tree[1].chanA[k].opcode = A_None
endforall
==>
begin
        Tree[1].cache[c].state := None;
if Tree[1].cache[c].dirty then
memData[a] := Tree[1].cache[c].data;
Tree[1].cache[c].dirty := false;
endif;
Tree[1].cache[c].data := 0;
endrule;
endruleset;

ruleset b : branchType; a: addrType; c: lineType; m: markType do
rule "L3_receive_AcquirePerm_None"
c = a%lineNum &
    m = a/lineNum &
        Tree[1].chanA[b].opcode = AcquirePerm &
                                  Tree[1].chanA[b].addr = a &
                                                          Tree[1].cache[c].state = None
                                                                                   ==>
begin
        Tree[1].cache[c].data := memData[a];
Tree[1].cache[c].state := Tip;
Tree[1].cache[c].mark := m;
auxData[a] := memData[a];
endrule;

rule "L3_receive_AcquireBlock"
c = a%lineNum &
    m = a/lineNum &
        Tree[1].chanA[b].opcode = AcquireBlock &
                                  Tree[1].chanA[b].addr = a &
                                                          Tree[1].cache[c].state = None
                                                                                   ==>
begin
        Tree[1].cache[c].data := memData[a];
Tree[1].cache[c].state := Tip;
Tree[1].cache[c].mark := m;
auxData[a] := memData[a];
endrule;
endruleset;



