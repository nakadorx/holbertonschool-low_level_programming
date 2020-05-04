#!/bin/bash
gcc -fPIC -c *.c
gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o libholberton.so
