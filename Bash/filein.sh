#! /bin/bash

# If no file specified, It will read from stdin
while read line; do
	echo "$line"
# This prints out whatever you type in
done < "${1:-/dev/stdin}"
