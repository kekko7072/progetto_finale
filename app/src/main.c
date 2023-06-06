#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "image_helper.h"
#include "mnist.h"
#include "train.h"
#include "classify.h"

// IL PROGRAMMA SBAGLIA QUANDO VIENE DATA COME IMMAGINE DI TEST LA 2

int main(void)
{
    struct immagine imagetest;    // immagine da confrontare
    int matching_number;          // risultato atteso
    struct immagine *head = NULL; // testa lista concatenata  //matrice dove salvare il conttenuto dell'immagine test

    struct immagine *list = NULL;
    struct immagine immagine_simile;

    testchoice(&imagetest); // funzione per selezionare l'immagine da riconoscere
    
    print(&imagetest);  //stampo l'immagine di test
    
    list = train(head); // funzione per caricare su la list "list" le immagini da utilizzare come database
    

    matching_number = classify(&imagetest, list, &immagine_simile);

    printf("\nL'immagine rappresenta il numero %d\n", matching_number);

    rimuovi(list);

    return 0;
}
