#!/bin/bash

rm ./ree_wasm_ecosystem/benchmark.c 2>/dev/null
cp ./tests/$1.c ./ree_wasm_ecosystem/benchmark.c 

rm -rf ./ree_wasm_ecosystem/common 2>/dev/null
mkdir ./ree_wasm_ecosystem/common 
cp ./libmin_common/* ./ree_wasm_ecosystem/common

cd ree_wasm_ecosystem

set -e

# Compiler and flags
CC=wasm32-wasi-clang
CFLAGS="-DREE_WASM -O0"

# Source files
SRC_FILES="benchmark.c      \
    common/libtarg.c        \
    common/libmin_abs.c     \
    common/libmin_strlen.c  \
    common/libmin_rand.c    \
    common/libmin_fail.c    \
    common/libmin_sqrt.c    \
    common/libmin_sincos.c  \
    common/libmin_rempio2.c \
    common/libmin_scalbn.c  \
    common/libmin_floor.c   \
    common/libmin_ctype.c   \
    common/libmin_exp.c"

# Output binary
OUT_FILE=benchmark

# Build
echo "Compiling $OUT_FILE..."
$CC $CFLAGS $SRC_FILES -o $OUT_FILE

echo "Build complete: $OUT_FILE"