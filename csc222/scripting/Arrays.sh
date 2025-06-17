#!/bin/bash

# Declaring an Array
groceries=("bread" "eggs" "milk")
# use space to seperate elements of an array
costs=(1 10 23.99)

# Accessing elements
echo $groceries #only the 0th item
echo ${groceries[1]} #gets item 1
echo $groceries[1] # accesses 0th item and prints [1] following
echo "${groceries[@]}" # @ will access all items
echo

echo ${costs[0]} ${costs[1]} ${costs[2]}
echo "${costs[@]}"
echo

# can all be accessed the same way with a printf statement
printf "Food Item: %s\t\tPrice: %d\n" "${groceries[1]}" "${costs[1]}"
echo

# Declaring and assigning values seperately
declare -a numeric_array

numeric_array[0]="Hello"	# Directly set an index to a value
numeric_array[1]="World"
numeric_array+=("Another Item") # appends to an array
echo "${numeric_array[@]}"
echo

# Associative Array - The idex is in a named form (like keys from a dictionary)
# may not be available in older version of bash (before v4)

declare -A associative_array

associative_array[first]="Nikolas"
associative_array[last]="Morgan"
echo "${associative_array[@]}"
echo "${!associative_array[@]}"

