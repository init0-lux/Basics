#! /usr/bin/python3
import sys

i = 0

for i in sys.argv[1:]:
    print(i);
    print( type(i) )

sum = 0

for i in sys.argv[1:]:
    sum += int(i);

print(sum);
