#!/bin/bash

# the return keyword is used to set an "exit status"
# you should use echo to return a different value, or use a global variable to track
add_one() {
	if [ -z $1 ]
	then
		return 1 # 1 for failure
	else
		echo $(( $1 + 1 ))
		return 0 # 0 for success
	fi
}


echo "Example 1"
result=$( add_one 20 )
exit_status=$?

if (( exit_status > 0 ))
then
	echo "an error occurred"
else
	echo "The result was $result"
fi

echo "Example 2"
result=$( add_one )
exit_status=$?

if (( exit_status > 0 ))
then
	echo "an error occurred"
else
	echo "The result was $result"
fi
