#include <stdio.h>
#include <math.h>
void main (void)
{

float r,a,c,p,ru;  //raggio, Area, Circonferenza, pi greco, risposta utente

	while(ru==0)
	{
	

	printf("\n Premi 0 avviare: ");
	scanf("%f",&ru);
    printf("\n Questo programma calcola l'Area e la Circonferenza di un cerchio");
    printf("\n Inserisci il raggio: ");
    scanf("%f",&r);  

    p=3.14159;
    c=2*p*r;
    a=p*pow(r,2);

    printf("\n L'Area vale %f e la Circonferenza vale %f",a,c);
    }   


}
