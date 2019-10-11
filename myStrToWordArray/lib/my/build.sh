#!/bin/bash
gcc -Wall -c *.c
ar cr libmy.a *.o
ranlib libmy.a
