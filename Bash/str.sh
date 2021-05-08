#! /bin/bash

echo "Enter string: "
read str

echo "Enter string 2: "
read str2

if [ "$str" == "$str2" ]; then
	echo "Strings match"
else
	echo "Strings do not match"
fi

# Greater or lesser
if [ "$str" \< "$str2" ]; then
	echo "$str is smaller than $str2"
elif [ "$str" \> "$str2" ]; then
	echo "$str is greater than $str2"
fi

# Concatenate
Concat=$str$str2
echo $Concat

# UPPER and lower case
echo ${str^}	# lowercase
echo ${str^^}	# UPPERCASE

echo ${str2^}	# lowercase
echo ${str2^^}	# UPPERCASE
