#! /bin/bash

# Prints out 1 to 4
for i in 1 2 3 4 5; do
	echo $i
done;

# Prints out 1 to 4
for i in {1..5}; do
	echo $i
done;

# Prints out 1 to 19
for i in {1..20}; do
	echo $i
done;

# Prints out 1 to 19 with 2 increment steps... 1,3,5,...
for i in {1..20..2}; do
	echo $i
done;

# Prints out 1 to 9
for (( i=0; i<10; i++ )); do
	echo $i
done;
