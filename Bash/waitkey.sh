#! /bin/bash

echo "Press any key to continue..."

while [ true ]; do
	read -t 3 -n 1
	if [ $? = 0 ]; then 
		echo "Terminating"
		exit;
	else
		echo "Waiting for User Interaction";
	fi
done
