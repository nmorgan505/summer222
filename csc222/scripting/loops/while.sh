#!/bin/bash

counter=0
while [ $counter -le 10 ]
do
	echo $counter
	# counter=$((counter+1))
	# ((counter++)) will return the value of counter before incrementing
	# ((++counter)) returns the value of couter after incrementing
	((counter+=1))
	sleep 0.5
done
