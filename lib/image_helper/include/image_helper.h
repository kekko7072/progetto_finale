// image_helper.h
#ifndef image_helper_h
#define image_helper_h

struct immagine {
	int matrice [28][28];
	int label;
	long int intensity;
};
int pixel_at(int x, int y, const struct immagine *image);
void set_label(int x, struct immagine *image);
int get_label(struct immagine *image);
long int get_intensity (const struct immagine *image);
void print (const struct immagine *image);
long int compute_distance (const struct immagine *image1, const struct immagine *image2);
char *compare_image (const struct immagine *image1, const struct immagine *image2);
int compate_intensity (const struct immagine *image1, const struct immagine *image2);
#endif
