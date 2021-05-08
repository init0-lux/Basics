#! /bin/bash

for (( i=0; i<=10; i++ )); do
	# This will check if i>5 and if it is, Break the for loop;
	if [ $i -gt 5 ]; then
		break
	fi

	echo $i
done

echo ""

# This for loop with skip 3 and 7
for (( ii=0; ii<=10; ii++ )); do
	# if $ii=3|7, for loop will start from beginning
	# Therefore, Not printing out the $ii
	if [[ $ii -eq 3 || $ii -eq 7 ]]; then
		continue
	fi
	
	echo $ii
done
