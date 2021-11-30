#!/bin/bash

read -p "Enter three numbers: " a b c

if [ $a -lt $b ] && [ $a -lt $c ]
then
	echo "$a is smallest number"
elif [ $b -lt $a ] && [ $b -lt $c ]
then
	echo "$b is smallest number"
else
	echo "$c is smallest number"
fi

