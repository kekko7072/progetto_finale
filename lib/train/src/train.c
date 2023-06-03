
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "image_helper.h"
#include "train.h"
#include "mnist.h"
//TODO TESTING


struct immagine *train(struct immagine *head){

	struct immagine *nuovo_elemento; 
	int labels[60000];
	double matrix [784];
	load_mnist();  
	label_char2int(60000, train_label_char, labels);
	//image_char2double(1000, train_image_char, matrix);
	
	for(int i = 0; i < 60000; i++){
		nuovo_elemento = malloc(sizeof(struct immagine));
		if (nuovo_elemento == NULL){
			printf("errore nell'allocazione di memoria \n");
			exit(-1);
		}  //ok
		set_label(labels[i], nuovo_elemento);
		image_char2double(i, train_image_char, matrix);
		for(int y = 0; y < 28; y++){
			for(int j = 0; j < 28; j++){
				nuovo_elemento->matrice[(y*28+j)] = matrix [(y*28+j)];
			}
		}
		nuovo_elemento->intensity = get_intensity(nuovo_elemento);
		nuovo_elemento->next = head;
		head = nuovo_elemento;
	}
	return(nuovo_elemento);
}

void rimuovi (struct immagine *ultimaimmagine){
	struct immagine *attuale = NULL;
	
	while (ultimaimmagine != NULL){
		attuale = ultimaimmagine;
		ultimaimmagine = ultimaimmagine->next;
		free(attuale);
	}
//TODO SALVARE LE MATRICI
	
=======
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "train.h"
#include "mnist.h"
#include "image_helper.h"
// implemento una funzione che per 60000 iterazioni effettua l'aggiunta in lista di uno struct immagine e copia i valori dell'immagine
struct immagine *aggiungi(struct immagine *image, int index, int label)
{
	struct immagine *nuovaimmagine;
	nuovaimmagine = malloc(sizeof(struct immagine));
	if (nuovaimmagine == NULL)
	{
		printf("ERRORE IN FASE DI ALLOCAZIONE DELLA MEMORIA \n");
		exit(-1);
	}
	save_mnist_pgm(nuovaimmagine->matrice, index);
	set_label(label, nuovaimmagine);
	nuovaimmagine->intensity = get_intensity(nuovaimmagine);
	image->next = nuovaimmagine;
	return (nuovaimmagine);
}

struct immagine train(void)
{

	struct immagine *head;
	head->next = NULL;
	int i = 0;
	int labels[60000];
	load_mnist();
	label_char2int(60000, train_label_char, labels);
	for (i = 0; i < 60000; i++)
	{
		head = aggiungi(head, i, labels[i]);
	}
	struct immagine picture;
	picture.next = head;
	return (picture);
}

struct immagine *rimuovi (struct immagine *ultimaimmagine){
	struct immagine *precedente;
	
	precedente = NULL;
	precedente->next = ultimaimmagine->next;
	free(ultimaimmagine);
	return (precedente);

}