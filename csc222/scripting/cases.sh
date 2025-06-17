#!/bin/bash

echo "What is your favorite food?"

echo "1 - Tacos"
echo "2 - Pizza"
echo "3 - Pasta"

echo "Please enter 1, 2, or 3"
read food;

case $food in
	1) echo "Tacos are good!";; # ;; marks the end of a case
	2) echo "Pizza has a lot of options"
	   echo "Unless you like black olives"
	   ;;
	3) echo "Pasta is great!";;
	*) echo "That wasn't an option, and you shold feel bad";;
esac
