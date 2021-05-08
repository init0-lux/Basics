#! /bin/bash

echo -n "Enter the Hex number: "
read Hex

# -n to disable newline
echo -n "The decimal value of $Hex is: "

# using bc for calculation
echo "obase=10; ibase=16; $Hex" | bc
