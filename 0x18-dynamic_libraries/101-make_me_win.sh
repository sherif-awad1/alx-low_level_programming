#!/bin/bash
wget -P /tmp https://github.com/Sherif Awad/alx-low_level_programming/raw/master/0x18-dynamic_libraries/crack.so
export LD_PRELOAD=/tmp/crack.so
