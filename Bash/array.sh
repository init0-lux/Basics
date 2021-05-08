#! /bin/bash

cars=('BMW' 'Toyota' 'Honda')

unset cars[1]
cars[1]="Mercedes"

# @ brings out all the elements
echo "${cars[@]}"

echo "${cars[0]}"
echo "${cars[1]}"

# This shows the indexes present
echo "${!cars[@]}"

# This shows the number of values present
echo "${#cars[@]}"
