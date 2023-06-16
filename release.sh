#!/bin/bash

# Prompt the user to choose a test
echo "Please choose a release to build:"
echo "1. 5.1"
echo "2. 5.2"
echo "3. Exit"

# Read user input
read -p "Enter your choice (1-5): " choice

# Delete and create build directory and run cmake
rm -rf build && mkdir build && cd build && cmake ..

# Execute the corresponding test based on the user's choice
case $choice in
    1)
        echo "Compiling 5.1 ..."
        make app && cd app
        echo "\nStarting 5.1 ...\n"
        sleep 3s
        ./app
        ;;
    2)
        echo "Compiling 5.2..."
        make app_2 && cd app
        echo "\nStarting 5.2 ...\n"
        sleep 3s
        ./app_2
        ;;
    3)  
        echo "Exiting..."
        exit 0
        ;;
    *)
        echo "Invalid choice. Please enter a number between 1 and 5."
        ;;
esac