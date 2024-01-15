#!/bin/bash
wget -P /tmp https://github.com/EmanBarhoma30/alx-low_level_programming/raw/master/0x18-dynamic_librarires/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
