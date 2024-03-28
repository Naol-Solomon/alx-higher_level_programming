#!/bin/bash

# Check if the user has provided correct request
curl -sI "$1" | grep -i Content-Length | awk '{print $2}'
