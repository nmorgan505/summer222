#!/bin/bash

# $? var holds the exit code from the most recently executed command

# Typically we use 0 for a success
# Values 1 - 255 are used for other errors
# Commonly used error codes:
#	127: command not found
#	128: invalid exit argument

echo Holds the last exit code: $? # holds 0 since there has been no command previous

echo "Example 1: ls -a"
ls -a .
echo Exit code from ls $?
echo

echo "Example 2: not a real command"
notacommand -abcdefg
echo $? # should expect 127
echo

echo "Example 3: Handling Errors with Exit Codes"
ls notrealdir # fake directory, exit code should be 1
if [ $? -gt 0 ]
then
	echo "Handled Error"
else
	echo "ls executed successfully"
fi
