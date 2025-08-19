#!/bin/bash

./cleanup.sh

rm ./tee_c_ecosystem/ta/tee_c_test.c 2>/dev/null
cp ./tests/$0.c ./tee_c_ecosystem/ta/tee_c_test.c

rm -rf ./tee_c_ecosystem/ta/include/common
mkdir ./tee_c_ecosystem/ta/include/common
cp -R ./libmin_common/* ./tee_c_ecosystem/ta/include/common

export NV_TARGET_BOARD=234
export CROSS_COMPILE_AARCH64_PATH=~/michael/aarch64--glibc--stable-2023.11-1
export CROSS_COMPILE_AARCH64=~/michael/aarch64--glibc--stable-2023.11-1/bin/aarch64-buildroot-linux-gnu-
export UEFI_STMM_PATH=~/optee-dependencies/Jetson_Linux_R35.4.1_aarch64/Linux_for_Tegra/bootloader/standalonemm_optee_t234.bin

make -C tee_c_ecosystem \
	CROSS_COMPILE="/home/nick2/michael/aarch64--glibc--stable-2023.11-1/bin/aarch64-buildroot-linux-gnu-" \
	TA_DEV_KIT_DIR="/home/nick2/michael/repos/bringupbench-optee-wasm/ta_devkit" \
	OPTEE_CLIENT_EXPORT="/home/nick2/optee-dependencies/Jetson_Linux_R35.4.1_aarch64/Linux_for_Tegra/sources/tegra/optee-src/nv-optee/optee/install/t234/usr" \
	TEEC_EXPORT="/home/nick2/optee-dependencies/Jetson_Linux_R35.4.1_aarch64/Linux_for_Tegra/sources/tegra/optee-src/nv-optee/optee/install/t234/usr" \
	-j"$(nproc)"

