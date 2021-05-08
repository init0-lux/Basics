#! /bin/bash

# This will take as many args as you give and store it in $args
args=("$@")

# This will echo the first three args from $args
echo ${args[0]} ${args[1]} ${args[2]}

# This will echo all the args in $args
echo $@

# This will echo the number of args in $args
echo $#
