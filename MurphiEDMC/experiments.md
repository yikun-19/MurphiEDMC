# ILCMP


## Introduction

---
 
We implemented a framework ILCMP to automate the CMP method for parameterized verification, including find noninterference lemmas automatically which is usually done by manual analysis. Moreover, our tool murphiGen can automatically complete guard strengthening and abstraction process , then generate the abstract protocol model.

## Workflow

---

Firstly, we need to preprocess the protocol. At the end of the preprocessing, a data sheet $\mathit{AllDataSet}$ is prepared. After the pre-processing steps, our iterative learning-based CEGAR (counter-example guided refinement process) process to construct the abstract protocol starts, as illustrated in the figure below. 

1. At first, given the protocol $\mathcal{P}$ in Murphi, we initially abstract it into $\mathcal{AP}$ following the $\mathsf{CMP}$ method
    
2. $\mathcal{AP}$ is then model checked by Murphi. If the verification result is positive showing that the required property has been proved for $\mathcal{P}$, then our CEGAR process can be finished; otherwise, Murphi will produce a counter-example $\mathit{ce}$, which is given in the form of a trace of executing the protocol rules of the abstract protocol in Murphi.

3. Given $\mathit{ce}$, we focus on the protocol rules, which are executed by the $\mathit{other}$ node in $\mathit{ce}$. Among these rules, we choose the first one $\mathit{r}$ which is abstracted without guard strengthening.  If such rule does not exist, the CEGAR process stops and returns an error message. Notice that the action of choosing the rule for strengthening is fully automatic. 
    
4. According to the prepared data sheet $\mathit{AllDataSet}$ and the rule $\mathit{r}$, a small dataset can be extracted, where each state satisfies the guard of the rule $\mathit{r}$. Based on this small dataset, we apply an association-rule  learning algorithm in order to obtain sufficiently many association rules which will be transformed into invariants. The above extraction and learning actions are implemented in the procedure $\mathsf{Learn}$.
    
5. The invariants learned in step $\mathsf{Learn}$ can be incorrect for larger protocol instances. We can model check a larger protocol instance to eliminate these false invariants. Besides, the $\mathsf{CMP}$ method itself uses as small number of invariants as possible, so only a small number of invariants are needed to be chosen from the large number of remainder invariants after elimination of false invariants. Here, several heuristics are adopted to filter useful ones for strengthening the rule $\mathit{r}$. As a consequence, only a small number of auxiliary invariants of high quality are filtered out. The above actions of eliminating false invariants and filtering invariants are implemented in $\mathsf{Select}$.
    
6. With these learned auxiliary invariants, we strengthen the rule $\mathit{r}$ into $\mathsf{ABS}\_r$ using $\mathsf{CMP}$ method. The above strengthening and abstraction is implemented in the procedure $\mathsf{CMP}$ and auxiliary invariants will be added for verification. Namely, we obtain a refined abstraction protocol $\mathcal{AP}$, then goto 2 again. 

![framework](/fig/ILCMP_flowchart.png)


## Requirement

---

1.  Cmurphi 5.5.0 http://mclab.di.uniroma1.it/site/index.php/software/18-cmurphi  
2.  Python 3.8.12  
3.  Lark 1.1.2  
Note that these programs runs on MAC or Linux system  

## Run an Example

---

1.  Download the program and libraries mentioned above.

2.  Modify the file settings.py, set the variables MU_PATH, MU_INCLUDE, GXX_PATH, which mean path of CMurphi, path of include directory of CMurphi and path of g++ compiler respectively. MU_FILE_DIR refers to when CMurphi is called to check protocol, a directory is created under MU_FILE_DIR to hold temporary files, and you can change it to where you want. MU_CHECK_MEMORY indicates how much memory you will allocate to the CMurphi program.

3.  Run the file `python murphiGen.py --task mutualEx --simp n`, in which the 'mutualEx' can be replaced to another protocol name. It will automatically perform ILCMP work until ‘success!’ is displayed on the terminal.


## Files

---

After step running the program, some files are generated under the path ./**prot**/. The **prot** represents the name of protocol you want to verify. A file named ABS**prot**.m will appear in the path, which is the final abstract protocol. In the meantime, the information about the strengthen process will be contained in **prot**.log. In addition, **prot**_reach.txt is the reachable set of the protocol; **prot**_reach.csv is also the reachable set of the protocol, except that it is represented as a CSV file; AllDataSet.csv is the extended reachable set, which corresponds to $\mathit{AllDataSet}$; assoRules is the directory contains association rules; auxInvs contains the auxiliary invariants selected from association rules. str_**prot**.m retains the result of the strengthen for each rule. Here we chose mutalEx as an example to illustrate these files.

### ABSMutualEx.m
The ABSprot.m is an abstraction of the original protocol. It contains the original and abstracted rules, as well as variable definitions, initializations, and invariants, etc.

### abs_process.csv
The abs_process.csv file records the protocol strengthening information, including which rules were strengthened and which lemmas were used in the process. Notice that these processes are recorded in sequence.
|       |         |
|-------|---------|
| Store | auxInv_1 |
| Idle  | auxInv_2 |


As shown above, MutualEx is strengthened in order: "Store" is strengthened by auxInv_1, and "Idle" is strengthened by auxInv_2. Note that finally We collect all invariants with the the same antecedent $\mathit{ant}$ into a set $\mathit{INV}$, and merge them into $\mathit{ant \longrightarrow \bigwedge\{cons(f) \mid f \in INV \}}$ to make the protocol program more concise, so the auxInv_i represents 1 or more invariants after selection.

### MutualEx.log
MutualEx.log records the order in which the rules are strengthened, the time spent, and the number of association rules learned and auxiliary invariants used.

### str_MutualEx.m
str_MutualEx.m contains the original rules and the rule strengthened with auxiliary invariants.  

### MutualEx_reach.txt
MutualEx_reach.txt is the output file of Murphi, which is the reachable set of the protocol.  

### MutualEx_reach.csv
MutualEx_reach.csv is the reachable set represented in a CSV file. As shown in the following example. Each line represents a reachable state and the value of the variables.  
| n[NODE_1].st | n[NODE_1].data | n[NODE_2].st | n[NODE_2].data | x     | auxDATA | memDATA |
|--------------|----------------|--------------|----------------|-------|---------|---------|
| I            | DATA_1         | I            | DATA_1         | true  | DATA_1  | DATA_1  |
| I            | DATA_1         | T            | DATA_1         | true  | DATA_1  | DATA_1  |
| I            | DATA_1         | C            | DATA_1         | false | DATA_1  | DATA_1  |
| T            | DATA_1         | T            | DATA_1         | true  | DATA_1  | DATA_1  |
| I            | DATA_2         | C            | DATA_1         | false | DATA_1  | DATA_2  |
| I            | DATA_1         | E            | DATA_1         | false | DATA_1  | DATA_1  |
| ...          | ...            | ...          | ...            | ...   | ...     | ...     |


 

### AllDataSet.csv
AllDataSet.csv extends variables from Prot.csv, where the first line is atomic predicates, and lines 2-8 are their Boolean values.

| n[NODE_2].st = T | n[NODE_1].st = I | n[NODE_1].st = E | n[NODE_1].st = C | n[NODE_1].st = T | n[NODE_2].st = C | n[NODE_1].data = auxDATA | x = true | n[NODE_2].st = E | n[NODE_2].st = I | n[NODE_2].data = auxDATA |
|------------------|------------------|------------------|------------------|------------------|------------------|--------------------------|----------|------------------|------------------|--------------------------|
| False            | True             | False            | False            | False            | False            | True                     | True     | False            | True             | True                     |
| True             | True             | False            | False            | False            | False            | True                     | True     | False            | False            | True                     |
| False            | True             | False            | False            | False            | True             | True                     | False    | False            | False            | True                     |
| True             | False            | False            | False            | True             | False            | True                     | True     | False            | False            | True                     |
| False            | True             | False            | False            | False            | True             | False                    | False    | False            | False            | True                     |
| False            | True             | False            | False            | False            | False            | True                     | False    | True             | False            | True                     |
| ...              | ...              | ...              | ...              | ...              | ...              | ...                      | ...      | ...              | ...              | ...                      |


### assoRules
A directory contains the association rules for refining rules in Murphi learn from AllDataSet.

### auxInvs
A directory contains the auxiliary invariants selected from association rules by some heuristics.

## Tools for eliminating false invariants

---

Original Murphi tool has its limitation in supporting eliminating too many invariants.
- Murphi adopts the on-the-fly mode in which it will stop once an invariant is violated. 
    
- Murphi's compiler reports an  error when the number of invariants exceed some limit. Usually the  default number of invarints is small, 
less than 500. However, the number of learning invariants can exceed 10000.
    
- Since checking invariants also need time, Murphi will run extremely long when there are too many invariants to be checked in each reachable state.

Therefore,we have developed a extension of Murphi, and the association rules are checked in parallel with multi-process.

### Extended Murphi
we extend Murphi to work in a mode in which it stops until all invariants are checked to be false or all reachable states are enumerated, 
and the invariants which fails in model checking are listed in output. The source code of the tool is in the submodule cmurphi5.5.0-v1_hid.

### Check the association rules in parallel
Besides,  a hundred of association rules are transformed into invariants and formed as a group and subjected to model checking, which is executed in a spawn of process of executing Murphi; and all invariants are divided into groups and model checked by many processes 
in parallel. The source code is in file call_murphi.py.
![use multi-process to check invariants](./fig/multi_process.png)

## Case

---

**MutualEx** strengthens two rules in total: "Store" and "Idle". We illustrate the theory behind our work with the process of refining "Idle". Note that it's done automatically in the program, and the complete example is in the ./MutualEx.

### How to learn association rules
The reachable states of **MutualEx** are computed by Murphi and saved in ./MutualEx/MutualEx_reach.txt and ./MutualEx/MutualEx_reach.csv. By using atomic predicates in ./MutualEx/atom.txt, we convert these reachable states into a data set which is more expressive and easier to encode data set(stored in ./MutualEx/AllDataSet.csv). Next, we look for all the states that satisfy the guard of "Idle"(i.e. ${\it n[i].st = E}$), resulting in the following dataset. It should be mentioned that we used the symmetric reduction technique to reduce the size of data set, so some reachable states don't appear(e.g. ${\it n[1].st = E}$). The K-Apriori algorithm is then used to learn association rules from the data set.

| n[NODE_2].st = E | n[NODE_2].st = C | n[NODE_1].st = I | x = true | n[NODE_1].st = E | n[NODE_2].st = T | n[NODE_1].data = auxDATA | n[NODE_1].st = C | n[NODE_1].st = T | n[NODE_2].st = I | n[NODE_2].data = auxDATA |
|:----------------:|:----------------:|:----------------:|:--------:|:----------------:|:----------------:|:------------------------:|:----------------:|:----------------:|:----------------:|:------------------------:|
| TRUE             | FALSE            | TRUE             | FALSE    | FALSE            | FALSE            | TRUE                     | FALSE            | FALSE            | FALSE            | TRUE                     |
| TRUE             | FALSE            | TRUE             | FALSE    | FALSE            | FALSE            | FALSE                    | FALSE            | FALSE            | FALSE            | TRUE                     |
| TRUE             | FALSE            | FALSE            | FALSE    | FALSE            | FALSE            | TRUE                     | FALSE            | TRUE             | FALSE            | TRUE                     |
| TRUE             | FALSE            | FALSE            | FALSE    | FALSE            | FALSE            | FALSE                    | FALSE            | TRUE             | FALSE            | TRUE                     |
| TRUE             | FALSE            | TRUE             | FALSE    | FALSE            | FALSE            | FALSE                    | FALSE            | FALSE            | FALSE            | TRUE                     |
| TRUE             | FALSE            | FALSE            | FALSE    | FALSE            | FALSE            | FALSE                    | FALSE            | TRUE             | FALSE            | TRUE                     |
| TRUE             | FALSE            | TRUE             | FALSE    | FALSE            | FALSE            | TRUE                     | FALSE            | FALSE            | FALSE            | TRUE                     |
| TRUE             | FALSE            | FALSE            | FALSE    | FALSE            | FALSE            | TRUE                     | FALSE            | TRUE             | FALSE            | TRUE                     |



### How to select auxiliary invariants from association rules
As an example, in the process of refining rule "Idle" of MutualEx, we obtained the following association rules by learning(the complete set of association rules is available in the path ./MutualEx/assoRules/assoRules_Idle.txt, and we changed the index name of the array variable for convenience in the following code blocks). They can be transformed into equivalent invariants.

    inv_1 : x = false -> n[i].st != C              /*assorule_1 : x = false -> n[2].st != C*/

    inv_2 : n[i].st = I -> n[j].st = E             /*assorule_2 : n[1].st = I -> n[2].st = E*/

    inv_3 : n[i].st = T -> n[j].st = E             /*assorule_3 : n[1].st = T -> n[2].st = E*/

    inv_4 : n[i].st = E -> n[i].st != C            /*assorule_4 : n[2].st = E -> n[2].st != C*/

    inv_5 : n[i].st = E & n[j].st = I -> x = false /*assorule_5 : n[2].st = E & n[1].st = I -> x = false*/

    inv_6 : n[i].st = E -> x = false               /*assorule_6 : n[2].st = E -> x = false*/

    inv_7 : n[i].st = E -> n[j].st != C            /*assorule_7 : n[2].st = E -> n[1].st != C*/
 
    inv_8 : n[i].st = E -> n[j].st != E            /*assorule_8 : n[2].st = E -> n[1].st != E*/

    inv_9 : n[i].st = E -> n[i].data = auxData     /*assorule_9 : n[2].st = E -> n[2].data = auxData*/
    
    ...


We extract dataset from $\mathit{AllDataSet}$ according to the predicate in guard of "Idle"(i.e. $\mathit{n\[i\].st = E}$), so each entry in dataset satisfies the predicate. When a node state is $\mathsf{E}$, $\mathit{x}$ must be $\mathit{false}$, and another node state must be $\mathsf{I}$ or $\mathsf{T}$, this is why we can obtain the ${\it inv_1, inv_2, inv_3}$. However, they are not true, because in the whole reachable states set, the state of a node cannot be determined when $\mathit{x}$ is $\mathit{false}$, Similarly, when a node is in state $\mathsf{I}$ or $\mathsf{T}$, there is no way to determine the state of aother node. We use tools(cmurphi5.5.0-v1_hid and call_murphi.py) to eliminate false invariants and obtain:

    inv_4 : n[i].st = E -> n[i].st != C            /*assorule_4 : n[2].st = E -> n[2].st != C*/

    inv_5 : n[i].st = E & n[j].st = I -> x = false /*assorule_5 : n[2].st = E & n[1].st = I -> x = false*/

    inv_6 : n[i].st = E -> x = false               /*assorule_6 : n[2].st = E -> x = false*/

    inv_7 : n[i].st = E -> n[j].st != C            /*assorule_7 : n[2].st = E -> n[1].st != C*/

    inv_8 : n[i].st = E -> n[j].st != E            /*assorule_8 : n[2].st = E -> n[1].st != E*/

    inv_9 : n[i].st = E -> n[i].data = auxData     /*assorule_9 : n[2].st = E -> n[2].data = auxData*/
    
    ...

These invariants are absolutely true. However,the first invarinat is completely redundant because a node has only one state at one point; As for the second invariant, ${\it n\[j\].st = I}$ doesn't occur in the guard of ``Idle", so it should be filtered out. After removing useless invariants, ${\it inv_6, inv_7, inv_8, inv_9}$ are left and merged into an invariant because they have the same antecedent. The heuristic for filtering invariants is in murphi_process.py, the result is stored in ./MutualEx/auxInvs/auxInvs_Idle.txt

    n[i].st = E -> x = false & n[i].data = auxData & n[j].st != C & n[j].st != E

Actually, since calling Murphi to verify invariants may walk through the entire reachable states space,  it takes a lot of time. Therefore, we need reduce the number of association rules as much as possible in order to reduce the time of eliminating false invariants. So we apply as much heuristics as possible before the phase of the elimination of false invariants because these heuristics are extremely helpful to remove a large number of invariants(as shown in the figure below). See result for detailed effects of these strategies.
![two phases to select invariants](./fig/three_phases.png)
        
### How to refine a rule
Let's use "Idle" again as an example. First, we add the consequent of the invariant to the guard of "Idle". Because ${\it n[i].data}$ is equal to ${\it auxDATA}$ and ${\it n[i].data}$ is assigned to the global variable ${\it memDATA}$ in the action part, we replace ${\it n[i].data}$ with ${\it auxDATA}$ in order not to lose information.

    ruleset i : NODE do
    rule "Idle"
      n[i].st = E
    ==>
    begin
      n[i].st := I;
      x := true;
      memDATA := n[i].data;
    endrule;
    endruleset;

    ruleset  i : NODE  do
    rule "STR_Idle"
      n[i].st = E &
      x = false &
      n[i].data = auxDATA &
      forall q : NODE do
    	q != i -> n[q].st != E & n[q].st != C
      end
    ==>
    begin
      n[i].st := I;
      x := true;
      memDATA := auxDATA;
    endrule;

Next, the parameter ${\it i}$ is instantiated to ${\it Other}$, then the predicates and statements relating to ${\it Other}$ will be removed. The refined "Idle" is saved in ./MutualEx/ABSMutualEx.m.

    ruleset  i : NODE  do
    rule "STR_Idle"
      n[i].st = E &
      x = false &
      n[i].data = auxDATA &
      forall q : NODE do
    	q != i -> n[q].st != E & n[q].st != C
      end
    ==>
    begin
      n[i].st := I;
      x := true;
      memDATA := auxDATA;
    endrule;

    rule "ABS_Idle"
      x = false &
      forall q : NODE do
        n[q].st != E &
        n[q].st != C
      end
    ==>
    begin
      x := true;
      memDATA := auxDATA;
    endrule;


## Result

---

The strategies of selecting rules is very effective. Here we select some auxiliary invariants of the rules to show the chages of number before and after the selection. The **Rule** is the name of the protocol rule to be strengthened; **#Association Rules** is the number of learned association rules;**#Phase 1** is the number of association rules removed in phase 1, **#Phase 2** and **#Phase 3** are similar; **#Auxiliary Invariants** is the number of auxiliary invariants left at the end. More details are in the file reduction.md.
|                 | Rule                     | #Association Rules | #Phase 1  | #Phase 2 | #Phase 3 | #Auxiliary Invariants |
|-----------------|--------------------------|-------------------|----------|---------|---------|----------------------|
| MutualEx-noData | Idle                     | 532               | 529      | 0       | 0       | 3                    |
| MutualEx        | Store                    | 732               | 728      | 0       | 0       | 4                    |
| German          | Store                    | 34,815            | 34,800   | 2       | 6       | 7                    |
| Flash-noData    | NI_Remote_Get_Put        | 585,144           | 584,752  | 237     | 120     | 35                   |
| Flash           | Store                    | 907,049           | 907,022  | 3       | 3       | 21                   |


The following table show the experimental result. The statistics includes 7 types of data. #Asso is the number of learned association rules; #Aux is the number of auxiliary invariants; #STR_rules is the number of strengthened rules in CMP; Learn is the time spent in learning; Select is the the time spent in selecting invariants; Strengthen is the time spent on strengthening rules (including the parameterized abstraction and guard strengthening); Total is the total time taken for verification.
|                 | #Asso     | #Aux | #STR_Rules | Learn   | Select    | Strengthen | Total     |
|-----------------|-----------|------|------------|---------|-----------|------------|-----------|
| Moesi           | 0         | 0    | 0          | 0       | 0         | 0          | 2.89      |
| Mesi            | 0         | 0    | 0          | 0       | 0         | 0          | 2.96      |
| MutualEx-noData | 532       | 3    | 1          | 0.01    | 2.82      | 0.01       | 8.64      |
| MutualEx        | 1,464     | 8    | 2          | 0.03    | 5.62      | 0.03       | 14.19     |
| German          | 147,373   | 21   | 4          | 1.78    | 10.22     | 0.1        | 25.91     |
| Flash-noData    | 6,340,218 | 257  | 10         | 139.13  | 908.23    | 1.56       | 1,147.21  |
| Flash           | 8,948,043 | 282  | 11         | 2,621.5 | 23,930.15 | 1.95       | 27,098.69 |


We have verified Bus/Directory-based cache consistency protocols, including Flash protocol which is industrial-level. The CMP method of each protocol is also formally proved.

