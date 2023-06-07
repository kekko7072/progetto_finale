/*
--------------------------------------------------
INSTRUCTIOSN TO COMPILE AND RUN TEST:

+ TO COMPILE TEST USE:
	cd build && cmake .. && cd test && make classify_lib_test

+ TO RUN TEST USE:
	./test_classify/classify_lib_test
--------------------------------------------------
*/
#include "unity.h"

#include "classify.h"
#include "image_helper.h"

void test_classify_single_list(void)
{
	// Create a sample image for testing
	struct immagine image;

	// Create a sample list of images
	struct immagine list_images[1];

	// Initialize the list_images array with some test data
	list_images[0].intensity = 0;
	list_images[0].label = 0;
	list_images[0].next = NULL;

	// Create a corresponding image to be filled by the classify function
	struct immagine corresponding_image;

	// Call the classify function
	int result = classify(&image, list_images, &corresponding_image);

	// Assert the expected result
	TEST_ASSERT_EQUAL_INT(0, result);
}

int main(void)
{
	UNITY_BEGIN(); // Initialize the Unity testing framework

	// Run the tests
	RUN_TEST(test_classify_single_list);

	UNITY_END(); // Finalize the Unity testing framework

	return 0;
}