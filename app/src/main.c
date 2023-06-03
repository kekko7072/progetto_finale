#include <stdlib.h>
#include <stdio.h>
#include "image_helper.h"
#include "mnist.h"
#include "train.h"
#include "classify.h"







int main(void)
{
 
 //numero immagine contenuta nel database test
 
 struct immagine imagetest;  //immagine da confrontare
 int matching_number;  //risultato atteso
 struct immagine *head = NULL;  //testa lista concatenata  //matrice dove salvare il conttenuto dell'immagine test
 int tlabels[10000];
 double tmatrix[784];
  struct immagine *list;  
 
 list=train(head);

 

 load_mnist();  //OK
 label_char2int(10000, test_label_char, tlabels); //OK
 printf("\n%d\n",tlabels[9]);
 set_label(tlabels[9], &imagetest);

 
image_char2double(9, test_image_char, tmatrix); 
 for(int y = 0; y < 28; y++){
		for(int j = 0; j < 28; j++){
	    imagetest.matrice[(y*28+j)] = tmatrix[(y*28+j)]; //OK
			}}
		

imagetest.intensity = get_intensity(&imagetest);  //OK

printf("\nQuesto è il label che vorrei ottenere: %d\n",imagetest.label);//OK


matching_number=classify(&imagetest,list); 
printf("\nquesto è il label dell'immagine simile %d\n",matching_number); 

return 0;
}