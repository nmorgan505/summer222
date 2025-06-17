#!/bin/bash

for file in *
do
	if [ -f "$file" ]
	then
		echo $file
	fi
done

parent_dir=".."
for directory in $parent_dir/*
do
	if [ -d "$directory" ]
	then
		echo $directory
	fi
done

absolute_dir="/home/nmorgan/csc222"
for directory in $absolute_dir/*
do
	if [ -d "$directory" ]
	then
		echo $directory
	fi
done
