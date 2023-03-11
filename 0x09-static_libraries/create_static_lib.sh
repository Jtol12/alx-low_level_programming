#!/bin/bash
gcc Wall -pedantic -werror -wextra -c *.c
ar _rcliball.a *.o
ranlib liball.a
