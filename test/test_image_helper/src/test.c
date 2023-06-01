#include "unity.h"

#include "image_helper.h"
#include "mnist.h"

void test_pixel_at(void)
{
	// TEST x,y = 29,29
	TEST_ASSERT_EQUAL_INT_MESSAGE(-1, pixel_at(29, 29, test_image[0]), "pixel_at(29, 29, test_image[0])");

	// TEST x,y = 0,0
	TEST_ASSERT_EQUAL_FLOAT_MESSAGE(0.0, pixel_at(0, 0, test_image[0]), "pixel_at(1, 1, test_image[0])");
}

void test_set_label(void)
{
	// Print label of first image of test
	// printf("Label %d ", test_label[0]);

	// Create image
	struct immagine *image_testing = malloc(sizeof(struct immagine));
	image_testing->next = NULL;
	image_testing->label = test_label[0];
	memcpy(image_testing->matrice, test_image[0], sizeof(double) * 784);

	// TEST x,y = 29,29
	int new_label = 3;
	set_label(3, image_testing);
	TEST_ASSERT_EQUAL_INT_MESSAGE(image_testing->label, new_label, "new label error");

	free(image_testing);
}

void setUp(void)
{
	printf("\n\n");
	printf("LOAD MNIST\n");
	//  Call to store mnist in array
	load_mnist_test();

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

	return UNITY_END();
}