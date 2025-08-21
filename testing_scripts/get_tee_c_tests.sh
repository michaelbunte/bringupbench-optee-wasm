#!/bin/bash
rm ./tee_c_tests/*
scp nick2@oregon.ee.ucla.edu:~/michael/repos/bringupbench-optee-wasm/ssysarch_tests/built_tests/ta_tests.tar tee_c_tests
cd tee_c_tests
tar -xf ta_tests.tar 