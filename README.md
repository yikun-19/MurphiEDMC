# An Enhanced Directed Model Checking algorithm based in Murphi


## Overview

MurphiEDMC is a model checker designed to alleviate the state space explosion. Our development work is based on Murphi, which is a popular explicit model checker. 
MurphiEDMC is more likely to work well on very complex protocol models at the same cost(e.g., time, memory).


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
  
  # in folder MurphiEDMC
  cd src/  
  make clean
  make
```

Install Z3:
```
  git clone https://github.com/Z3Prover/z3.git
  python scripts/mk_make.py
  cd build
  make
  sudo make install
  make examples
```

## How to run MurphiEDMC

1. Run MurphiEDMC to verify <testcase_name>.m by using automation script:  
```
  bash run.sh <testcase_name>
```

2. Or if you want to set options with MurphiEDMC as you wish(e.g., -localsearch/-vbfs/vdfs), you can run these commands:
```
  ../src/mu <testcase_name>.m    # parser Murphi file to Cpp file
  g++ -ggdb -o <testcase_name>.o <testcase_name>.cpp -I ../include -lm  # compiler Cpp file to execute file(.o)
  ./<testcase_name>.o -localsearch -m 5000  # Run execute file with 5000MB memory limitation and local search algorithm
```
You can change options to what you want when running execute file. 
Run "./<testcase_name>.o -h" to show what options are supported in MurphiEDMC. 




## Files organization

```
MurphiEDMC
│   README.md
└─── MurphiEDMC
│   │   
│   └─── include
│   │  
│   └─── src
│   │   
│   └─── ...
│ 
└─── Benchmarks
│   │   
│   └─── models
│   │  
│   └─── states
│   
└─── ExperimentLogs
    │   
    └─── Experiment1
    │  
    └─── Experiment2
```


## Framework

## Experiments

