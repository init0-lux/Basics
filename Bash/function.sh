#! /bin/bash

function funcName() {
	echo "This is a new function"
}

function funcPrint() {
	echo $@
}

function funcCheck() {
	retVal="I Love Linux"
	echo "$retVal"
}

funcName
funcPrint Hi
funcPrint Hey this is O, the 1 and Only
funcCheck
