#include "unity.h"
#include "mnist.h"

void test_example(void)
{
	load_mnist();

	// print pixels of first data in test dataset
	int i;
	for (i = 0; i < 784; i++)
	{
		printf("%1.1f ", test_image[0][i]);
		if ((i + 1) % 28 == 0)
			putchar('\n');
	}

	// print first label in test dataset
	printf("label: %d\n", test_label[0]);

	// show all pixels and labels in test dataset
	print_mnist_pixel(test_image, 2); // NUM_TEST
	print_mnist_label(test_label, 2); // NUM_TEST
}
