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
		image_char2double(i, train_image_char, matrix);
		
		immagine = inserimento_ordinato (immagine, labels[i], matrix);
	}
	return immagine;
}



struct immagine *inserimento_ordinato (struct immagine *lista, int label, double matrix [784])
{
    struct immagine *prec, *curr, *new_node;

    prec = NULL;
    curr = lista;

    //F1: Allocazione dinamica
    new_node = malloc (sizeof (struct immagine));
    assert (new_node != NULL);

    set_label (label, new_node);
	for (int y = 0; y < 28; y++)
		{
			for (int j = 0; j < 28; j++)
			{
				new_node->matrice[(y * 28 + j)] = matrix[(y * 28 + j)];
			}
		}
	new_node->intensity = get_intensity(new_node);

	//F2: Ricerca luogo inserimento
	while (curr != NULL && new_node->intensity > curr->intensity)
    {
        prec = curr;
        curr = curr->next;
    }

    //F3: Aggiornamento collegamenti
    if (prec == NULL)
    {
        new_node->next = lista;
        lista = new_node;
        return lista;
    }
    else
    {
        prec->next = new_node;
        new_node->next = curr;
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