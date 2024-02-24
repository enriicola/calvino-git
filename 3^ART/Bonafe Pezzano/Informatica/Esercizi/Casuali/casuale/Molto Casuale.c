#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000
#define NF 6

int main ()


{
    int freq[NF],i, dado,ru; // variabile che indica le facce che escono, celletta(indice), 
 
	while(ru==0)
	{
	printf("\n Digita 0 per avviare: ");
	scanf("%d",&ru);
	
/*	if(ru=!0)
	printf("\n DEVI DIGITARE ZERO!");
	else */

	srand((unsigned int) time(NULL));
    
	for(i=0;i<NF;i++)
	   freq[i]=0;
	   
	for(i=0;i<N;i++)
	{
		dado=rand() %NF+1;
		freq[dado-1]++;
	}
	
	for(i=0;i<NF;i++)
	
	printf("\n Il numero %d e' uscito %d volte",i+1,freq[i]);
	printf("\n");
	system ("PAUSE");
		}
}
