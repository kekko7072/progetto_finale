#!/bin/bash

#chmod +x tests.sh

# Prompt the user to choose a test
echo "Please choose a release to build:"
echo "0. 5.1"
echo "1. 5.1 - Optimized 1"
echo "2. 5.1 - Optimized 2"
echo "3. 5.2"
echo "4. 5.2 - Optimized 1"
echo "5. 5.2 - Optimized 1"
echo "6. Exit"

# Read user input
read -p "Enter your choice (1-3): " choice

# Delete and create build directory
rm -rf build && mkdir build

# Enter in build and run cmake
cd build && cmake ..

# Execute the corresponding test based on the user's choice
case $choice in
    0)
        echo "Running 5.1 build..."
        ;;
    1)
        echo "Running 5.1 build optimized 1..."
        gcc -Wall -O1 
        ;;
    2)
        echo "Running 5.1 build optimized 2..."
        gcc -Wall -O1 
        ;;
    3)
        echo "Running 5.2 build..."
        ;;
    4)
        echo "Running 5.2 build optimized 1..."
        ;;
    5)
        echo "Running 5.2 build optimized 2..."
        ;;
    6)
        echo "Exiting..."
        exit 0
        ;;
    *)
        echo "Invalid choice. Please enter a number between 0 and 6."
        ;;
esac