#!/bin/bash

echo "Current working directory"
pwd
printf "\n"

echo "Current date and time"
date +"Date: %d/%m/%Y%nTime: %H:%M:%S"
printf "\n"

echo "Terminal address"
tty
printf "\n"

echo "Current user"
whoami
printf "\n"

echo "Processes of current user"
ps
printf "\n"

echo "List of files and directories"
ls

