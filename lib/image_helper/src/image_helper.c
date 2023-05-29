#include <stdlib.h>
#include <stdio.h>
#include "image_helper.h"


int pixel_at(int x, int y, const struct immagine *image)
{
	if (x <= 28 && y <= 28)
	{
		return (image->matrice[x-1][y-1]);
	}
		return (-1);
}  //questa funzione funziona
void set_label(int x, struct immagine *image)
{
	image->label = x;
}  //questa funzione funziona
int get_label(struct immagine *image)
{
	if (image->label > 9 || image->label < 0)
	{
		return (-1);
	}
	return (image->label);
} // pronta per il testing

long int get_intensity (const struct immagine *image)
{
	long int intensit = 0;
	int i, j;
	for (i = 0; i <= 27; i++) 
	{
		for (j = 0; j <= 27; j++)
		{
			intensit += image->matrice[i][j];
		}
	}
	return (intensit);
}  // funzione pronta per il testing

void print (const struct immagine *image)
{
	int i, j;
	int valore;
	for (i = 0; i <= 27; i++) 
	{
		for (j = 0; j <= 27; j++)
		{
			valore = image->matrice[i][j];
			if (valore <= 64)
				printf ("  ");
			if (valore <= 128 && valore > 65)
				printf ("--");
			if (valore <= 192 && valore > 129)
				printf ("==");
			if (valore >= 193)
				printf ("XX");
		    printf("  ");
		}
		printf("\n");
	}
}  // testabile
long int compute_distance (const struct immagine *image1, const struct immagine *image2)
{
	long int distanza = 0;
	int pixel1, pixel2, differenza;
	int i,j;
	for (i = 0; i <= 27; i++) 
	{
		for (j = 0; j <= 27; j++)
		{
			pixel1 = image1->matrice[i][j];
			pixel2 = image2->matrice[i][j];	
			differenza = pixel1-pixel2;
			distanza = distanza +(differenza*differenza);
		}
	}
	return(distanza);
} //testabile











/*
int main()
{

	struct immagine picture, picture2;
	picture.matrice[11][11] = 26;
	int valore = pixel_at(33, 33, &picture);
	printf ("%d \n", valore);
	set_label (4, &picture);
	printf("%d \n", picture.label);
	valore = get_label (&picture);
	printf ("%d \n", valore);
	int i,j;
	for (i = 0; i <= 27; i++) 
	{ 
        //k += 10;
		for (j = 0; j <= 27; j++)
		{
			picture.matrice[i][j] = 3;
		}
	}
	for (i = 0; i <= 27; i++) 
	{ 
        //k += 10;
		for (j = 0; j <= 27; j++)
		{
			picture2.matrice[i][j] = 2;
		}
	}
	long int intensit = get_intensity(&picture);
	printf ("%ld \n", intensit);
    print(&picture);
	long int distanza = compute_distance(&picture, &picture2);
	printf ("%ld \n", distanza);
}
*/
