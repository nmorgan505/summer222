#!/bin/bash

globalvar="this is global"

helloLocal() {
	local localvar="this is local"

	# shadowing
	local globalvar="this is now local"

	echo $globalvar # will provide the local version
	echo $localvar
}

helloLocal
echo $globalvar # prints the actual global variable
