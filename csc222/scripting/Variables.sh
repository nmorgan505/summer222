#!/bin/bash

# Setting variables
my_var=10
# do not include spaces before or after the equal sign 
another_var="The variable is..."

# using a variable
echo $another_var $my_var
echo

# Single quotes
echo 'This does not show the variable value: $my_var'
# Double quotes
echo "This does show the variable value: $my_var"
echo

# Escape characters
# can escape special characters with \
echo "The price was \$$my_var"
