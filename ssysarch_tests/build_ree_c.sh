#!/bin/bash

rm ./ree_c_ecosystem/benchmark.c 
cp ./tests/bubblesort.c ./ree_c_ecosystem/benchmark.c 

rm -rf ./ree_c_ecosystem/common 2>/dev/null
mkdir ./ree_c_ecosystem/common 
cp ./libmin_common/* ./ree_c_ecosystem/common

rm ./ree_c_ecosystem/user_ta_header_defines.h 2>/dev/null
cp ./shared/user_ta_header_defines.h ./ree_c_ecosystem
