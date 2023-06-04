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
  struct immagine immagine_simile;
 
 list=train(head);

 

 load_mnist();  
 label_char2int(10000, test_label_char, tlabels); 
 printf("\n%d\n",tlabels[5000]);
 set_label(tlabels[5000], &imagetest);

 
image_char2double(5000, test_image_char, tmatrix); 
 for(int y = 0; y < 28; y++){
		for(int j = 0; j < 28; j++){
	    imagetest.matrice[(y*28+j)] = tmatrix[(y*28+j)]; 
			}}
		

imagetest.intensity = get_intensity(&imagetest);  

print(&imagetest);
printf("\nQuesto è il label che vorrei ottenere: %d\n",imagetest.label);


matching_number=classify(&imagetest,list,&immagine_simile); 
print(&immagine_simile);
printf("\nquesto è il label dell'immagine simile %d\n",matching_number); 

return 0;
}