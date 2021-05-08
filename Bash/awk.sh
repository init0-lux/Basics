#! /bin/bash

echo -n "Enter file name: "
read fileName

if [[ -f $fileName ]]; then
	# This prints out the entire file
	awk '{print}' $fileName

	echo

	# This prints out lines containing Linux
	# Case Sensitive
	awk '/Linux/ {print}' $fileName

	# This prints the second field of all lines containing Linux
	# Add $2,$3 to print the second and third fields simultaneously
	awk '/Linux/ {print $2}' $fileName

else
	echo "$fileName doesn't exist"
fi
