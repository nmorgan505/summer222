#!/bin/bash

# Another option to exit when something fails is to use the -e flag:

set -e

echo "This should print"

ls fakedir #this will cause an error, so the script will exit (since -e is set)

echo "This won't print"
