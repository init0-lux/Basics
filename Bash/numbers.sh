#! /bin/bash

Num=4;
Num1=20;

echo $(( Num1+Num ));	# Addition
echo $(( Num1-Num ));	# Subtraction
echo $(( Num1*Num ));	# Multiplication
echo $(( Num1/Num ));	# Division
echo $(( Num1%Num ));	# Remainder

# Alternative Method;

echo $(expr $Num1 + $Num );	# Addition
echo $(expr $Num1 - $Num );	# Subtraction
echo $(expr $Num1 \* $Num );	# Multiplication; remember the \
echo $(expr $Num1 / $Num );	# Division
echo $(expr $Num1 % $Num );	# Remainder
