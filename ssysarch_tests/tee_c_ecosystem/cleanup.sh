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
    find . -type f -name "$pattern" -exec rm -v {} +
done

echo "Done."

rm ./tee_c_ecosystem/ta/user_ta_header_defines.h
rm -rf ./tee_c_ecosystem/ta/include/common