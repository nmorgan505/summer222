#!/bin/bash

# the notation for math in a bash script is $(())
# can be used for integers only

echo $((2+3))
echo $((3-4))
echo $((3 * 4))
echo $((5 / 2)) #integer div
echo $((5 % 2))
echo

# with variables
num1=2
num2=3
result=$((num1+num2))
echo "The result of $num1 + $num2 is $result"
echo

# for non-integers:
echo "2.3 + 1.2" | bc # bc is basic calculator
echo "scale=5; 10/3" | bc  # scale sets number of decimal points
echo "sqrt(12)" | bc -l    # use -l to load the math library
