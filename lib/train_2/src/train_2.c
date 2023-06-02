#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "train_2.h"
#include "image_helper.h"

struct immagine *inizio = NULL;


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

