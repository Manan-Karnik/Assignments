#!/bin/bash

read -p "Enter character: " a

case $a in
	[A-Z]) echo "You have entered an uppercase character";;
	[a-z]) echo "You have entered an lowercase character";;
	[0-9]) echo "You have entered a number";;
	?) echo "You have entered a symbol";;
	*) echo "You have entered multiple characters"
esac

