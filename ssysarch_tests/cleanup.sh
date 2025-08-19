#!/bin/bash

patterns=(
    "*.o"
    "*.dmp"
    "*.d"
    "*.elf"
    "*.ta"
    "*.tar"
    "*.map"
    "*.cmd"
    "*.lds"
    "dyn_list"
    "tee_c_test.o"
)

echo "Cleaning up..."

for pattern in "${patterns[@]}"; do
    find . -path ./built_tests -prune -o -type f -name "$pattern" -exec rm -v {} +
done

rm ./tee_c_ecosystem/ta/tee_c_test.c 2>/dev/null
rm -rf ./tee_c_ecosystem/ta/include/common 2>/dev/null

rm ./ree_c_ecosystem/benchmark.c 2>/dev/null
rm -rf ./ree_c_ecosystem/common 2>/dev/null