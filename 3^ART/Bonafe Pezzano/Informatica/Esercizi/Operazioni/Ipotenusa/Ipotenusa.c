#include <stdio.h>
#include <math.h>
void main (void)

{
    float c1,c2,i,r; //cateto1, cateto2, ipotenusa e risposta utente

	while(r==0)
	{
	printf("\n Premi 0 avviare: ");
	scanf("%f",&r);
	printf("\n Questo programma calcola l'ipotenusa di un triangolo rettangolo");
	printf("\n Inserisci primo cateto: ");
	scanf("%f",&c1); //lettura primo dato
	printf("\n Inserisci secondo cateto: ");
	scanf("%f",&c2);
	
	 i=sqrt(pow(c1,2)+pow(c2,2));
	 printf("\n L'ipotenusa vale: %f",i);
	 
	         }
    

	 
}

