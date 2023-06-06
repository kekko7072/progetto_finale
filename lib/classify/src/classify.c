#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "mnist.h"
#include "image_helper.h"

int classify(const struct immagine *image, struct immagine *list_images, struct immagine *corresponding_image){
	 
  long int mindistance ; //calcolo la distanza tra un'immagine della lista e quella da analizzare
  int corresponding_label;
//creo una variabile che conterrà il label dell'immagine fornita in input
  
   mindistance = compute_distance(image,list_images);  //!PROBLEMA CON LIST_IMAGES
  while( list_images!=NULL) //ricerca iterativa
   {long int distance;     
	  
  distance=compute_distance(image,list_images );
    
  if(distance<mindistance)  //caso in cui trovo un'immagine più affine a quella da analizzare
  {
   mindistance=distance;      //registro la nuova distanza minima
   corresponding_label=list_images->label;
      *(corresponding_image) = *(list_images);}//salvo l'indirizzo
 
    list_images=list_images->next;
  }
  
   return corresponding_label;  //ritorno l'immagine della lista più vicina
}





void testchoice(struct immagine *testimage){

int numbertest=-1;
 int tlabels[10000];
 double tmatrix[784];
 char string_numbertest[100]; 
 int NUM=1;


while(numbertest>9999 || numbertest<0)
{ 
  printf("\ndigit a number from 0 to 9999: ");
	scanf("%s", string_numbertest);
  
  
 numbertest = atoi(string_numbertest);
    for(int i=0;i<(int)strlen(string_numbertest);i++)
  {if(string_numbertest[i]>'9'||string_numbertest[i]<'0')
   {NUM=0;
   numbertest=-1;}
   
  }
 
 if(NUM)
 {if(numbertest>9999 || numbertest<0)
 {printf("\nthe chosen number is outside the asked range\n");}}
else
{printf("\ninclude only numbers please\n");
NUM=1;}
 }

load_mnist();  
label_char2int(10000, test_label_char, tlabels); 
set_label(tlabels[numbertest], testimage);

 
image_char2double(numbertest, test_image_char, tmatrix); 
for(int y = 0; y < 28; y++){
	for(int j = 0; j < 28; j++){
	    testimage->matrice[(y*28+j)] = tmatrix[(y*28+j)]; 
			}}
		
testimage->intensity = get_intensity(testimage);  
}