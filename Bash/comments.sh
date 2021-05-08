#! /bin/bash

# This is a single line comment

: ' 
This is a multi line comment
This is a multi line comment
This is a multi line comment
This is a multi line comment
This is a multi line comment
This is a multi line comment
This is a multi line comment
This is a multi line comment
This is a multi line comment
This is a multi line comment
This is a multi line comment'

# Basically like a variable name

cat << heredoc
this is some text
This is some other text
# This is supposed to be commented text
heredoc
