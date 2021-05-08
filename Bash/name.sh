#! /bin/bash

echo "What's your Name?"
read name

if [ $name ]; then
	echo "$name Sounds okay to me"
else
	echo "Woah, $name sounds like Punk"
fi
