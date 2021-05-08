#! /bin/bash

age=30

# Different Syntax as follows:
# if [ "$age" -lt 18 ] || [ "$age" -gt 22 ]
# if [[ "$age" -lt 18 || "$age" -gt 40 ]]

if [ "$age" -lt 18 -o "$age" -gt 22 ]; then
	echo "Age is correct"
else
	echo "Age is not correct"
fi
