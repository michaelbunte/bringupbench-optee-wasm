#!/bin/bash

# rm ./ree_wasm_times/$1-times.txt
touch ./ree_wasm_times/$1-times.txt

for i in {1..1}; do
    /usr/bin/time -f "%e" ~/wasm3/wasm3 ./ree_wasm_tests/${1}_ree_wasm 2>> ./ree_wasm_times/$1-times.txt
done