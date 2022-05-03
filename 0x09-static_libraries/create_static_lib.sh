#!/bin/bash
gcc -c *.c
ar rc lia.a *.o
ranlib liball.a
