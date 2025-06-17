#!/bin/bash

# this file is not for running

### Integer comparison

[ -gt ] : greater than 
[ -lt ] : less than 
[ -ge ] : greater than or equal to 
[ -le ] : less than or equal to 
[ -eq ] : equal to 
[ -ne ] : not equal to

(( value1 > value2 )) : greater than
(( < )) : less than
(( <= )) : less than or equal to
(( >= )) : greater than or equal to
== and != Do not work

### String comparison

[ "string1" == "string2" ] : returns true if the values are equal

myvar = "hi class"
[ $myvar == "hi class" ] : returns false, performs string split on var passed in

[[ $myvar == "hi class" ]] : return true, does not string split
[ "$myvar" == "hi class" ] : return true

[[ "apple" == a* ]] : returns true since apple starts with 'a' (* is a wildcard)

[[ "apple" < "banana" ]] # returns true 
[ "apple" \< "banana" ]  # can use \< for single brackets 

var=""
[ -z $var ] # check if a string is empty; returns true 
[ -n $var ] # check if a string is not empty; returns false
