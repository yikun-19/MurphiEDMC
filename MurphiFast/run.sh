#!/bin/bash

# update mu.o in src
# cd src
# make clean
# make
# cd ..

#./src/mu ./test/test.m
#g++ -ggdb -o ./test/test.o ./test/test.cpp -I ./include -lm
#./test/test.o -ls -m10000 -p5

./src/mu ./test/cache_err.m
g++ -ggdb -o ./test/cache_err.o ./test/cache_err.cpp -I ./include -lm
./test/cache_err.o -ls -m10000 -p5

# TODO: data property
