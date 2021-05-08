#! /bin/bash

echo -n "Enter the file to search in: "
read fileName

if [[ -f $fileName ]]; then
	echo -n "Enter text string to search for: "
	read str

	# Add -i to ignore case-sensitivity
	# -n to print line numbers as well
	# -c to print number of times of recurrence
	# -v to print number of lines W/OUT given term
	grep -n -c $str $fileName

else
	echo "$fileName doesn't exist"
fi
