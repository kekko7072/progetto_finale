// TODO implement function 'classify' (5.1 th point of data sheet)
#include <stdlib.h>
#include <stdio.h>
#include "image_helper.h"
#include "mnist.h"


struct immagine *rimuovi (struct immagine *ultimaimmagine){
	struct immagine *precedente;
	
	precedente = NULL;
	precedente->next = ultimaimmagine->next;
	free(ultimaimmagine);
	return (precedente);
}




int main (void){
	
	
	
	
	
	
	
	//alla fine del programma effettuo la free di tutti i 60000 dati salvati e della immagine di test
	
	for(int i = 0; i < 60000; i++) {
		immagine = rimuovi(&immagine);
	}
	immaginetest = rimuovi(&immagine);
}