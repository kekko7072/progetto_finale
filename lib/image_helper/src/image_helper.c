#include <stdlib.h>
#include <stdio.h>
#include "image_helper.h"
#include <assert.h>
#include "string.h"

int pixel_at(int x, int y, const struct immagine *image)
{
	if (x <= 28 && y <= 28)
	{
		return (image->matrice[(x - 1 + (y - 1) * 28)]);
	}
	return (-1);
} // questa funzione funziona
void set_label(int x, struct immagine *image)
{
	image->label = x;
} // questa funzione funziona
int get_label(struct immagine *image)
{
	if (image->label > 9 || image->label < 0)
	{
		return (-1);
	}
	return (image->label);
} // pronta per il testing

long int get_intensity(const struct immagine *image)
{
	long int intensit = 0;
	for (int i = 0; i <= 783; i++)
	{
		intensit += image->matrice[i];
	}
	return (intensit);
} // funzione pronta per il testing

void print(const struct immagine *image)
{
	int i, j;
	int valore;
	for (i = 0; i <= 27; i++)
	{
		for (j = 0; j <= 27; j++)
		{
			valore = image->matrice[((i * 28) + j)];
			if (valore <= 64)
				printf("  ");
			if (valore <= 128 && valore > 65)
				printf("--");
			if (valore <= 192 && valore > 129)
				printf("==");
			if (valore >= 193)
				printf("XX");
			printf("  ");
		}
		printf("\n");
	}
} // testabile
long int compute_distance(const struct immagine *image1, const struct immagine *image2)
{
	long int distanza = 0;
	int pixel1, pixel2, differenza;
	int i, j;
	for (i = 0; i <= 27; i++)
	{
		for (j = 0; j <= 27; j++)
		{
			pixel1 = image1->matrice[((i * 28) + j)];
			pixel2 = image2->matrice[((i * 28) + j)];
			differenza = pixel1 - pixel2;
			distanza = distanza + (differenza * differenza);
		}
	}
	return (distanza);
} // testabile

int compate_intensity(const struct immagine *image1, const struct immagine *image2)
{
	long int x, y;

	x = get_intensity(image1);
	y = get_intensity(image2);

	assert((x != 0) & (y != 0));

	if (x > y)
		return 1;
	else
		return 2;
}

char *compare_image(const struct immagine *image1, const struct immagine *image2)
{
	int pixel1, pixel2;
	int i, j, y;
	char vero[5] = "vero";
	char falso[6] = "falso";

	char *risultato = malloc(sizeof(char) * 6);
	if (risultato == NULL)
	{
		printf("Errore nella malloc \n");
		exit(1);
	}

	for (i = 0; i <= 27; i++)
	{
		for (j = 0; j <= 27; j++)
		{
			pixel1 = image1->matrice[((i * 28) + j)];
			pixel2 = image2->matrice[((i * 28) + j)];

			if (pixel1 == pixel2)
			{
				strcpy(risultato, vero);
				y = 0;
			}
			else
			{
				strcpy(risultato, falso);
				y = 1;
			}
		}
		if (y == 1)
			break;
	}
	return risultato;
} // Quando la si usa ricordare di fare il free

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

	int confronto_intensità = compate_intensity (&picture, &picture2);
	printf ("confronto intensità = %d \n", confronto_intensità);

	char *confronto_immagini = compare_image (&picture, &picture2);
	printf ("Esito confronto: %s\n", confronto_immagini);

	free (confronto_immagini);
}
*/
