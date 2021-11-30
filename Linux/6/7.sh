#!/bin/bash

read -p "Enter two numbers: " a b

if [ $a -gt $b ]
then
	echo "$a is greather than $b"
else
	echo "$b is greather than $a"
fi

