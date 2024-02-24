#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matrice[5][5],i,j,k;
	char c=' ';
	
	printf("MATRICE ORIGINALE: \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			matrice[i][j]=i+j;
			printf("%d",matrice[i][j]);
		}
		printf("\n");
	}
	
	printf("\nVISUALIZZAZIONE DIAGONALE: \n");
	for(i=0,j=0;i<5;i++,j++)
		printf("%d\n",matrice[i][j]);
}
