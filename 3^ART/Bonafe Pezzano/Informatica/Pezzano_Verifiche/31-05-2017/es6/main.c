#include <stdio.h>
#include <stdlib.h>

int main()
{
	char f[20],p;
	int i,j,trovata;
	
	printf("Digita la frase da utilizzare (non più lunga di 20 caratteri): ");
	scanf("%s",&f);
	if(strlen(f)>20)
	{
		printf("\nHO DETTO NON PIU' LUNGA DI 20 CARATTERI!");
		return 0;	
	}

	printf("Digita il carattere da cercare: ");
	scanf("%s",&p);
	
	
	for(i=0;i<20;i++)
	{
		if((int)f[i]==(int)p)
			trovata++;
	}
	
printf("\nIL CARATTERE '%s' ALL'INTERNO DELLA FRASE '%s' E' PRESENTE %d VOLTE.",p,f,trovata);	
}
