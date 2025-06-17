#!/bin/bash

printf "What do you drive? "

read vehicle;

case $vehicle in
	car) echo "You drive a car."
	echo "Is there a car directory in this folder?"
	if [[ -d "car" ]]
	then
		echo "there is"
	else
		echo "there is not"
	fi
	;;
	truck) echo "You drive a truck.";;
	van) echo "You drive a van";;
	*) echo "That isn't a real vehicle";;
esac
