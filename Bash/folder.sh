#! /bin/bash

echo -n "Enter dir name: "
read dir

# -d refers to folders
if [ -d "$dir" ]; then
	echo "$dir exists"
else
	echo "$dir doesn't exist"
fi

# -f refers to filename
if [ -f "$dir" ]; then
	echo "$dir exists"
else
	echo "$dir doesn't exist"
fi
