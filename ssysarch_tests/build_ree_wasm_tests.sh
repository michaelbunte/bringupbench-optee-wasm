#!/bin/bash
rm ./built_tests/*_ree_wasm
rm ./built_tests/*.tar

TESTS=(micro_benchmarks)

for TEST in "${TESTS[@]}"; do
    ./build_ree_wasm.sh $TEST
    cp ./ree_wasm_ecosystem/benchmark ./built_tests/${TEST}_ree_wasm
done
