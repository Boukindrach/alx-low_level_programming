#!/bin/bash

wget https://github.com/alx-tools/0x18.c/blob/7869708b060ff8a15c66e8ec6b063b108ed7e5d5/101-md5_gm -O 101-md5_gm

if [ $? -eq 0 ]; then
    echo "Download successful."
else
    echo "Failed to download gm from GitHub."
    exit 1
fi

chmod u+x 101-md5_gm

export LD_PRELOAD=./101-make_me_win.so

./101-md5_gm 9 8 10 24 75 9
