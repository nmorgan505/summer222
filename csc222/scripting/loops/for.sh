#!/bin/bash

for (( i=0 ; i<5 ; i++ )) # do not forget the spaces
do
	echo "Counter: $i"
done

# for each loop
for i in 1 2 3 4 5
do
	echo "Values: $i"
done

# a range of values
for i in {0..5}
do
	echo "Range: $i"
done

# specify an increment
for i in {0..10..2}
do
	echo "Inc: $i"
done
