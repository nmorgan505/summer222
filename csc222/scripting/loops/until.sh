#!/bin/bash

# the until loop runs until a condition becomes true

until [ -f "hello.txt" ]
do
	echo "Let's make a file named hello.txt"
	read -p "What would you like to name the file? " filename
	touch "$filename" # prevents word splitting on the var
done

echo good job, you may want to delete the other files you made.
