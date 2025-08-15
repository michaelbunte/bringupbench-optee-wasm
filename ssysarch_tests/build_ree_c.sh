#!/bin/bash

rm ./ree_c_ecosystem/benchmark.c 2>/dev/null
cp ./tests/bubblesort.c ./ree_c_ecosystem/benchmark.c 

rm -rf ./ree_c_ecosystem/common 2>/dev/null
mkdir ./ree_c_ecosystem/common 
cp ./libmin_common/* ./ree_c_ecosystem/common

cd ree_c_ecosystem

set -e

# Compiler and flags
CC=gcc
CFLAGS="-O2 -Wall -DREE_C"

# Source files
SRC_FILES="benchmark.c \
    common/libtarg.c \
    common/libmin_abs.c \
    common/libmin_strlen.c \
    common/libmin_rand.c \
    common/libmin_fail.c \
    common/libmin_sqrt.c \
    common/libmin_sincos.c \
    common/libmin_rempio2.c \
    common/libmin_scalbn.c \
    common/libmin_floor.c \
    common/libmin_ctype.c \
    common/libmin_exp.c"

# Output binary
OUT_FILE=benchmark

# Build
echo "Compiling $OUT_FILE..."
$CC $CFLAGS $SRC_FILES -o $OUT_FILE

echo "Build complete: $OUT_FILE"