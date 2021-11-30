#!/bin/bash

printf "1: Display File\n2: Copy File\n3: Delete file\n4: Exit\n"

while [ true ]
do
	read -p "Enter option number: " opt
	case $opt in
		1) 
		echo "Contents of file are:"
		awk -F: {'printf ("%5s\t%s\t%s\n", $1, $2, $3)'} student;;
		2)
		while [ true ]
		do
			read -p "Enter file name to store copied contents: " file
			if [ -f "$file" ]
			then
				echo "File already exists, try a different name!"
			else
				echo "Copying..."
				cp student $file
				echo "Done! File contents:"
				awk -F: {'printf ("%5s\t%s\t%s\n", $1, $2, $3)'} $file
				break
			fi
		done;;
		3)
		echo "Deleting file..."
		rm student
		echo "File deleted!";;
		4)
		exit;;
		*) echo "Invalid option";;
	esac
done


