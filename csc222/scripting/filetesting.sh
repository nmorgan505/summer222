#!/bin/bash

# we have 3 files to test 
# Comment/uncomment test file names 

read -p "Enter a file to check: " filename

# -e checks if a file or directory exists with a given name 
# note we use double brackets to prevent word splitting, as would be caused by hello world.txt
printf "File/Directory Existence: "
[[ -e $filename ]] && echo "true" || echo "false"

# -f checks if the string matches a regular file (i.e. anything that isn't a directory)
printf "File Only Existence: "
[[ -f $filename ]] && echo "true" || echo "false"

# -r checks if the string matches a readable file
printf "Readable File: "
[[ -r $filename ]] && echo "true" || echo "false"

# -d checks if the string matches a directory
printf "Directory: "
[[ -d $filename ]] && echo "true" || echo "false"

# -L checks if the string matches a symbolic link
printf "Link: "
[[ -L $filename ]] && echo "true" || echo "false"

# -x checks if the string matches an executable
printf "Executable: "
[[ -x $filename ]] && echo "true" || echo "false"
