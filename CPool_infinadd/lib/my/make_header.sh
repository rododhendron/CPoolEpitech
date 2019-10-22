#!/bin/bash
if [ -f ../../my.h ]; then
	rm ../../my.h
fi
echo "/*nilline** EPITECH PROJECT, 2019nilline** my.hnilline** File description:nilline** headernilline*/" >> outhead.txt
for i in *.c
do
	chaineZ=$i
	var=${chaineZ:0:(-2)}
	cat $chaineZ | grep -v '\*\* ' | grep -v "return" | grep -v ");" | grep -i $var >> output.txt
	chaineZ=0
	var=0
done
cat outhead.txt | sed 's/nilline/\n/g' >> my.h
cat output.txt | grep -v '\*\*' | sed 's/$/;/g' >> my.h
rm output.txt
rm outhead.txt
