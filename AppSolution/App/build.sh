#!/bin/bash
clear
set -e
./dos2unix.sh
export env_filename=App
n_cores=`cat /proc/cpuinfo | grep processor | wc -l`
let "n_cores++"
mkdir -p build && cd build
cmake ..
make -j$n_cores -b
make $env_filename.s

./$env_filename
