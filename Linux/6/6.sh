#!/bin/bash

read -p "Enter a number: " a

if ((a % 3 == 0 || a % 7 == 0))
then
	echo "$a is divisible by 3 or 7"
else
	echo "$a is not divisible by 3 or 7"
fi

