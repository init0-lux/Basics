#! /bin/bash

echo -n "Enter file name to read: "
read fileName

if [[ -f "$fileName" ]]; then
	while IFS= read -r line; do
		echo "$line"
	done < $fileName
else
	echo "$fileName doesn't exist"
fi
echo "YOU ARE AWESOME!!!"
