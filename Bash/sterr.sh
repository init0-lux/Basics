#! /bin/bash

# 1=STDIN; 2=STDERR
# STDIN goes to file.txt
# STDERR goes to file2.txt
ls +al 1>file.txt 2>file2.txt

# If you do:
# ls +al > file.txt
# It won't create a file.txt, but will output the error

# This will use the file.txt for errors as well
ls +al 1>fileerr.txt 2>&1
# Same as:
# ls +al >& file.txt
