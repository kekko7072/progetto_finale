#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "mnist.h"
#include "image_helper.h"

struct immagine *classificadue(const struct immagine *image, struct immagine *list_images){
	 
long int mindistance = 200000; //calcolo la distanza tra un'immagine della lista e quella da analizzare
struct immagine *puntatoreintensity;
struct immagine *puntatorericerca;
struct immagine *corresponding_image;
int i = 0;
int k = 1000;
long int intensity = 200000;

puntatoreintensity = list_images;
puntatorericerca = puntatoreintensity;
corresponding_image = puntatorericerca;
mindistance = compute_distance(image,list_images);  
while( puntatoreintensity !=NULL && image->intensity > intensity && i < (k/2)) //ricerca iterativa
{
	intensity = puntatoreintensity->intensity;
    puntatoreintensity = puntatoreintensity->next;
	i++;
}

while(puntatoreintensity != NULL && image->intensity > intensity && i < (60000-(k/2))) //ricerca iterativa
{
	intensity = puntatoreintensity->intensity;
	puntatoreintensity = puntatoreintensity->next;
	i++;
	puntatorericerca = puntatorericerca->next; //sono dietro di 500 passi
}

for(int j = 0;j <= k;j++){
long int distance;
distance = compute_distance(image,puntatorericerca );
if (distance < mindistance){
	mindistance = distance;
	corresponding_image = puntatorericerca;
	}
puntatorericerca = puntatorericerca->next;
}
return (corresponding_image);
}



struct immagine *scelta(){

int numbertest=-1;
 int tlabels[10000];
 double tmatrix[784];
 char string_numbertest[10000];
 struct immagine *testimage;
testimage = malloc(sizeof(struct immagine));
	if (testimage == NULL){
		printf("errore nell'allocazione di memoria \n");
		exit(-1);
	}

while(numbertest>9999 || numbertest<0)
{  
  printf("\ndigit a number from 0 to 9999: ");
	scanf("%s", string_numbertest);
  numbertest = atoi(string_numbertest);
 
 if(numbertest>9999 || numbertest<0)
 {printf("\nthe chosen number is outside the asked range\n");}}

load_mnist();  
label_char2int(10000, test_label_char, tlabels); 
printf("\n%d\n",tlabels[numbertest]);
set_label(tlabels[numbertest], testimage);
 
image_char2double(numbertest, test_image_char, tmatrix); 
for(int y = 0; y < 28; y++){
	for(int j = 0; j < 28; j++){
	    testimage->matrice[(y*28+j)] = tmatrix[(y*28+j)]; 
			}}
		
testimage->intensity = get_intensity(testimage);  
return(testimage);
}