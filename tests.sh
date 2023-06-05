#!/bin/bash

#chmod +x tests.sh

# Prompt the user to choose a test
echo "Please choose a test to perform:"
echo "1. Test classify"
echo "2. Test image_helper"
echo "3. Test mnist"
echo "4. Test train"
echo "5. Exit"

# Read user input
read -p "Enter your choice (1-5): " choice

# Enter in build and run cmake
cd build && cmake .. && 

# Execute the corresponding test based on the user's choice
case $choice in
    1)
        echo "Running Test classify..."
        make classify_lib_test && cd test 
        chmod +x ./test_classify/classify_lib_test
       ./test_classify/classify_lib_test
        ;;
    2)
        echo "Running Test image_helper..."
        make image_helper_lib_test && cd test 
        chmod +x ./test_image_helper/image_helper_lib_test
        ./test_image_helper/image_helper_lib_test
        ;;
    3)
        echo "Running Test mnist..."
        make mnist_lib_test && cd test 
        chmod +x ./test_mnist/mnist_test
        ./test_image_helper/image_helper_lib_test
        ;;
    4)
        echo "Running Test train..."
        make train_lib_test && cd test 
        chmod +x ./test_train/train_test
        ./test_train/train_lib_test
        ;;
    5)
        echo "Exiting..."
        exit 0
        ;;
    *)
        echo "Invalid choice. Please enter a number between 1 and 5."
        ;;
esac
