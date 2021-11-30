#!/bin/bash

read -p "Enter two numbers: " a b

echo "$a + $b = $(bc <<< "$a + $b")"
echo "$a - $b = $(bc <<< "$a - $b")"
echo "$a * $b = $(bc <<< "$a * $b")"
echo "$a / $b = $(bc <<< "$a / $b")"
echo "$a % $b = $(bc <<< "$a % $b")"


