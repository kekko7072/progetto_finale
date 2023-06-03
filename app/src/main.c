#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "image_helper.h"
#include "mnist.h"
#include "train.h"
#include "classify.h"

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

    return 0;
}