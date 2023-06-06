#ifndef classify_h
#define classify_h

/*
 *  This functions is used to classify the images
 */
int classify(const struct immagine *image, struct immagine *list_images, struct immagine *corresponding_image);

/*
 *  This functions is used to test the classification
 */
void testchoice(struct immagine *testimage);

#endif
