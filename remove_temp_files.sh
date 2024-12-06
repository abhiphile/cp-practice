#!/bin/bash

# Find and remove all .out and .exe files
find . -type f \( -name "*.out" -or -name "*.exe" \) -exec rm -f {} \;

echo "All .out and .exe files have been removed."
