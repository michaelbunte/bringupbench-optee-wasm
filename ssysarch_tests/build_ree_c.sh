#!/bin/bash

rm ./ree_c_ecosystem/benchmark.c 
cp ./tests/bubblesort.c ./ree_c_ecosystem/benchmark.c 

rm -rf ./ree_c_ecosystem/common 2>/dev/null
mkdir ./ree_c_ecosystem/common 
cp ./libmin_common/* ./ree_c_ecosystem/common
