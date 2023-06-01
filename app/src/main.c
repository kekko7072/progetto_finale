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
struct immagine image;
struct immagine *pointer;
int label;
image.next=train;
pointer = image.next;
print(&image);
label=get_label(&image);
printf("%d \n", label);
print(pointer);
label=get_label(pointer);
printf("%d \n", label);
    return 0;
}