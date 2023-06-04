#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "train_2.h"
#include "image_helper.h"
#include "mnist.h"

struct immagine *train_ordinato (struct immagine *head)
{

    struct immagine *nuovo_elemento,*prev, *cur;
    int labels [60000];
    double matrix [784];

    load_mnist();
    label_char2int (60000, train_label_char, labels); //associ alla matrice label i label delle immagini

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
		nuovo_elemento->next = head;
		head = nuovo_elemento;
	}
    return nuovo_elemento;
}

struct immagine *ordina_lista (struct immagine *immagine)
{
    struct immagine *cur, *prev, *head;

    struct immagine *head = NULL;

    for (cur = immagine, prev = NULL; cur != NULL; prev = cur, cur = cur->next)
    {
        if (prev->intensity > cur->intensity)
        {
            struct immagine *swap = cur;
            cur = prev;
            prev = swap;
        }
    }

    return head;
}



lista *ordina(lista *pointer)
{
	if (pointer && pointer->prox) {
		int k;

		do {
                        lista *punt = pointer;

			k = 0;
			while (punt->prox) {
				lista *punt1 = punt;

				punt = punt->prox;
				if ((punt1->elem) > (punt->elem)) {
					int tmp = punt1->elem;

					punt1->elem = punt->elem;
					punt->elem = tmp;
					k = 1;
				}
			}
		} while (k != 0);
	}

	return pointer;
}

/*struct immagine *inizio = NULL;


void insert (const struct immagine *immagine, const struct immagine *posizione){
    struct immagine *cur, *prev;

    for (cur = inizio, prev = NULL;
         cur != NULL && immagine->intensity > cur->intensity;
         prev = cur, cur = cur->next);
    
    if (cur != NULL && immagine->intensity == cur->intensity){
        printf ("Immagine già presente. \n");
        return;
    }    
} //Per test: funzione a cui passo immagine da inserire, posizione ricavata da search_immagine.
  //obbiettivo: inserire nuova immagine in quel punto


struct immagine *search_immagine(struct immagine *image, int n){

    struct immagine *p;

    for (p = image; p != NULL; p = p->next)
        if (p->intensity < n && (p+1)->intensity > n)
        return inizio;
    return NULL;
} //Per test: funzione a cui passo un puntatore all'inizio della lista e con n = intensità immagine che voglio inserire,
  //mi ritorna un puntatore al luogo dove inserire la nuova immagine. 
  //Se non trova nulla restituisce NULL
*/
