#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "mnist.h"
#include "image_helper.h"

int classify(const struct immagine *image, struct immagine *list_images, struct immagine *corresponding_image){
	 
  long int mindistance ; //calcolo la distanza tra un'immagine della lista e quella da analizzare
  int corresponding_label;
//creo una variabile che conterrà il label dell'immagine fornita in input
  
   mindistance = compute_distance(image,list_images);  //!PROBLEMA CON LIST_IMAGES
  while( list_images!=NULL) //ricerca iterativa
   {long int distance;     
	  
  distance=compute_distance(image,list_images );
    
  if(distance<mindistance)  //caso in cui trovo un'immagine più affine a quella da analizzare
  {
   mindistance=distance;      //registro la nuova distanza minima
   corresponding_label=list_images->label;
      *(corresponding_image) = *(list_images);}//salvo l'indirizzo
 
    list_images=list_images->next;
  }
  
   return corresponding_label;  //ritorno l'immagine della lista più vicina
}
