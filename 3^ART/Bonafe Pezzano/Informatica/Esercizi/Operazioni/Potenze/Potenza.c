#include <stdio.h> /* libreria printf*/
#include <math.h> /* libreria pow (potenza) */

int main ()
{
	int a,b,y;
	printf ("\n Potenza di un numero");
	printf ("\n Inserisci la base: ");
	scanf ("%d",&a);
	printf ("\n Inserisci l'esponente: ");
	scanf ("%d",&b);
	
	y=pow(a,b);
	printf ("\n il risultato di %d elevato alla %d vale %d",a,b,y);
	

	}
