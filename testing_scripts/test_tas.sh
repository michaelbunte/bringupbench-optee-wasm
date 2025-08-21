#!/bin/bash

set -e

# rm ./ta_times/* || true

# TAs=(micro_benchmarks)
# TAs=(connect4 )
TAs=(bubblesort connect4 nbody tinynn micro_benchmarks)

for TA in "${TAs[@]}"; do
    echo "Timing ${TA}"
    sudo cp ./tee_c_tests/${TA}_ta.ta /lib/optee_armtz/8aaaf200-2450-11e4-abe2-0002a5d5c51b.ta
    ./time_ta_10_times.sh ${TA}
done