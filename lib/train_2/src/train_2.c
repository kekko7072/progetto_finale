#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "train_2.h"
#include "image_helper.h"
#include "mnist.h"
#include "string.h"

struct immagine *train_ordinato(struct immagine *immagine)
{

	struct immagine *nuovo_elemento;
	int labels[60000];
	double matrix[784];

	load_mnist();
	label_char2int(60000, train_label_char, labels); // associ alla matrice label i label delle immagini

	for (int i = 0; i < 60000; i++)
	{
		nuovo_elemento = malloc(sizeof(struct immagine));
		if (nuovo_elemento == NULL)
		{
			printf("errore nell'allocazione di memoria \n");
			exit(-1);
		} // ok
		set_label(labels[i], nuovo_elemento);
		image_char2double(i, train_image_char, matrix);
		for (int y = 0; y < 28; y++)
		{
			for (int j = 0; j < 28; j++)
			{
				nuovo_elemento->matrice[(y * 28 + j)] = matrix[(y * 28 + j)];
			}
		}
		nuovo_elemento->intensity = get_intensity(nuovo_elemento);
		nuovo_elemento->next = immagine;
		immagine = nuovo_elemento;

		immagine = ordina_lista (immagine, i);
	}
	return immagine;
}


struct immagine *ordina_lista (struct immagine *lista, int i)
{
    struct immagine *immagine1;
    struct immagine *immagine2;
    int intensity, label;
	double matrix [784];

    if (i == 0){
        return lista;
    }

    if (i == 1){
        immagine1 = lista;
        immagine2 = immagine1->next;

        if (immagine1->intensity > immagine2->intensity){
            // Set variabili temporanee
					intensity = immagine1->intensity;
					for (int y = 0; y < 28; y++)
					{
						for (int j = 0; j < 28; j++)
						{
							matrix[(y * 28 + j)] = immagine1->matrice[(y * 28 + j)];
						}
					}
					label = immagine1->label;

					// Set immagine1
					immagine1->intensity = immagine2->intensity;
					for (int y = 0; y < 28; y++)
					{
						for (int j = 0; j < 28; j++)
						{
							immagine1->matrice[(y * 28 + j)] = immagine2->matrice[(y * 28 + j)];
						}
					}
					immagine1->label = immagine2->label;

					// Set immagine2
					immagine2->intensity = intensity;
					for (int y = 0; y < 28; y++)
					{
						for (int j = 0; j < 28; j++)
						{
							immagine2->matrice[(y * 28 + j)] = matrix[(y * 28 + j)];
						}
					}
					immagine2->label = label;
        }

        return lista; 
    }

    if (i >= 3){
        for (immagine1 = lista; immagine1 != NULL; immagine1 = immagine1->next){
            for (immagine2 = immagine1->next; immagine2 != NULL; immagine2 = immagine2->next){
                if (immagine1->intensity > immagine2->intensity){
                    
					// Set variabili temporanee
					intensity = immagine1->intensity;
					for (int y = 0; y < 28; y++)
					{
						for (int j = 0; j < 28; j++)
						{
							matrix[(y * 28 + j)] = immagine1->matrice[(y * 28 + j)];
						}
					}
					label = immagine1->label;

					// Set immagine1
					immagine1->intensity = immagine2->intensity;
					for (int y = 0; y < 28; y++)
					{
						for (int j = 0; j < 28; j++)
						{
							immagine1->matrice[(y * 28 + j)] = immagine2->matrice[(y * 28 + j)];
						}
					}
					immagine1->label = immagine2->label;

					// Set immagine2
					immagine2->intensity = intensity;
					for (int y = 0; y < 28; y++)
					{
						for (int j = 0; j < 28; j++)
						{
							immagine2->matrice[(y * 28 + j)] = matrix[(y * 28 + j)];
						}
					}
					immagine2->label = label;
                }
            }
        }
        return lista;
    }
}

void rimuovi(struct immagine *ultimaimmagine)
{
	struct immagine *attuale = NULL;

	while (ultimaimmagine != NULL)
	{
		attuale = ultimaimmagine;
		ultimaimmagine = ultimaimmagine->next;
		free(attuale);
	}
}