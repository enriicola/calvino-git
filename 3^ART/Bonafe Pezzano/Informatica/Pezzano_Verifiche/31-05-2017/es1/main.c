#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i,vettore[10]={9,5,3,6,7,4,1,2,9,5};
	
	printf("\nORDINE D'INSERIMENTO:\n");
	for(i=0;i<10;i++)
		printf("%d",vettore[i]);
	
	printf("\nORDINE DIVERSO:\n");
	for(i=10;i>0;i--)
		printf("%d",vettore[i]);
}
