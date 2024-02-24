#include <stdio.h>
#include <math.h>

void main (void)
{
     float a,p,s,ps,i;        //costo base, percentuale sconto, prodotto scontato, prezzo da sottrarre al totale, risposta utente
	 printf("Questo programma calcola il prezzo scontato di un articolo");
	 printf("\n ");
	 

	 do{
     printf("\n Inserisci 0 per continuare: ");
	 scanf("%f",&i);
	 printf("\n Inserisci il prezzo iniziale dell'articolo: ");
	 scanf("%f",&a);
   	 printf("\n Inserisci la percentuale di sconto dell'articolo: ");
	 scanf("%f",&p);
	
	ps=(a/100)*p;
    s=a-ps;
    
	printf("\n Il prezzo dell'articolo scontato e' %f",s);
	 }
	 while(i==0);
	 
	 
	 
	 
	 
	 
	
}
