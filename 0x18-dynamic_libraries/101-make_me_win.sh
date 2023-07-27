#!/bin/bash
wget -O /tmp/win.so https://raw.github.com/kidusgr/alx-low_level_programming/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
