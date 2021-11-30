#!/bin/bash

read -p "Enter salary: " salary

if [ $salary -le 1500 ]
then
	hra=$(bc <<< "$salary * 0.1")
	da=$(bc <<< "$salary * 0.9")
else
	hra=500
	da=$(bc <<< "$salary * 0.98")
fi

echo "Gross salary: $(bc <<< "$salary + $da + $hra")"

