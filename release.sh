#!/bin/bash

#chmod +x tests.sh

# Prompt the user to choose a test
echo "Please choose a release to build:"
echo "1. 5.1"
echo "2. 5.2"
echo "3. Exit"

# Read user input
read -p "Enter your choice (1-3): " choice

# Delete and create build directory
rm -rf build && mkdir build

# Enter in build and run cmake
cd build && cmake .. && 

# Execute the corresponding test based on the user's choice
case $choice in
    1)
        echo "Running 5.1 build..."
        ;;
    2)
        echo "Running 5.2 build..."
        ;;
    3)
        echo "Exiting..."
        exit 0
        ;;
    *)
        echo "Invalid choice. Please enter a number between 1 and 3."
        ;;
esac