#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
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

return 0;
}