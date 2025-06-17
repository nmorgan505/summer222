#!/bin/bash

# The command exit can be used to force a script to exit where we desire

read -p "What file would you like to remove? " filename

if [ ! -f $filename ]
then
	echo "That file does not exist... exiting."
	exit 1
fi

rm $filename && echo "File removed successfully"
