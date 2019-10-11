#!/bin/bash

for i in $@
do
	chaineZ=$i
	var=${chaineZ:0:(-2)}
	cat $chaineZ | grep -v '\*\* ' | grep -v "return" | grep -i $var >> output.txt
	chaineZ=0
	var=0
done
sed 's/$/;/g' output.txt > ../../include/my.h
