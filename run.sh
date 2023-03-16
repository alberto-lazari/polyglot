#!/bin/bash

file=polyglot.c
# C
gcc $file && {
    ./a.out
    rm a.out
}

# C++
g++ -x c++ $file && {
    ./a.out
    rm a.out
}

# Php
php $file

# Python
python3 $file

# Shell
sh $file

# Ruby
ruby $file
