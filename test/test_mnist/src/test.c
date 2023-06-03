/*
--------------------------------------------------
INSTRUCTIOSN TO COMPILE AND RUN TEST:

+ TO COMPILE TEST USE:
	cd build && cmake .. && cd test && make mnist_lib_test

+ TO RUN TEST USE:
	./test_mnist/mnist_lib_test
--------------------------------------------------
*/
#include "unity.h"

#include "mnist.h"
#include "test_functions.c"

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_example);

	return UNITY_END();
}