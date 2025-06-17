#!/bin/bash

# the 'function' keyword doesn't exist in every bash like shell, and is not POSIX compliant
function hello_one {
	echo "hello"
	echo "done with hello one"
}

# The more accepted way

hello_two() {
	echo "hello again"
	echo "done with hello two"
}

hello_one
hello_two
