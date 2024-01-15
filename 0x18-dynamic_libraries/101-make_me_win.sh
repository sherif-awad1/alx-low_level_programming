#!/bin/bash
wget -P /tmp https://github.com/sherif-awad1/alx-low_level_programming/raw/c9a3716775fe50d914503bb74152fb888a214c14/0x18-dynamic_libraries/crack.so
export LD_PRELOAD=/tmp/crack.so
