#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "image_helper.h"
#include "mnist.h"
#include "train_2.h"
#include "string.h"


int main()
{
    printf ("Ciao\n");
    struct immagine *head = NULL;
    struct immagine *testa = NULL;
    /*int label;
    double pixel;
    */
    head = train_ordinato(head);
    /*pixel = pixel_at(10, 10, head);
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
    */

   for (int i = 0; i < 30; i++){
    for (testa = head; testa != NULL; testa = testa->next){
        printf ("%ld", testa->intensity);
        printf ("\n");
    }
   }

    rimuovi(testa);

    return 0;
}