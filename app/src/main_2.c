#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "string.h"
#include "image_helper.h"
#include "mnist.h"
#include "classify2.h"
#include "train2.h"

int main(void)
{

    // numero immagine contenuta nel database test

    struct immagine *imagetest;   // immagine da confrontare
    int matching_number;          // risultato atteso
    struct immagine *head = NULL; // testa lista concatenata  //matrice dove salvare il conttenuto dell'immagine test

    struct immagine *list;
    struct immagine *testa;
    struct immagine *immagine_simile;

    list = train_ordinato(head);
    head = list;
    testa = head;
    for (int i = 0; i < 30; i++)
    {
        printf("%ld", testa->intensity);
        printf("\n");
        testa = testa->next;
    }

    imagetest = scelta();

    print(imagetest);
    printf("\nQuesto è il label che vorrei ottenere: %d\n", imagetest->label);
    printf("Questa è l'intensit test: %ld\n", imagetest->intensity);

    immagine_simile = classificadue(imagetest, list);

    print(immagine_simile);
    printf("\nquesto è il label dell'immagine simile %d\n", immagine_simile->label);
    printf("Questa è l'intensit simile: %ld\n", immagine_simile->intensity);
    rimuovi2(head);
    return 0;
}