#! /bin/bash

# Set 10<age>40 for different output; i.e.:
#age=22;
age=10;

# Below if same as:
# if [[ "$age" -gt 10 && "$age" -lt 40 ]]
if [ "$age" -gt 10 ] && [ "$age" -lt 40 ]; then
	echo "Age is correct"
else
	echo "Age is not correct"
fi
