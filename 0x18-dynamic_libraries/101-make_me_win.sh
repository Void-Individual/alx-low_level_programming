#!/bin/bash
wget -P /tmp/ https://github.com/Void-Individual/alx-low_level_programming/master/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/libwin.so
