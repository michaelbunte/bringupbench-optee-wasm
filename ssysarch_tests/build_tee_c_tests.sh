#!/bin/bash

rm ./built_tests/*_ta.ta
rm ./built_tests/*.tar
mkdir built_tests || true


TESTS=(bubblesort connect4 lu_decomp nbody tinynn)

for TEST in "${TESTS[@]}"; do
    ./build_ta.sh $TEST
    cp ./tee_c_ecosystem/ta/8aaaf200-2450-11e4-abe2-0002a5d5c51b.ta \
        ./built_tests/${TEST}_ta.ta
done

cd built_tests
tar -cf ta_tests.tar tinynn_ta.ta nbody_ta.ta lu_decomp_ta.ta connect4_ta.ta bubblesort_ta.ta

rm *.ta`