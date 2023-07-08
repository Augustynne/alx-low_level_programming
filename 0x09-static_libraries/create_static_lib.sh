#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic  -Wall -c *.c
ar rc liball.a *.o
