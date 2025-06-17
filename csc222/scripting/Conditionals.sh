#!/bin/bash

if test $1 -gt 5 # -gt means "greater than"
then
	echo "$1 is greater than 5"
fi

if test $1 -lt 5 # -lt means "less than"
then
	echo "$1 is less than 5"
else
	echo "$1 is not less than 5"
fi
