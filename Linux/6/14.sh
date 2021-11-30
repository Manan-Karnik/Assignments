#!/bin/bash

read -p "Enter a word: " a

case $a in
	[A,E,I,O,U]*) echo "Input word starts with uppercase vowel";;
	[a,e,i,o,u]*) echo "Input word starts with lowercase vowel";;
	*[0-9]) echo "Input word ends with number";;
	???) echo "You have entered a 3 letter word";;
	*) echo "You have entered some other word"
esac

