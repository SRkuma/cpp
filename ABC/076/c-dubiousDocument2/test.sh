#!/bin/sh

# split inputs.txt with empty line
awk -v RS= '{print > ("input-" NR ".txt")}' inputs.txt

for file in input-*; do
    if [ -e $file ] && [ "$(head -c 2 $file)" != "//" ];
    then
        echo "input: "
        cat $file
        echo "output:"
        ./a.out < $file
        echo "\n"
    fi

done

rm -f input-*
