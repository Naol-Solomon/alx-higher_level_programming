#!/bin/bash

# Check if a URL argument is provided
if [ $# -ne 1 ]; then
  echo "Usage: $0 <URL>"
  exit 1
fi

# URL from the argument
url="$1"

# Send a silent request with -s and get the response size with -I to only fetch headers
response=$(curl -s -I "$url" | grep -iE '^Content-Length: ' | awk '{print $2}')

# Check if size is found
if [ -z "$response" ]; then
  echo "Content-Length header not found in response."
  exit 1
fi

# Print the size in bytes
echo "$response"
