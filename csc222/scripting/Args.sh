#!/bin/bash

# individuals can pass arguments into a script by just adding "arguments" in after 
# calling the function name
# ex ./somescript.sh <argument1> <argument2>

# we read these by using $ and a number that represents the placement of the arg

echo The file name is $0
echo The first arg is $1
echo The second arg is $2

echo The length of the first arg is ${#1}

# you can get all args as a string with $*
echo "All the args are $*"

# you can access the args as an array with $@
echo "All the args are $@"

# the total number of args can be read with $#
echo Total num of args is $#

