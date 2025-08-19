#!/bin/bash

rm ./built_tests/*_ta.ta

./build_ta.sh bubblesort
cp ./tee_c_ecosystem/ta/8aaaf200-2450-11e4-abe2-0002a5d5c51b.ta \
    ./built_tests/bubblesort_ta.ta

./build_ta.sh connect4
cp ./tee_c_ecosystem/ta/8aaaf200-2450-11e4-abe2-0002a5d5c51b.ta \
    ./built_tests/connect4_ta.ta

./build_ta.sh lu_decomp
cp ./tee_c_ecosystem/ta/8aaaf200-2450-11e4-abe2-0002a5d5c51b.ta \
    ./built_tests/lu_decomp_ta.ta

./build_ta.sh nbody
cp ./tee_c_ecosystem/ta/8aaaf200-2450-11e4-abe2-0002a5d5c51b.ta \
    ./built_tests/nbody_ta.ta

./build_ta.sh tinynn
cp ./tee_c_ecosystem/ta/8aaaf200-2450-11e4-abe2-0002a5d5c51b.ta \
    ./built_tests/tinynn_ta.ta