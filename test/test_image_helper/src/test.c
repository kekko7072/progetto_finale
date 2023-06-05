/*
--------------------------------------------------
INSTRUCTIOSN TO COMPILE AND RUN TEST:

+ TO COMPILE TEST USE:
	cd build && cmake .. && cd test && make image_helper_lib_test

+ TO RUN TEST USE:
	./test_image_helper/image_helper_lib_test
--------------------------------------------------
*/
#include "unity.h"

#include "image_helper.h"
#include "mnist.h"
#include "test_functions.c"

void setUp(void)
{
	printf("\n\n");
	printf("Run this test from dir \"progetto_finale/build/test\"\n");
	// Call to store mnist in array
	load_mnist();

	// Print first image of test
	//  print pixels of first data in test dataset
	int i;
	for (i = 0; i < 784; i++)
	{
		printf("%1.1f ", test_image[0][i]);
		if ((i + 1) % 28 == 0)
			putchar('\n');
	}
	printf("\n\n");
}

int main(void)
{
	UNITY_BEGIN();

	RUN_TEST(test_pixel_at);
	RUN_TEST(test_set_label);
	RUN_TEST(test_get_label);
	RUN_TEST(test_get_intensity);
	RUN_TEST(test_print);
	RUN_TEST(test_compute_distance);
	RUN_TEST(test_compare_intensity);
	RUN_TEST(test_compare_image);

	return UNITY_END();
}