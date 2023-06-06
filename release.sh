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
        echo "Running 5.1 build..."
        gcc -Wall -o release/main_5_1 app/src/main.c \
            -Ilib/image_helper/include \
            -Ilib/classify/include \
            -Ilib/mnist/include \
            -Ilib/train/include \
            lib/image_helper/src/image_helper.c \
            lib/mnist/src/mnist.c \
            lib/classify/src/classify.c \
            lib/train/src/train.c 
        ;;
    1)
        echo "Running 5.1 build optimized 1..."
        gcc -Wall -O1 -o release/main_5_1_opt_1 app/src/main.c \
            -Ilib/image_helper/include \
            -Ilib/classify/include \
            -Ilib/mnist/include \
            -Ilib/train/include \
            lib/image_helper/src/image_helper.c \
            lib/mnist/src/mnist.c \
            lib/classify/src/classify.c \
            lib/train/src/train.c 
        ;;
    2)
        echo "Running 5.1 build optimized 2..."
        gcc -Wall -O2 -o release/main_5_1_opt_2 app/src/main.c \
            -Ilib/image_helper/include \
            -Ilib/classify/include \
            -Ilib/mnist/include \
            -Ilib/train/include \
            lib/image_helper/src/image_helper.c \
            lib/mnist/src/mnist.c \
            lib/classify/src/classify.c \
            lib/train/src/train.c
        ;;
    3)
        echo "Running 5.2 build..."
        gcc -Wall -o release/main_5_2 app/src/main.c \
            -Ilib/image_helper/include \
            -Ilib/classify/include \
            -Ilib/mnist/include \
            -Ilib/train/include \
            lib/image_helper/src/image_helper.c \
            lib/mnist/src/mnist.c \
            lib/classify_2/src/classify.c \
            lib/train_2/src/train.c 
        ;;
    4)
        echo "Running 5.2 build optimized 1..."
        gcc -Wall -o release/main_5_2_opt_1 app/src/main.c \
            -Ilib/image_helper/include \
            -Ilib/classify/include \
            -Ilib/mnist/include \
            -Ilib/train/include \
            lib/image_helper/src/image_helper.c \
            lib/mnist/src/mnist.c \
            lib/classify_2/src/classify.c \
            lib/train_2/src/train.c 
        ;;
    5)
        echo "Running 5.2 build optimized 2..."
        gcc -Wall -o release/main_5_2_opt_2 app/src/main.c \
            -Ilib/image_helper/include \
            -Ilib/classify/include \
            -Ilib/mnist/include \
            -Ilib/train/include \
            lib/image_helper/src/image_helper.c \
            lib/mnist/src/mnist.c \
            lib/classify_2/src/classify.c \
            lib/train_2/src/train.c 
        ;;
    6)
        echo "Exiting..."
        exit 0
        ;;
    *)
        echo "Invalid choice. Please enter a number between 0 and 6."
        ;;
esac