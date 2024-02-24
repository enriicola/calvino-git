#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <curses.h>

#define AA 30
#define A 50
	
	void vis (int lung ,char x1[30][50],char x2[30][50]){
int posM, x;
for(posM=0; posM<lung; posM++){
x=posM+1;
printf("\n %d:	%s, %s \n", x, x1[posM], x2[posM]);}}

char canc (int lung ,char x1[30][50],char x2[30][50]){
	int x;
	int z;
	int y;
	
				printf("\n quale contatto desideri cancellare? ");

				for(x=0; x<lung; x++)
					printf("\n %d:	%s, %s \n\n", x+1, x1[x], x2[x]);
				
				scanf("%d", &z);
				z--;
				if(lung>0){
					for(x=z, y=x+1; x!=lung; x++, y++)
					strcpy(x1[x], x1[y]);}
					for(x=z, y=x+1; x!=lung; x++, y++)
					strcpy(x2[x], x2[y]);
				lung--;} 
			
				
			/*	scanf("%d", &z);
                z--;  lung++;
				for(x=z; x<=lung; x++)
				{
				y=x+1;
					strcpy(x1[x],x1[y]);
				}
				for(x=z; x<=lung; x++)
				{
				y=x+1;
					strcpy(x2[x],x2[y]);
				}
				lung=lung-1;

				for(x=1; x<lung; x++)
					printf("\n %d:	%s, %s", x, x1[x], x2[x]);
			}*/



char charc (char scambio1[30][50], char sp_vuoto[50], int lungArr){
		
		int x=0, y=0, z=0;
		
				for(x=0; x<lungArr; x++){

					for(y=x; y<lungArr; y++) {

						z=strcmp(scambio1[x],scambio1[y]);
						if(z>0) {
							strcpy(sp_vuoto,scambio1[x]);
							strcpy(scambio1[x],scambio1[y]);
							strcpy(scambio1[y],sp_vuoto);

						}
					}
					}
					}
					



int main() {

	char no[AA][A];
	char nu[AA][A];
	char no2[AA][A];
	char sc[A], lett[A];
	char s,sce,I,salv;		//switch vari
	char C;			
	int x=0,y,z,q,aa=0,w=1;
	FILE *rub;

	while(s!='n') {
		printf("\n\n 		--------- GESTIONE RUBRICA V2.0 ---------");
		printf("\n\n cosa vuoi fare nella rubrica? \n\n [n = niente, viene chiuso il programma] \n [a = aggiungere un contatto] \n [c = cancellare un contatto] \n [m = modificare un contatto] \n [v = visualizzare i contatti] \n [s = salva la tua rubrica] \n\n");
        fflush(stdin);
		scanf("%c", &s);
		fflush(stdin);
		switch (s) {
			
			system("CLS");
			
			case 'n':
				return 0;
				break;

			case 'a':
				if(I=='n'){
				aa++;
				
				printf("\n Inserisci il nome: ");
				gets(no[x]);
				fflush(stdin);
				printf("\n inserisci il numero: ");
				gets(nu[x]);
				fflush(stdin);

				for(y=0; y<aa; y++) { //verifico se il nome o il numero inseriti sono già esistenti
					z=strcmp(no[x],no[y]);
					if(y==x)
						z++;
					if(z==0) {
						printf("\n contatto gia' esistente \n inserisci il nome: ");
						gets(no[x]);
						fflush(stdin);
					}
					q=strcmp(nu[x],nu[y]);
					if(y==x)
						q++;
					if(q==0) {
						printf("\n contatto gia' esistente \n inserisci il numero: ");
						gets(nu[x]);
						    fflush(stdin);
							 }
					}
					}
			/*	charc(no, sc, aa);
					fflush(stdin);
				charc(nu, sc, aa);
                  	fflush(stdin);
				z=1;*/
				
				for(x=0; x<aa; x++,z++)
					printf("\n %d	%s, %s", z, no[x], nu[x]);
				
				system("CLS");
				break;
				
			case 'c':
				if(I=='n'){
				canc(aa,no,nu);
				aa--;
				}
				break;

			case 'm':	
				if(I=='n'){
				printf("\n quale contatto desideri modificare? ");

				vis(aa, no, nu);

				scanf("%d", &z);
				fflush(stdin);

				z--;

				printf("\n inserisci il nome: ");
				gets(no[z]);
				printf("\n inserisci il numero: ");
				gets(nu[z]);
				x=z;
				q=0;
				for(y=0; y<aa; y++) { //verifico se il nome o il numero inseriti sono già esistenti
					z=strcmp(no[x],no[y]);
					if(y==x)
						z++;
					if(z==0) {
						printf("\n contatto gia' esistente \n inserisci il nome: ");
						gets(no[x]);
					}
					q=strcmp(nu[x],nu[y]);
					if(y==x)
						q++;
					if(q==0) {
						printf("\n contatto gia' esistente \n inserisci il numero: ");
						gets(nu[x]);
					}
				}

				for(x=0; x<aa; x++)  		//algoritmo per ordinare la rubrica
					for(y=x+1; y<aa; y++) {
						z=strcmp(no[x],no[y]);
						if(z>0) {
							strcpy(sc,no[x]);
							strcpy(no[x],no[y]);
							strcpy(no[y],sc);

							strcpy(sc,nu[x]);
							strcpy(nu[x],nu[y]);
							strcpy(nu[y],sc);
						}
					}
				
				z=1;
				system("CLS");
				break;

			case 'v':
				vis(aa, no, nu);
				getch(C);
				system("CLS");
				break;
				
			case 's':
				printf("\n che tipo di file vuoi salvare? \n \n [e = formato excel] \n [h = formato html] \n\n ");
				scanf("%c", &salv);
				system("CLS");
				switch(salv){
					
					case 'e':
						
						rub = fopen("rubrica_C.csv", "w+");
						fputs("Nome; Numero; \n", rub);
						for(x=0; x<aa; x++)
						fprintf(rub, "%s; %s; \n",no[x], nu[x]);
						
						fclose(rub);
						
						printf("\n La tua rubrica e' stata salvata, desideri continuare? \n\n [s = si] \n [n = no] \n\n");
						fflush(stdin);
						scanf("%c", &salv);
						
						if(salv=='n')
						return 0;
						system("CLS");
						break;
						
					case 'h':
						
						rub = fopen("rubrica_C.html", "w+");
						fputs("<html> <body> <br>", rub);
						fputs("Nome		Numero <br><br>", rub);
						for(x=0; x<aa; x++)
						fprintf(rub, "%s		%s <br>",no[x], nu[x]);
						fputs("</body> </html>", rub);
						
						fclose(rub);
						
						
						printf("\n La tua rubrica e' stata salvata, desideri continuare? \n\n [s = si] \n [n = no] \n\n");
						fflush(stdin);
						scanf("%c", &salv);
						
						if(salv=='n')
						return 0;
						system("CLS");
						break;
						
				}

		}
	}
}
}
	

