#!/bin/bash
setvim=0
while getopts "v" flag; do
    case $flag in
        v)
        setvim=1
     esac
done
shift $(( OPTIND-1 ))


if [ "$1" = "" ] ;then
    echo "Usage: compile.sh folder/filename, compiles file and removes it after execution"
    exit 1
fi

if [ $setvim -eq 1 ] ;then
    vim $1
else
    nano $1
fi

clang -lm $1 -o $1.out
./$1.out
rm $1.out
