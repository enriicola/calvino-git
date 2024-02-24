#include <stdio.h>
#include <math.h>

void main (void)


{
	float c1,c2,a,i;
	
	do{
	printf("\n Inserisci 0 per avviare: ");
	scanf("%f",&i);	
	printf("\n Questo programma calcola l'area di un triangolo rettangolo");
	printf("\n Inserisci il primo cateto: ");
	scanf("%f",&c1);
	printf("\n Inserisci il secondo cateto: ");
	scanf("%f",&c2);
	
	a=(c1*c2)/2;
	printf("\n L'area del triangolo rettangolo e' %f",a);
	}
	while(i==0);
	
    



}
