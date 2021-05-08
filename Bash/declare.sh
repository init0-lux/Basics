#! /bin/bash

# Use declare -p to show all declared variables

declare var1="This is variable 1"
declare var1="This variable can be changed"

declare -r var2="This is var2, It cannot be changed"
var2="Hey there" # This won't work

echo $var1
echo $var2
