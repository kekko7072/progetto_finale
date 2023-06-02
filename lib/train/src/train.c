#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "image_helper.h"
#include "train.h"
#include "mnist.h"



int train(struct immagine *head){

	struct immagine *nuovo_elemento = NULL;
	int labels[60000];
	load_mnist();
	label_char2int(60000, train_label_char, labels);
	
	for(int i = 0; i < 60000; i++){
		nuovo_elemento = malloc(sizeof(struct immagine));
		save_mnist_pgm(nuovo_elemento->matrice, i);
		set_label(labels[i], nuovo_elemento);
		nuovo_elemento->intensity = get_intensity(nuovo_elemento);
		nuovo_elemento->next = head;
		head = nuovo_elemento;
	}
	return(1);
}

struct immagine *rimuovi (struct immagine *ultimaimmagine){
	struct immagine *precedente;
	
	precedente = NULL;
	precedente->next = ultimaimmagine->next;
	free(ultimaimmagine);
	return (precedente);
}