#!/bin/bash

read -p "Enter a number: " a

if [ $((a % 2)) == 0 ]
then
	echo "$a is even"
else
	echo "$a is odd"
fi

