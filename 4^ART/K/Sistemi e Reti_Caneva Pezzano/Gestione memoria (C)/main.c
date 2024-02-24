#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>



void main()
{
	int x,y,i,c;
	int bitmap[6][6], p1[3],p2[5], p3[12];
	//bool f;
	printf("Algoritmo che simula il funzionamento di FIRST FIT...\n\n");
	//riempo la bitmap di numeri casuali
	srand((unsigned int) time(NULL));
	for(x=0;x<6;x++)
	{
		for(y=0;y<6;y++)
			bitmap[x][y] = rand() %2;
	}
	
	//stampo la bitmap iniziale
	printf("BitMap iniziale: \n");
	for(x=0;x<6;x++)
	{
		for(y=0;y<6;y++)
		{
			printf("%d \t",bitmap[x][y]);
		}
		printf("\n");
	}
	
	//riempo i processi
	for(x=0;x<3;x++)
		p1[x]=1;
	for(x=0;x<5;x++)
		p2[x]=1;
	for(x=0;x<12;x++)
		p3[x]=1;
	
	//stampo i processi
	printf("\n Processo 1: ");
	for(i=0;i<3;i++)
		printf("%d",p1[i]);
	
	printf("\n Processo 2: ");
	for(i=0;i<5;i++)
		printf("%d",p2[i]);
	
	printf("\n Processo 3: ");
	for(i=0;i<12;i++)
		printf("%d",p3[i]);
	
	
	//menu con il quale decido quale processo inserire
	printf("")
	
	for(x=0;x<6;x++)
	{
		for(y=0;y<6;y++)
		{
			if(bitmap[x][y]=0)
			{
				c++;
				switch(c)
				{
					// inserisco i processi in memoria
					case 3:
						for(i=0;i<3;i++)
							bitmap[x++][y++]=1;
						x=6; y=6;
						break;
					case 5:
						for(i=0;i<5;i++)
							bitmap[x++][y++]=1;
						x=6; y=6;
						break;
					case 12:
						for(i=0;i<12;i++)
							bitmap[x++][y++]=1;
						x=6; y=6;
						break;	
				}
			}
		}
	}
	
	
	
	
	
}
