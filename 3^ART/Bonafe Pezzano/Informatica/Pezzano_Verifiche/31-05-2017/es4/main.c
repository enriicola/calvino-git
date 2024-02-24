#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char a,lettura[20];
	int ru=1,lungh[20];
	
do{
	printf("DIGITA IL NOME DEL FILE DA CERCARE: ");
	scanf("%s",&a);
if(a='test')
	fp=fopen("save/test.txt","r");
	
	if(fp==NULL)
	{
		printf("\nERRORE NELL'APERTURA DEL FILE!\nDIGITA UN NOME CORRETTO!");
		break;
	}
		fscanf(fp,"%s",lettura);
		printf("\n%s",lettura);
	
	printf("\nVUOI USCIRE? DIGITA ZERO: ");
	scanf("%d",&ru);
}while(ru!=0);
}
