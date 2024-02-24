#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define AA 50
#define A 30

int main() {

	char no[AA][A];
	char nu[AA][A];
	char no2[AA][A];
	char sc[A], lett[A];
	char s,sce,I;
	int x=0,y,z,q,aa=0,w=1,aa2=0,x2=0,y2=0;

	while(s!='n') {
		printf("\n\n 		--------- GESTIONE RUBRICA V1.7 ---------");
		printf("\n\n cosa vuoi fare nella rubrica? \n\n [n = niente, viene chiuso il programma] \n [a = aggiungere un contatto] \n [c = cancellare un contatto] \n [m = modificare un contatto] \n [v = visualizzare i contatti] \n\n");
        scanf("%c", &s);
		fflush(stdin);
		system("CLS");
		switch (s) {

			case 'n':
				return 0;
				break;

			case 'a':
				system("CLS");
				printf("\n hai sbagliato? vuoi tornare indietro? \n [s = si] \n [n = no]\n");
				scanf("%c", &I);
				fflush(stdin);	
				if(I=='n'){
				aa++;
				aa2++;
				printf("\n inserisci il nome: ");
				gets(no[x]);
				printf("\n inserisci il numero: ");
				gets(nu[x]);

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
						gets(nu[x]);}
					}
				
				
				aa--;
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
					aa++;
				z=1;
				
				for(x=0; x<aa; x++,z++)
					printf("\n %d	%s, %s", z, no[x], nu[x]);
				}
				system("CLS");
				break;
				
			case 'c':
				printf("\n hai sbagliato? vuoi tornare indietro? \n [s = si] \n [n = no]\n");			
				scanf("%c", &I);
				fflush(stdin);	
				if(I=='n'){
				system("CLS");
				printf("\n quale contatto desideri cancellare? ");

				for(x=0; x<aa; x++)
					printf("\n %d:	%s, %s \n\n", x+1, no[x], nu[x]);

				scanf("%d", &z);
                z--;  aa++;
				for(x=z; x<=aa; x++)
				{
				y=x+1;
					strcpy(no[x],no[y]);
				}
				for(x=z; x<=aa; x++)
				{
				y=x+1;
					strcpy(nu[x],nu[y]);
				}
				aa=aa-2;
				aa2--;

				for(x=0; x<aa; x++){
					x++;
					printf("\n %d:	%s, %s", x, no[x], nu[x]);
					x--;
				}
				}
				system("CLS");
				break;

			case 'm':
				printf("\n hai sbagliato? vuoi tornare indietro? \n [s = si] \n [n = no]\n");
				scanf("%c", &I);
				fflush(stdin);	
				if(I=='n'){
				system("CLS");
				printf("\n quale contatto desideri modificare? ");

				for(x=0; x<aa; x++)
					printf("\n %d:	%s, %s \n\n", x+1, no[x], nu[x]);

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
				system("CLS");
				z=1;
				for(x=0; x<aa; x++,z++)
					printf("\n %d	%s, %s", z, no[x], nu[x]);

				system("CLS");
				for(x=0; x<aa; x++)
					printf("\n %d:	%s, %s", x+1, no[x], nu[x]);
				}
				if(I=='s')
				system("CLS");
				break;

			case 'v':
				for(x=0; x<aa; x++)
				printf("\n %d:	%s, %s \n", x+1, no[x], nu[x]);

/*			case 'r':
				system("CLS");
				printf("\n scrivi carattere per carettere il contatto che vuoi trovare: ");
				x=0;
				while(sce!='t') {
					printf("\n cosa desideri fare? \n"); //faccio scegliere se cancellare la lettera, aggiungerne una o selezionare uno dei contatti usciti
					printf("\n [s = scrivi una lettera] \n [c = cancella l'ultima lettera] \n [t = telefona uno dei contatti presenti] ");
					fflush(stdin);
					scanf("%c", &sce);
					fflush(stdin);	
					switch(sce) {

						case 's':
							scanf("%c", &lett[z]);
							fflush(stdin);
							for(x=0; x<aa; x++)
									aa2=0;
									if(lett[z]==no[x][0]) {										
									strcpy(no2[x2], no[x]); //copio il contatto con corrispondenze su un array fatto per visualizzare le corrispondenze (no2)
									aa2++;
									if(aa2==1)
									w++;
									}
								
								printf("\n w = %d", w);
							z++;
						for(x2=0; x2<w; x2++){
							printf("\n %s", no[x2]);
						}
							break;

						case 'c':
						
							z--;
							lett[z]== ' ';
							for(x=0; x<x2;x++)
							printf("\n %s", no2[x]);
							break;
							
						default:
							printf("\n errore, %c", sce);
					}
     				}
					system("CLS");
					for(x=0, aa2=0; x<w; x++, w++, aa2++)
					printf("\n %d 	%s", aa2, no2[x]);
					
					printf("\n quale contatto desideri chiamare? ");
					scanf("%c", &sce);
					

					printf("\n ------ 	stai chiamando %s	------", no2[sce--]);
						
				}*/
		}
	}
}


