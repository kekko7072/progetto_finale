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

  struct immagine *list;  
  struct immagine immagine_simile;
 
 list=train(head);

 testchoice(&imagetest);



print(&imagetest);
printf("\nQuesto è il label che vorrei ottenere: %d\n",imagetest.label);


matching_number=classify(&imagetest,list,&immagine_simile); 

print(&immagine_simile);
printf("\nquesto è il label dell'immagine simile %d\n",matching_number); 

return 0;
}