#!/bin/bash

read -p "Enter marks in 5 subjects: " a b c d e

total=$((a + b + c + d + e))
per=$((total / 5))

echo "Total: $total, Percentage: $per%"

if [ $per -ge 60 ]
then
	echo "Grade: First Class"
elif [ $per -ge 50 ] && [ $per -lt 60 ]
then
	echo "Grade: Second Class"
elif [ $per -ge 40 ] && [ $per -lt 50 ]
then
	echo "Grade: Third Class"
else
	echo "Grade: Fail"
fi

