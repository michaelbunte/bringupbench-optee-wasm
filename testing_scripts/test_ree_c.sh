#!/bin/bash

set -e

# rm ./ta_times/* || true

# TAs=(bubblesort)
# TAs=(connect4 lu_decomp)
TESTs=(bubblesort connect4 nbody tinynn)

for TEST in "${TESTs[@]}"; do
    echo "Timing ${TEST}"
    ./time_ree_wasm_10_times.sh ${TEST}
done