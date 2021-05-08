#! /bin/bash

# This exports the variable MESSAGE to any programs associated with this shell
# i.e, pipes2.sh
# In pipes2, We can access this variable
MESSAGE="This is the message"
export MESSAGE
./pipes2.sh
