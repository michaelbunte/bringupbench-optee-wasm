#!/bin/bash

rm ./ree_c_times/$1-times.txt
touch ./ree_c_times/$1-times.txt

for i in {1..10}; do
    /usr/bin/time -f "%e" ./ree_c_tests/${1}_ree_c 2>> ./ree_c_times/$1-times.txt
done