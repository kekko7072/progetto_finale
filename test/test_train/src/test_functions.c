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

void test_example(void)
{

	struct immagine *head = NULL;
	struct immagine *testa = NULL;
	int label;
	double pixel;
	head = train(head);
	testa = head;
	pixel = pixel_at(10, 10, head);
	printf("pixel: %f \n", pixel);
	printf("intensit: %ld \n", head->intensity);
	label = get_label(head);
	printf("label:%d \n", label);
	print(head);
	for (int j = 0; j < 59999; j++)
		head = head->next;
	pixel = pixel_at(10, 10, head);
	printf("pixel: %f \n", pixel);
	printf("intensit: %ld \n", head->intensity);
	label = get_label(head);
	printf("label:%d \n", label);
	print(head);

	rimuovi(testa);
}
