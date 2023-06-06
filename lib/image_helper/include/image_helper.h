// image_helper.h
#ifndef image_helper_h
#define image_helper_h


  /*
 * This is the struct of image:
 *
 * matrice: [double[]] is the matrix of the image
 * label: [int] is the label of the image
 * intensity: [long int] is the intensity of the image
 * next: [struct immagine] is the pointer to the next image
 */
struct immagine {
	double matrice [784];
	int label;
	long int intensity;
	struct immagine *next;
};


/*
 * This function return the value of the pixel at the position (x,y) of the image.
 */
int pixel_at(int x, int y, const struct immagine *image);

/*
 * This function set the value of the label with the value x.
 */
void set_label(int x, struct immagine *image);

/*
 * This function return the value of the label of the image.
 */
int get_label(struct immagine *image);

/*
 * This function return the value of the intensity of the image.
 */
long int get_intensity (const struct immagine *image);

/*
 * This function print the image.
 */
void print (const struct immagine *image);

/*
 * This function return the distance between two images.
 */
long int compute_distance (const struct immagine *image1, const struct immagine *image2);

/*
 * This function return the image with the minimum distance from the image1.
 */
char *compare_image (const struct immagine *image1, const struct immagine *image2);

/*
 * This function return 1 if the intensity of the image 1 is bigger than intensity of image2.
 */
int compate_intensity (const struct immagine *image1, const struct immagine *image2);


#endif
