
# Murphi_LS


## Overview

Murphi_LS is a model checker designed to find counterexample states using local search strategy to alleviate the state space explosion. 
Our development work is based on Murphi, which is a popular explicit model checker. 
Heuristic functions, local search algorithm and some auxiliary modules have been realized in this tool. 
Murphi_LS is more likely to search for counterexample states that are difficult to find by other methods at the same cost(e.g., time, memory).


## Requirement & Start

Please first check if your environment meets the following requirement: 
1. Operating systems: Linux or MacOS
2. g++ 9.4.0 
3. Python 3.8.10

Now let's install Murphi_LS and its dependencies:
```
  sudo make install 
  sudo apt-get install flex 
  sudo apt-get install byacc
  
  # in folder Murphi_LS
  cd src/  
  make clean
  make
```


## How to run Murphi_LS

1. Run Murphi_LS to verify <testcase_name>.m by using automation script:  
```
  bash run.sh <testcase_name>
```

2. Or if you want to set options with Murphi_LS as you wish(e.g., -localsearch/-vbfs/vdfs), you can run these commands:
```
  ../src/mu <testcase_name>.m    # parser Murphi file to Cpp file
  g++ -ggdb -o <testcase_name>.o <testcase_name>.cpp -I ../include -lm  # compiler Cpp file to execute file(.o)
  ./<testcase_name>.o -localsearch -m 5000  # Run execute file with 5000MB memory limitation and local search algorithm
```
You can change options to what you want when running execute file. 
Run "./<testcase_name>.o -h" to show what options are supported in Murphi_LS. 


## Program workflow

![avatar](/workflow.png)

## Files organization

```
Murphi_LS
│   README.md
└─── include
│   │   mu_epilog.hpp
│   │   mu_prolog.hpp
│   │   
│   └─── murphi.original
│   │   │   mu_verifier.cpp
│   │   │   mu_io.cpp
│   │   │   mu_system.cpp
│   │   │   mu_state.cpp
│   │   │   ...
│   │   
│   └─── murphi.trace_dfs
│   │   
│   └─── ...
│ 
└─── src
│   │   cpp_code.cpp
│   │   expr.cpp
│   │   mu.cpp
│   │   ...
│   │  
└─── test
│   │   run.sh
│   │   main.py
│   └─── protocols
│   │   │   german.m
│   │   │   flash.m
│   │   │   godsont.m
│   │   │   ...
```



## Experiments

In the following experiments, we use different node numbers of each protocol to test the verification efficiency of these algorithms for protocol instances with different complexity. 
The result which is a number indicates the number of states the algorithm needs to traverse to find the target state(the counterexample to a given property). 
'-' indicates that the target state has not been found yet due to memory exhaustion. 

### Comparison of different heuristic functions

In order to test the effect of different heuristic functions, we use different heuristic functions to verify the same protocol instance and properties. 
H1 calculates Hamming distance from the current state to the target state. 
H2 assigns weights to the variables involved in the invariant to be verified. 
H3 assigns different weights ​​to variables of different categories. 

We put test protocol files in this experiment in the /test/benchmarks/murphi_protocols/ directory. 
The above three heuristic functions are defined in /include/murphi.original/mu_system.cpp. 


| Protocol | Node     | H1       | H2       | H3       |
| -------- | -------- | -------- | -------- | -------- |
| MutualEx | 2        | 8        | 8        | 9        |
| MutualEx | 4        | 13       | 13       | 11       |
| MutualEx | 8        | 26       | 26       | 34       |
| German   | 2        | 415      | 573      | 352      |
| German   | 4        | 2959     | 222      | 338      |
| German   | 8        | 29236    | 10943    | 340      |
| Flash    | 2        | 120      | 191      | 76       |
| Flash    | 4        | 912      | 474      | 141      |
| Flash    | 8        | 2843     | 424      | 162      |


### BFS, DFS, BeFs and LS for typical target states

To observe the verification efficiency of currently available algorithms for protocol instances with different scales and designs, we run the following four algorithms on typical protocols with different numbers of nodes: BFS(Breadth-First-Search), DFS(Depth-First-Search), BeFS(Best-First-Search), LS(Local-Search). 
These algorithms can be easily invoked by adding optional commands(-vbfs/-dfs/-befs/-localsearch). 

We implemented the calling process of this experiment in /test/main.py, and users can easily reproduce the results by running this script. 

| Protocol | Node     | BFS      | DFS      | BeFS     | LS       |
| -------- | -------- | -------- | -------- | -------- | -------- |
| MutualEx | 2        | 11       | 5        | 7        | 7        |
| MutualEx | 4        | 36       | 5        | 28       | 28       |
| MutualEx | 8        | 166      | 5        | 216      | 214      |
| German   | 2        | 940      | 216      | 183      | 158      |
| German   | 4        | 14198    | 860      | 1878     | 435      |
| German   | 8        | 497361   | 3520     | 28974    | 868      |
| Flash    | 2        | 360      | 1910     | 289      | 74       |
| Flash    | 4        | 3296     | 327479   | 5625     | 1730     |
| Flash    | 8        | 52491    | -        | 18611    | 5390     |
| adash    | 2        | 240      | 1227     | 543      | 328      |
| adash    | 4        | 1278     | 76219    | 1609     | 923      |
| adash    | 8        | 2189     | -        | 2457     | 1478     |
| eadash   | 2        | 61       | 50       | 81       | 84       |
| eadash   | 4        | 136      | 212      | 306      | 260      |
| eadash   | 8        | 171      | 1098     | 749      | 571      |
| ldash    | 2        | 8        | 42       | 7        | 4        |
| ldash    | 4        | 9        | 4315     | 12       | 10       |
| ldash    | 8        | 10       | -        | 14       | 12       |
| German04 | 2        | 27710    | 19       | 392      | 535      |
| German04 | 4        | 407466   | 21       | 499      | 1783     |
| German04 | 8        | -        | 25       | 1694     | 1535     |
| Godson-T | 2        | 11961    | 49       | 11364    | 824      |
| Godson-T | 4        | 88093    | 249      | 69208    | 1822     |
| Godson-T | 8        | 675477   | 880      | 497068   | 3189     |
| Godson-T | 16       | -        | 1917     | -        | 3821     |
| Godson-T | 32       | -        | 4000     | -        | 6092     |


### Numerous invariants check

Considering the impact of different types of invariants on search efficiency, we take a large number of invariants generated in another algorithm as our testcases. Invariants are defined in /test/invs/inv_NI_Remote_Get_Put, of which 213 are true and 292 are false.

The result is shown in /test/invs/result.csv, which shows that LS algorithm finds most of falied invariants(237/292) with a small cost(4,000 of the 700,000 states in the entire state space). It indicates that LS generally outperforms BFS for general invariants.


### Reachability analysis for TileLink protocol

Due to the needs of practical applications, we formally modeled the TileLink protocol using the Murphi language, and tried to analyze its reachablity.

Specifically, in order to ensure the correctness of the model, the designer gives some states that should be reachable if the protocol model is correct. Now what we need to do is to judge whether these states are really reachable for a given protocol instance. If some of them are unreachable, there is likely a bug in the protocol instance. In fact, we found and fixed some bugs in our model by this way. 

Similarly, this experimental process is also placed in /test/main.py, our TileLink model is placed in /test/TL_states/, and users can reproduce the following results by running this script. The result demonstrates the clear advantages of the LS algorithm. 

| StateID | BFS    | DFS           | LS   |
|---------|--------|---------------|------|
| 1       | 449    | 276           | 513  |
| 2       | 577    | 106           | 510  |
| 3       | 151    | 6             | 77   |
| 4       | 981    | 7220          | 2276 |
| 5       | 789    | 253           | 759  |
| 6       | 25465  | 100434        | 2943 |
| 7       | 577    | 106           | 6953 |
| 8       | 449    | 276           | 141  |
| 9       | 151    | 6             | 77   |
| 10      | 789    | 253           | 462  |
| 11      | 981    | 7220          | 166  |
| 12      | 25465  | 100434        | 543  |
| 13      | 23     | 4             | 32   |
| 14      | 258    | 491           | 100  |
| 15      | 643    | 1410          | 307  |
| 16      | 672    | 1405          | 828  |
| 17      | 3710   | 36842         | 1140 |
| 18      | 258    | 491           | 100  |
| 19      | 672    | 1405          | 309  |
| 20      | 643    | 1410          | 148  |
| 21      | 3710   | 36842         | 214  |
| 22      | 1985   | 5806          | 1087 |
| 23      | 6868   | 5873          | 2212 |
| 24      | 6919   | 5828          | 2350 |
| 25      | 36589  | 36845         | 1122 |
| 26      | 6919   | 5828          | 359  |
| 27      | 21475  | 23436801  638 | 638  |
| 28      | 22015  | 9277207       | 444  |
| 29      | 101798 | -             | 553  |
| 30      | 6858   | 5873          | 986  |
| 31      | 21449  | 17351522      | 9889 |
| 32      | 21475  | 23436801      | 1200 |
| 33      | 101659 | -             | 1089 |
| 34      | 36589  | 36845         | 689  |
| 35      | 101659 | -             | 1089 |
| 36      | 101798 | -             | 553  |
| 37      | 420808 | -             | 941  |

### Comparison of Murphi_LS and AVR

Finally, we contrast this tool with the well-known model checking tool AVR, which is the best word-level verifier
in the single bit-vector track of Hardware Model Checking
Competition (HWMCC) 2019. 
We convert Murphi files to btor2 files for verification by AVR, and these btors files are stored in /test/btor2/.
Since AVR uses symbolic model checking method, we compare the running time of two tools rather than the number of traversed states. 

| Protocol | Node    | AVR     | Murphi_LS |
|----------|---------|---------|-----------|
| MutualEx | 2       | 0.04    | 2.90      |
| MutualEx | 5       | 0.92    | 4.82      |
| MutualEx | 10      | 17.60   | 3.53      |
| MutualEx | 20      | 231.86  | 6.69      |
| German   | 2       | 0.59    | 4.63      |
| German   | 5       | 68.79   | 5.28      |
| German   | 10      | 1642.52 |           |
| Flash    | 2       | 34.85   | 4.43      |
| Flash    | 5       | -       | 6.00      |
| Flash    | 10      | -       | 167.32    |


