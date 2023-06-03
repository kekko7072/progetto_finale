#include <stdlib.h>
#include <stdio.h>
#include "image_helper.h"
#include <assert.h>
#include "string.h"

double pixel_at(int x, int y, const struct immagine *image)
{
	if (x <= 28 && y <= 28)
	{
		return (image->matrice[(x - 1 + (y - 1) * 28)]);
	}
	return (-1);
}

void set_label(int x, struct immagine *image)
{
	image->label = x;
}

int get_label(struct immagine *image)
{
	if (image->label > 9 || image->label < 0)
	{
		return (-1);
	}
	return (image->label);
}

long int get_intensity(const struct immagine *image)
{
	long int intensity = 0;
	for (int i = 0; i <= 783; i++)
	{
		// printf("%f\t", image->matrice[i]);
		intensity += image->matrice[i];
	}
	return intensity;
}

/*
TODO FIXARE PRINT CHE NON RITORNA VALORI CORRETTI */
void print(const struct immagine *image)
{
	int i, j;
	int valore;
	for (i = 0; i <= 27; i++)
	{
		for (j = 0; j <= 27; j++)
		{
			valore = image->matrice[((i * 28) + j)];

			// TODO CONTROLLARE QUESTO VALORE

			if (valore <= 64)
				printf(" ");
			if (valore <= 128 && valore > 65)
				printf("-");
			if (valore <= 192 && valore > 129)
				printf("=");
			if (valore >= 193)
				printf("X");
			printf(" ");
		}
		printf("\n");
	}
}

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
}

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
} // To-do: Compara l'intensità di due immagini, restituisce 1 se l'intensità dell'immagine 1 è maggiore dell'immagine 2, restituisce 2 in casoo contrario

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
}