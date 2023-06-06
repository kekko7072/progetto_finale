#!/bin/bash

#chmod +x tests.sh

# Prompt the user to choose a test
echo "Please choose a release to build:"
echo "1. 5.1"
echo "2. 5.2"
echo "3. 5.1 - Optimized 1"
echo "4. 5.2 - Optimized 1"
echo "5. Exit"

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
        chmod +x ./app 
        ./app
        ;;
    2)
        echo "Compiling 5.2..."
        make app_2 && cd app
        echo "\nStarting 5.2 ...\n"
        sleep 3s
        chmod +x ./app_2 
        ./app_2
        ;;
    3)
        cd .. && mkdir release
        echo "Compiling 5.1 optimized 1..."
        gcc -Wall -O1 -o release/app_5_1_opt_1 app/src/main.c \
            -Ilib/image_helper/include \
            -Ilib/classify/include \
            -Ilib/mnist/include \
            -Ilib/train/include \
            lib/image_helper/src/image_helper.c \
            lib/mnist/src/mnist.c \
            lib/classify/src/classify.c \
            lib/train/src/train.c 
        echo "This code has been compiled but data sets are not reachable..."
        ;;
    4)
        cd .. && mkdir release
        echo "Compiling 5.1 optimized 2..."
        gcc -Wall -o release/app_5_2_opt_2 app/src/main_2.c \
            -Ilib/image_helper/include \
            -Ilib/classify/include \
            -Ilib/mnist/include \
            -Ilib/train/include \
            lib/image_helper/src/image_helper.c \
            lib/mnist/src/mnist.c \
            lib/classify2/src/classify2.c \
            lib/train2/src/train2.c 
        echo "To start: "
        echo " ./release/app_5_2_opt_2 "
        ;;
    5)
        echo "Exiting..."
        exit 0
        ;;
    *)
        echo "Invalid choice. Please enter a number between 1 and 5."
        ;;
esac