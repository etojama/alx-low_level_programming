#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:
$LD_LIBRARY_PATH
