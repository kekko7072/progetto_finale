#include <stdlib.h>
#include <stdio.h>
#include "image_helper.h"
#include "mnist.h"
#include "train.h"
#include "classify.h"

struct immagine *classify( struct immagine *image, struct immagine *list_images){
	 
  long int mindistance=compute_distance(image,list_images ); //calcolo la distanza tra un'immagine della lista e quella da analizzare
  struct immagine *corresponding_image; //creo una variabile che conterrà l'indirizzo dell'immagine più vicina a quella da analizzare      
  
   struct immagine *p; //variabile temporanea da inserire nel ciclo for
  for(p = list_images; p!=NULL; p=p->next) //ricerca iterativa
   {long int distance;     
	distance=compute_distance(image,list_images );
    
  if(distance<mindistance)  //caso in cui trovo un'immagine più affine a quella da analizzare
  {
   mindistance=distance;      //registro la nuova distanza minima
   corresponding_image=list_images;}//salvo l'indirizzo
  }
   
   return corresponding_image;  //ritorno l'immagine della lista più vicina
}

struct immagine *aggiungi(struct immagine *image, int index, int label)
{
	struct immagine *nuovaimmagine;
	nuovaimmagine = malloc(sizeof(struct immagine));
	if (nuovaimmagine == NULL)
	{
		printf("ERRORE IN FASE DI ALLOCAZIONE DELLA MEMORIA \n");
		exit(-1);
	}
	save_mnist_pgm(&nuovaimmagine->matrice, index);
	set_label(label, nuovaimmagine);
	nuovaimmagine->intensity = get_intensity(nuovaimmagine);
	nuovaimmagine->next = image;
	return (nuovaimmagine);
}





int main()
{
 
 
 struct immagine *imagetest;
 struct immagine *immagine_simile;
 
 


struct immagine *head = NULL;
	int i = 0;
	int labels[60000];
	load_mnist();
	label_char2int(60000, train_label_char, labels);
	for (i = 0; i < 60000; i++)
	{
		head = aggiungi(head, i, labels[i]);
	}
 
  imagetest=head; //provo ad utilizzare come immagine da analizzare quella a inizio lista


immagine_simile=classify(imagetest,head);
printf("questo è il label dell'immagine simile %d",immagine_simile->label);

return 0;
}