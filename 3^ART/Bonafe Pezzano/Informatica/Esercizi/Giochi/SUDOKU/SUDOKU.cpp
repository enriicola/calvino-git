// provvisori:

//facile ---> 	  000|050|834//004|090|006//000|000|000//020|900|740//690|708|025//048|003|010//000|000|000//800|060|100//567|030|000
// Soluzione ---> 976|251|834//184|397|256//253|684|971//325|916|748//691|748|325//748|523|619//419|872|563//832|465|197//567|139|482

//medio ---> 	 000|089|200//690|052|100//208|060|004//002|000|000//710|000|038//000|000|400//400|070|501//003|540|076//007|620|000
//Soluzione ---> 571|489|263//694|352|187//238|167|954//342|816|795//715|294|638//869|735|412//486|973|521//923|541|876//157|628|349
 
//difficile ---> 090|300|107//160|500|000//000|020|030//010|800|700//709|000|302//004|003|060//020|030|000//000|007|023//607|004|050
//Soluzione ---> 592|346|187//163|578|294//478|129|536//316|892|745//789|465|312//254|713|869//925|631|478//841|957|623//637|284|951

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N	9


int facile_risolto[N][N],medio_risolto[N][N],difficile_risolto[N][N],facile_vuoto[N][N],medio_vuoto[N][N],difficile_vuoto[N][N];

int solu_facile[81]={9,7,6,2,5,1,8,3,4,1,8,4,3,9,7,2,5,6,2,5,3,6,8,4,9,7,1,3,2,5,9,1,6,7,4,8,6,9,1,7,4,8,3,2,5,7,4,8,5,2,3,6,1,9,4,1,9,8,7,2,5,6,3,8,3,2,4,6,5,1,9,7,5,6,7,1,3,9,4,8,2};
int solu_medio[81]={5,7,1,4,8,9,2,6,3,6,9,4,3,5,2,1,8,7,2,3,8,1,6,7,9,5,4,3,4,2,8,1,6,7,9,5,7,1,5,2,9,4,6,3,8,8,6,9,7,3,5,4,1,2,4,8,6,9,7,3,5,2,1,9,2,3,5,4,1,8,7,6,1,5,7,6,2,8,3,4,9};
int solu_difficile[81]={5,9,2,3,4,6,1,8,7,1,6,3,5,7,8,2,9,4,4,7,8,1,2,9,5,3,6,3,1,6,8,9,2,7,4,5,7,8,9,4,6,5,3,1,2,2,5,4,7,1,3,8,6,9,9,2,5,6,3,1,4,7,8,8,4,1,9,5,7,6,2,3,6,3,7,2,8,4,9,5,1};

int vuoto_facile[81]={0,0,0,0,5,0,8,3,4,0,0,4,0,9,0,0,0,6,0,0,0,0,0,0,0,0,0,0,2,0,9,0,0,7,4,0,6,9,0,7,0,8,0,2,5,0,4,8,0,0,3,0,1,0,0,0,0,0,0,0,0,0,0,8,0,0,0,6,0,1,0,0,5,6,7,0,3,0,0,0,0};
int vuoto_medio[81]={0,0,0,0,8,9,2,0,0,6,9,0,0,5,2,1,0,0,2,0,8,0,6,0,0,0,4,0,0,2,0,0,0,0,0,0,7,1,0,0,0,0,0,3,8,0,0,0,0,0,0,4,0,0,4,0,0,0,7,0,5,0,1,0,0,3,5,4,0,0,7,6,0,0,7,6,2,0,0,0,0};
int vuoto_difficile[81]={0,9,0,3,0,0,1,0,7,1,6,0,5,0,0,0,0,0,0,0,0,0,2,0,0,3,0,0,1,0,8,0,0,7,0,0,7,0,9,0,0,0,3,0,2,0,0,4,0,3,0,6,0,0,2,0,0,3,0,0,0,0,0,0,0,0,0,7,0,2,3,6,0,7,0,0,4,0,5,0};
//_____________________________________________________________________________________________________________________________

void sudoku_precaricati()
{
int i,k,j;

//facile
for(i=0;i<N;i++)
{
	for(k=0;k<N;k++,j++)
		facile_vuoto[i][k]	=	vuoto_facile[j];
}
for(i=0;i<N;i++)
{
	for(k=0;k<N;k++,j++)
		facile_risolto[i][k]	=	solu_facile[j];
}

//medio
for(i=0;i<N;i++)
{
	for(k=0;k<N;k++,j++)
		medio_vuoto[i][k]	=	vuoto_medio[j];
}
for(i=0;i<N;i++)
{
	for(k=0;k<N;k++,j++)
		medio_risolto[i][k]	=	solu_medio[j];
}

//difficile
for(i=0;i<N;i++)
{
	for(k=0;k<N;k++,j++)
		difficile_vuoto[i][k]	=	difficile_facile[j];
}
for(i=0;i<N;i++)
{
	for(k=0;k<N;k++,j++)
		difficile_risolto[i][k]	=	solu_difficile[j];
}






}
//_____________________________________________________________________________________________________________________________

void menu(int *ru, int *ru1);
{
int ru=0,ru1=0;

	printf("--------------------SUDOKU SOLVER--------------------\n di Enrico Pezzano\n\n");
	printf("Cosa vuoi fare?      \n");
	printf("1) Uscire.");
	printf("2) Risolvere un sudoku pre-caricato.");
	printf("3) Risolvere un sudoku casuale.");
	printf("4) Risolvere un sudoku N x N.");
	printf("5) Constatare la validità di un sudoku.");
	printf("6) Sito Web.");
	printf("				Inserisci la tua scelta: ");
		scanf("%d",&ru);
	
	
	
	
		if(ru==2)
			{
			printf("Quale livello desideri?   \n");
			printf("0) Torna indietro.");
			printf("1) Facile.");
			printf("2) Medio.");
			printf("3) Difficile.");
			printf("				Inserisci la tua scelta: ");
				scanf("%d",&ru1);
			}
}
//_____________________________________________________________________________________________________________________________

int main()
{
int *ru=0,*ru1=0;

do{

void menu(&ru,&ru1);

switch(ru) {
	
	case 1:	//uscita
		system("CLS");
		printf("\n										A PRESTO!!");
		delay(1000);
		break;
	
	case 2:	//pre-caricati
		switch(ru1){
				case 1:
		
					break;
				
				case 2:
		
					break;
				
				case 3:
		
					break;					
					} // switch ru1
		break;	
		
	case 3:	//casuale
		
		break;	
	
	case 4:	//N x N
		
		break;
		
	case 5:	//controllo validità
		
		break;
		
	case 6:	//sito web
		printf("\n Il sito web non è disponibile.");
		break;
	} //switch ru

































}//do
while(ru!=1);
} //main
