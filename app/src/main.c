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
  int mode;
 



while((mode!=1)&&(mode!=2))
{printf("CHOSEN MODE: ");
scanf("%d",&mode);}

testchoice(&imagetest);  //funzione per selezionare l'immagine da riconoscere
 
print(&imagetest); //stampo a schermo l'immagine di prova
 



list=train(head);  //funzione per caricare su la list "list" le immagini da utilizzare come database

matching_number=classify(&imagetest,list,&immagine_simile);




printf("\nL'immagine rappresnta il numero %d\n",matching_number); 

rimuovi(list);

return 0;
}