#!/bin/bash

hello() {
	echo "hi $1"
}

add() {
	printf "the sum of $1 and $2 is "
	echo $(( $1 + $2 ))
}

helloAgain() {
	echo "All args: $@"
}

hello "Nikolas"
add 2 3
helloAgain The weather today is a bit overcast
