#!/bin/bash

# Check if the user has provided a URL
if [ -z "$1" ]; then
    echo "Usage: $0 <URL>"
    exit 1
fi

# Send a request to the URL using curl and store the response body in a temporary file
response=$(curl -s -o tmp_body_size_response "$1")

# Check if curl was successful
if [ $? -ne 0 ]; then
    echo "Error: Unable to fetch URL"
    exit 1
fi

# Calculate the size of the response body in bytes
size=$(stat -c %s tmp_body_size_response)

# Display the size of the response body
echo "$size"

# Remove the temporary file
rm tmp_body_size_response
