#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "image_helper.h"
#include "mnist.h"
#include "train.h"
#include "classify.h"


int main()
{
    // TODO MAIN CODE OF EXECUTION HERE
struct immagine *head = NULL;
int label;
train(head);
print(head);
label=get_label(head);
printf("%d \n", label);
//head->next = head;
print(head);
label=get_label(head);
printf("%d \n", label);
for(int i = 0; i < 60000; i++){
	head = rimuovi(head);
}
    return 0;
}