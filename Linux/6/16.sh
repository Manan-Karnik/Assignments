#!/bin/bash

productQuery () {
	read -p "Product Number: " pNum
	echo "Details of $pNum are:"
	grep -m1 "" masterdata | awk -F: {'printf("%5s\t%s\t%s\t%s\n", $1, $2, $3, $4)'}
	grep "^$pNum:" masterdata | awk -F: {'printf("%5s\t\t%s\t\t%s\t\t%s\n", $1, $2, $3, $4)'}
	read -p "Do you want to get the details of another product? (y/n): " ans
	if [ $ans == "y" ]
	then
		productQuery
	fi
}
customerQuery () {
	read -p "Customer Code: " cCode
	echo "Details of $pNum are:"
	grep -m1 "" transdata | awk -F: {'printf("%5s\t%s\t%s\t%s\n", $1, $2, $3, $4)'}
	grep "^$cCode:" transdata | awk -F: {'printf("%5s\t\t%s\t\t%s\t\t%s\n", $1, $2, $3, $4)'}
	read -p "Do you want to get the details of another Customer? (y/n): " ans
	if [ "$ans" == "y" ]
	then
		customerQuery
	fi
}
printf "1: Product Query\n2: Customer Query\n3: Exit\n"
while [ true ]
do
	read -p "Enter option number: " choice
	case $choice in
		1) productQuery;;
		2) customerQuery;;
		3) exit;;
	esac
done

