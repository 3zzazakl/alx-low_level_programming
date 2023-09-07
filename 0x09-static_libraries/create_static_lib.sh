#!/bin/bash
gcc -wall -werror -wextra -padantic -c *.c
ar -rc liball.a *.o
ranlib liball.a
