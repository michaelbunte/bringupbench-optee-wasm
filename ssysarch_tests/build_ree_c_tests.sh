#!/bin/bash
rm ./built_tests/*_ree_c
rm ./built_tests/*.tar

TESTS=(bubblesort connect4 lu_decomp nbody tinynn micro_benchmarks)
# TESTS=(micro_benchmarks)

for TEST in "${TESTS[@]}"; do
    ./build_ree_c.sh $TEST
    cp ./ree_c_ecosystem/benchmark ./built_tests/${TEST}_ree_c
done
