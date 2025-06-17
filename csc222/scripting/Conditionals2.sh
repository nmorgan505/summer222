#!/bin/bash

# we can use [ ] instead of test
# must include a space around the brackets

if [ $1 -lt 10 ]
then
	echo "$1 is less than 10"
elif [ $1 -gt 10 ]
then
	echo "$1 is greater than 10"
else
	echo "$1 is 10"
fi
