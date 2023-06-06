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
rm -rf release && mkdir release

# Execute the corresponding test based on the user's choice
case $choice in
    0)
        echo "Compiling 5.1..."
        gcc -Wall -o release/app_5_1 app/src/main.c \
            -Ilib/image_helper/include \
            -Ilib/classify/include \
            -Ilib/mnist/include \
            -Ilib/train/include \
            lib/image_helper/src/image_helper.c \
            lib/mnist/src/mnist.c \
            lib/classify/src/classify.c \
            lib/train/src/train.c 
        echo "To start: "
        echo " ./release/app_5_1 "
        ;;
    1)
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
        echo "To start: "
        echo " ./release/app_5_1_opt_1 "
        ;;
    2)
        echo "Compiling 5.1 optimized 2..."
        gcc -Wall -O2 -o release/app_5_1_opt_2 app/src/main.c \
            -Ilib/image_helper/include \
            -Ilib/classify/include \
            -Ilib/mnist/include \
            -Ilib/train/include \
            lib/image_helper/src/image_helper.c \
            lib/mnist/src/mnist.c \
            lib/classify/src/classify.c \
            lib/train/src/train.c
        echo "To start: "
        echo " ./release/app_5_1_opt_2 "
        ;;
    3)
        echo "Compiling 5.2..."
        gcc -Wall -o release/app_5_2 app/src/main.c \
            -Ilib/image_helper/include \
            -Ilib/classify/include \
            -Ilib/mnist/include \
            -Ilib/train/include \
            lib/image_helper/src/image_helper.c \
            lib/mnist/src/mnist.c \
            lib/classify2/src/classify2.c \
            lib/train2/src/train2.c 
        echo "To start: "
        echo " ./release/app_5_2 "
        ;;
    4)
        echo "Compiling 5.2 optimized 1..."
        gcc -Wall -o release/app_5_2_opt_1 app/src/main.c \
            -Ilib/image_helper/include \
            -Ilib/classify/include \
            -Ilib/mnist/include \
            -Ilib/train/include \
            lib/image_helper/src/image_helper.c \
            lib/mnist/src/mnist.c \
            lib/classify2/src/classify2.c \
            lib/train2/src/train2.c 
        echo "To start: "
        echo " ./release/app_5_2_opt_1 "
        ;;
    5)
        echo "Compiling 5.1 optimized 2..."
        gcc -Wall -o release/app_5_2_opt_2 app/src/main.c \
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
    6)
        echo "Exiting..."
        exit 0
        ;;
    *)
        echo "Invalid choice. Please enter a number between 0 and 6."
        ;;
esac