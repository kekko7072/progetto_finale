/*
--------------------------------------------------
INSTRUCTIOSN TO COMPILE AND RUN TEST:

+ TO COMPILE TEST USE:
	cd build && cmake .. && cd test && make train_lib_test

+ TO RUN TEST USE:
	./test_train/train_lib_test
--------------------------------------------------
*/
#include "unity.h"
#include "train.h"
#include "image_helper.h"
#include "test_functions.c"

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_example);

	return UNITY_END();
}