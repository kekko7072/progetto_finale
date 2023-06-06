#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "image_helper.h"
#include "mnist.h"
#include "train.h"
#include "classify.h"



<<<<<<< HEAD








=======
>>>>>>> 5785d2827f128d25f528c236e629452299648d6c
int main(void)
{
 
 //numero immagine contenuta nel database test
 
 struct immagine imagetest;  //immagine da confrontare
 int matching_number;  //risultato atteso
 struct immagine *head = NULL;  //testa lista concatenata  //matrice dove salvare il conttenuto dell'immagine test

  struct immagine *list=NULL;  
  struct immagine immagine_simile;
  int mode;
 



while((mode!=1)&&(mode!=2))
{printf("CHOSEN MODE: ");
scanf("%d",&mode);}

testchoice(&imagetest);  //funzione per selezionare l'immagine da riconoscere
 
print(&imagetest); //stampo a schermo l'immagine di prova
 



<<<<<<< HEAD
list=train(head);  //funzione per caricare su la list "list" le immagini da utilizzare come database

matching_number=classify(&imagetest,list,&immagine_simile);




printf("\nL'immagine rappresnta il numero %d\n",matching_number); 

rimuovi(list);
=======
print(&immagine_simile);
printf("\nquesto è il label dell'immagine simile %d\n",matching_number); 
/*
int main()
{

    struct immagine *head = NULL;
    struct immagine *testa = NULL;
    int label;
    double pixel;
    head = train(head);
    testa = head;
    pixel = pixel_at(10, 10, head);
    printf("pixel: %f \n", pixel);
    printf("intensit: %ld \n", head->intensity);
    label = get_label(head);
    printf("label:%d \n", label);
    print(head);
    for (int j = 0; j < 59999; j++)
        head = head->next;
    pixel = pixel_at(10, 10, head);
    printf("pixel: %f \n", pixel);
    printf("intensit: %ld \n", head->intensity);
    label = get_label(head);
    printf("label:%d \n", label);
    print(head);

    rimuovi(testa);
*/
>>>>>>> 5785d2827f128d25f528c236e629452299648d6c

return 0;
}