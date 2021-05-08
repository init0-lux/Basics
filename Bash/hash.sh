#!/bin/bash

hash() {
  password="o"
  hash_value=$(echo -n "$password" | sha256sum)
  base64_hash=$(echo -n "$hash_value" | base64)
  echo "${base64_hash:0:6}"
}

# Usage
password="o"
result=$(hash "$password")
echo "Hashed password: $result"

