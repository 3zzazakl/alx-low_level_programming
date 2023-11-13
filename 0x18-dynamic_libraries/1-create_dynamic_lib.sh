#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so 0-isupper.o 0-memset.o 0-strcat.o 1*.o 2*.o 3*.o 4*.o 5-strstr.o 6-abs.o 9-strcpy.o _putchar.o
