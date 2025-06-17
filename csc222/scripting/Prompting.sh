#!/bin/bash

# use read -p (p is for prompt)
# input gets placed in the variables provided at the end

read -p "Enter your first and last name: " first last

echo $first $last

# Can use read in secret mode
echo "Enter a Secret: "
read -s secret

echo $secret

read -sp "Enter another secret: " secret2

echo $secret2
