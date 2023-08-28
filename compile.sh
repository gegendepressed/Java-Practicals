#!/bin/bash
setvim=0
while getopts "vc" flag; do
    case $flag in
        v)
        setvim=1 ;;
        c)
        setvim=2 ;;
    esac
done
shift $(( OPTIND-1 ))


if [ "$1" = "" ] ;then
    echo -e "Usage: $0 [args] <folder/filename>\n compiles file and removes it after execution \n\nArguments: \n -v: Use vim instead of nano \n -c: Compile without opening text editor"
    exit 1
fi

if [ $setvim -eq 1 ] ;then
    vim $1
elif [ $setvim -eq 2 ] ;then
    echo "Compiling $1"
else
    nano $1
fi

clang -lm $1 -o $1.out
./$1.out
rm $1.out
