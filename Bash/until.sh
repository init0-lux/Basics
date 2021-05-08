#! /bin/bash

num=1;

# While loop runs while the statement is true
# Until loop runs Until the statement becomes true

until [ $num -ge 10 ]; do
	echo $num
	num=$(( num+1 ))
done
