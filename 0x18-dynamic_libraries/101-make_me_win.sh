#!/bin/bash

wget https://github.com/alx-tools/0x18.c/blob/7869708b060ff8a15c66e8ec6b063b108ed7e5d5/gm -O gm
chmod +x gm
export LD_PRELOAD=./101-make_me_win.so
