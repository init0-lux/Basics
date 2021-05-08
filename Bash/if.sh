#! /bin/bash

# Don't use unnecessary spaces
count=10;

# -eq means equal
# -ne means Not equal
# Can use == or !=, if replace [] with (())

# Good practice to leave spaces between statement
if [ $count -eq 10 ]; then
	echo "The condition is true"
elif [ $count -ne 9 ]; then
	echo "count is not equal to 9"
else
	echo "Else statement"
fi

if (( $count > 9 )); then
	echo "Count is greater than 9"
elif (( $count = 10 )); then
	echo "Count is equal to 10"
else
	echo "Second Else statement"
fi
