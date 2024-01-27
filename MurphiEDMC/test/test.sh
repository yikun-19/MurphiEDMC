#!/bin/bash

# # update mu.o in src
# cd ..
# cd src
# make clean  # rm -f mu.o is not enough, and clean command is defined in Makefile
# make
# cd ..
# cd test


# debug libraries by test.m/test.cpp
# ../../cmurphi5.5.0/src/mu test.m
# g++ -ggdb -o test.o test.cpp -I ../../cmurphi5.5.0/include -lm
# ./test.o -vdfs -m50000 -p5 

# ../../tilelink_ls/src/mu test.m
# g++ -ggdb -o test.o test.cpp -I ../../tilelink_ls/include -lm
g++ -ggdb -o test.o test.cpp -I ../../tilelink_ls/include-1 -lm
./test.o -localsearch -m20000 -p5 -pr -tv > ./test.log

