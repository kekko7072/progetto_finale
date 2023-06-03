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
	// Create image
	struct immagine *image_testing = malloc(sizeof(struct immagine));
	image_testing->next = NULL;
	image_testing->label = test_label[0];
	memcpy(image_testing->matrice, test_image[0], sizeof(double) * 784);

	// TEST x,y = 29,29
	int new_label = 3;
	set_label(3, image_testing);
	TEST_ASSERT_EQUAL_INT_MESSAGE(image_testing->label, new_label, "set label error");

	free(image_testing);
}

void test_get_label(void)
{
	// Create image
	struct immagine *image_testing = malloc(sizeof(struct immagine));
	image_testing->next = NULL;
	image_testing->label = test_label[0];
	memcpy(image_testing->matrice, test_image[0], sizeof(double) * 784);

	TEST_ASSERT_EQUAL_INT_MESSAGE(get_label(image_testing), image_testing->label, "get label error");

	free(image_testing);
}

void test_get_intensity(void)
{
	// Create image
	struct immagine *image_testing = malloc(sizeof(struct immagine));
	image_testing->next = NULL;
	image_testing->label = test_label[0];
	memcpy(image_testing->matrice, test_image[0], sizeof(double) * 784);

	int intensity_value = 864;
	TEST_ASSERT_EQUAL_INT_MESSAGE(get_intensity(image_testing), intensity_value, "get label error");

	free(image_testing);
}

void test_print(void)
{
	// Create image
	struct immagine *image_testing = malloc(sizeof(struct immagine));
	image_testing->next = NULL;
	image_testing->label = test_label[0];
	memcpy(image_testing->matrice, test_image[0], sizeof(double) * 784);

	print(image_testing);
	// TODO FAST FAILED BECAUSE OF PRINT
	TEST_ASSERT_EQUAL_INT_MESSAGE(0, 1, "print error");

	free(image_testing);
}

void test_compute_distance(void)
{
	// Create image 1
	struct immagine *image_testing1 = malloc(sizeof(struct immagine));
	image_testing1->next = NULL;
	image_testing1->label = test_label[0];
	memcpy(image_testing1->matrice, test_image[0], sizeof(double) * 784);

	// Create image 2
	struct immagine *image_testing2 = malloc(sizeof(struct immagine));
	image_testing2->next = NULL;
	image_testing2->label = test_label[1];
	memcpy(image_testing2->matrice, test_image[1], sizeof(double) * 784);

	long int distance = compute_distance(image_testing1, image_testing2);

	TEST_ASSERT_EQUAL_INT_MESSAGE(distance, 5364, "compute_distance error");

	free(image_testing1);
	free(image_testing2);
}

void test_compate_intensity(void)
{
	/// TODO COMPARE INTESITY
}

void test_compare_image(void)
{
	// Create image 1
	struct immagine *image_testing1 = malloc(sizeof(struct immagine));
	image_testing1->next = NULL;
	image_testing1->label = test_label[0];
	memcpy(image_testing1->matrice, test_image[0], sizeof(double) * 784);

	// Create image 2
	struct immagine *image_testing2 = malloc(sizeof(struct immagine));
	image_testing2->next = NULL;
	image_testing2->label = test_label[1];
	memcpy(image_testing2->matrice, test_image[1], sizeof(double) * 784);

	char *confronto_immagini = compare_image(&image_testing1, &image_testing2);

	TEST_ASSERT_EQUAL_STRING_MESSAGE("falso", confronto_immagini, "compare_image error");

	free(confronto_immagini);
	free(image_testing1);
	free(image_testing2);
}