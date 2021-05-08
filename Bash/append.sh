#! /bin/bash

echo -n "Enter the file to append to: "
read fileName

if [[ -f $fileName ]]; then
	echo -n "Enter the text to append to $fileName: "
	read text
	
	echo $text >> $fileName;
else
	echo "$fileName doesn't exist"
fi
