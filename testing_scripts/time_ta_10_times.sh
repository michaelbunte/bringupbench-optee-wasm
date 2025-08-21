#!/bin/bash

rm ./ta_times/$1-times.txt
touch ./ta_times/$1-times.txt

for i in {1..10}; do
    /usr/bin/time -f "%e" sudo ./optee_example_hello_world 2>> ./ta_times/$1-times.txt
done