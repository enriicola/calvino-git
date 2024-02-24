/*------------------------------------->	AGGIUNGERE SCELTA DEL NOME DEL FILE DA SALVARE, SCELTA DEL FILE DA CARICARE,
MEMORIE DINAMICHE, SCELTA DELL'ORDINAMENTO*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
//#include <iostream>   
#define LUNGHEZZA	15
#define RIGHE 		100

//aggiungere cognome, compleanno...
struct CONTATTO
{
	char nome[LUNGHEZZA];
	char numeri[LUNGHEZZA];
};
typedef struct CONTATTO contatto;

struct 	PROV
{
	char nome[LUNGHEZZA];
	char numeri[LUNGHEZZA];
};
typedef struct PROV prov;

struct rubrica[RIGHE];	struct array[RIGHE];
contatto c;	prov p;

FILE *fp;

int menu()
{
int ru=1;
	printf("	-------- RUBRICA --------");
	printf("\nMENU': ");
	printf("\n	0 ---> Uscita.");
	printf("\n	1 ---> Visualizza Rubrica Ordinata.");
	printf("\n	2 ---> Inserisci uno o piu' contatti.");
	printf("\n	3 ---> Cancella uno o piu' contatti.");
	printf("\n	4 ---> Cerca un nome.");
	printf("\n	5 ---> Cerca un numero.");
	printf("\n	6 ---> Stampa la rubrica in un file .csv (esportabile in Office).");
	printf("\n	7 ---> Stampa la rubrica in un file .html.");
	printf("\n	8 ---> Stampa la rubrica in un file .txt.");
	printf("\n	9 ---> Importa una rubrica esistente.");
	printf("\n	99 ---> Aiuto online.");
	printf("\n\n\n				Inserisci la scelta: ");
		scanf("%d",&ru);
		fflush(stdin);
		
		if(ru>9 || ru<0 && ru!=99){
			printf("\n\n DIGITA UN NUMERO VALIDO!");
			sleep(1);}
return ru;
}
//_________________________________________________________________________________________________________________________

int ordinamento(int totcontatti, char A[totcontatti][LUNGHEZZA], char B[totcontatti][LUNGHEZZA])
{
int i,j,k;
char a[LUNGHEZZA],b[LUNGHEZZA];

for(i=0;i<(totcontatti-1);i++)
{
	for(j=i+1;j<totcontatti;j++)
  {
  	k=strcmp(c.nome[i],c.nome[i],);	//Compara due nomi 
  	if(k>0)   //Se la prima è maggiore (viene dopo in ordine alfabetico) k>0
	  {	
	  	array[j]	=	
	  	
         strcpy(a,A[j]);  //In "a" abbiamo messo la parola j che viene prima
	       strcpy(b,B[j]);
	       
	     strcpy(A[j],A[i]); // "Spostiamo" la parola che viene dopo al posto di quella che viene prima
		   strcpy(B[j],B[i]);
		 
		 strcpy(A[i],a); // "Spostiamo" la parola che viene prima al posto di quella che viene dopo
		    strcpy(B[i],b);
      }
  }
  	
}
return 1;
}
//_________________________________________________________________________________________________________________________

int inserimento(int totelementi, char A[totelementi][LUNGHEZZA], char B[totelementi][LUNGHEZZA])
{
int addcontact,l,i;
	printf("\n Quanti contatti vuoi aggiungere? ");
		scanf("%d",&addcontact);
		fflush(stdin);
	for(l=0;l<addcontact;l++)
		{
		
			system("CLS");
			 printf("\n Digita il nome del nuovo contatto: ");
			 gets(A[totelementi]);
	 		 fflush(stdin);
			 printf("\n Digita il numero del nuovo contatto: ");
			 gets(B[totelementi]);
			fflush(stdin);
 			
     		totelementi++;
		}
return totelementi;
}
//_________________________________________________________________________________________________________________________

int cancellazione(int totelementi, char A[totelementi][LUNGHEZZA], char B[totelementi][LUNGHEZZA])
{
int deletecontact,l,i,r,j,b;
	printf("\n Quanti contatti vuoi eliminare? ");
		scanf("%d",&deletecontact);
		fflush(stdin);
		
		b=totelementi;
	for(l=0;l<deletecontact && deletecontact<=b;l++)
	{
		system("CLS");
	printf("\n Contatti:");
     	for(i=0;i<totelementi;i++)
     	   printf("\n %d ---> %s / %s",i,A[i],B[i]);
	printf("\n Quale contatto vuoi cancellare? (digita la posizione) ");
    scanf("%d",&r);
    		
	    for(j=r;j<totelementi;j++)
		{
        strcpy(A[j],A[j+1]);
        strcpy(B[j],B[j+1]);
    	}
    	totelementi--;   
    }
return totelementi;
}
//_________________________________________________________________________________________________________________________

void ricerca_nomi (int totelementi, char A[totelementi][LUNGHEZZA], char B[totelementi][LUNGHEZZA])
{
int a,i,j,trovato,posizione;
char s[LUNGHEZZA];
	
	system("CLS");
	printf("\n Quanti nomi vuoi cercare?\n");
	scanf("%d",&a);
	for(j=0;j<a;j++)
	{
		printf("\nInserisci il nome (completo) da ricercare: ");
		scanf("%s",&s);
		//getch(s);
		//delay(10000);
		trovato=0;
		for(i=0;i<totelementi && trovato==0;i++)
		{
			if(strcmp(s,A[i])==0)
			{
				trovato=1;
				posizione=i;
			}
		}
		if(trovato==1)
			printf("Il numero di '%s' e': %s\n",s,B[posizione]);
		else
			printf("Nessun '%s' e’ presente in rubrica\n",s);
	}
system("PAUSE");
}
//_________________________________________________________________________________________________________________________

void ricerca_numeri (int totelementi, char A[totelementi][LUNGHEZZA], char B[totelementi][LUNGHEZZA])
{
int i,a,j,trovato,posizione;
char s[LUNGHEZZA];

	system("CLS");
	printf("\n Quanti numeri vuoi cercare?\n");
	scanf("%d",&a);
	for(j=0;j<a;j++)
	{
		printf("\nInserisci il numero (completo) da ricercare: ");
		scanf("%s",s);
		//getch(s);
		//delay(10000);
		trovato=0;
		for(i=0;i<totelementi && trovato==0;i++)
		{
			if(strcmp(s,B[i])==0)
			{
				trovato=1;
				posizione=i;
			}
		}
		if(trovato==1)
			printf("Il numero digitato (%s) appartiene a: %s\n",s,A[posizione]);
		else
			printf("Nessun '%s' e’ presente in rubrica\n",s);
	}
system("PAUSE");
}
//_________________________________________________________________________________________________________________________

void salv_csv(int totelementi, char A[totelementi][LUNGHEZZA], char B[totelementi][LUNGHEZZA])
{
int i;
	//printf ("Con che nome vuoi salvare il file? ",a);
	//scanf("%s",&a);
	// AGGIUNGERE LA SCELTA DEL NOME DEL FILE
	
	fp=fopen("Salvataggi_rubrica/test.csv", "w");
	fprintf(fp,"\n Posizione;Nome;Numeri;");
	for(i=0;i<totelementi;i++)	   
		fprintf(fp,"\n %d;%s;%s;",i+1,A[i],B[i]);
	fclose(fp);
	printf("\n Creazione file completata! %d\n", totelementi);
	system("PAUSE");
	
//-----------------------	
	fp=fopen("Salvataggi_rubrica/contatti.txt", "w");
	for(i=0;i<totelementi;i++)
	{
		fprintf(fp,"%s",A[i]);
		fprintf(fp,"%s",B[i]);	
	}
	fclose(fp);
}
//_________________________________________________________________________________________________________________________

void salv_txt(int totelementi, char A[totelementi][LUNGHEZZA], char B[totelementi][LUNGHEZZA])
{
int i;	
	fp=fopen("Salvataggi_rubrica/contatti.txt", "w");
	for(i=0;i<totelementi;i++)
	{
		fprintf(fp,"%s",A[i]);
		fprintf(fp,"%s",B[i]);	
	}
	fclose(fp);
	printf("\n Creazione file completata! %d\n", totelementi);
	system("PAUSE");
}
//_________________________________________________________________________________________________________________________

void salv_html(int totelementi, char A[totelementi][LUNGHEZZA], char B[totelementi][LUNGHEZZA])
{
int i;
	fp=fopen("Salvataggi_rubrica/test.html", "w");
	fputs("<html><head><title> Mia Rubrica </title></head><body>", fp);
	fprintf(fp,"\n <table><tr><th>Posizione</th><th>Nome</th><th>Numeri</th></tr><tr></tr>");
	for(i=0;i<totelementi;i++)	   
		fprintf(fp,"\n<tr><th>%d</th><th>%s</th><th>%s</th></tr>",i+1,A[i],B[i]);
	fputs("</table></body></html>", fp);
	fclose(fp);
	printf("\n Creazione file completata!\n");
	system("PAUSE");
		
//-----------------------	
	fp=fopen("Salvataggi_rubrica/contatti.txt", "w");
	for(i=0;i<totelementi;i++)
	{
		fprintf(fp,"%s",A[i]);
		fprintf(fp,"%s",B[i]);	
	}
	fclose(fp);
}
//_________________________________________________________________________________________________________________________

void loadfrom(int *totcontatti, char A[RIGHE][LUNGHEZZA], char B[RIGHE][LUNGHEZZA])
{
   int i=0;
fp=fopen("Salvataggi_Rubrica/contatti.txt", "r");
if(fp==NULL)
	printf("\n\n ERRORE NELL'APERTURA DEL FILE");
	
	else
	*totcontatti=0;
	
	while(!feof(fp))
	{
		fscanf(fp, "%s", A[*totcontatti]);
		fscanf(fp, "%s", B[*totcontatti]);
		(*totcontatti)++;
	}	
fclose(fp);
printf("\n Importazione contatti completata!\n");
system("PAUSE");
}
//_________________________________________________________________________________________________________________________

int main() 
{
int i,ru,totcontatti=0,ordinato=0;
char numeri[RIGHE][LUNGHEZZA],nomi[RIGHE][LUNGHEZZA];

//contatti provvisari
strcpy(c.nome,"arianna");	strcpy(c.numeri,"1111111111");
strcpy(c.nome,"zane");		strcpy(c.numeri,"5555555555");
strcpy(c.nome,"sandro");	strcpy(c.numeri,"4444444444");
strcpy(c.nome,"bona");		strcpy(c.numeri,"3333333333");
strcpy(c.nome,"barbe");		strcpy(c.numeri,"2222222222");

do{

ru=menu();

switch(ru){
	
	case 0: //uscita
		system("CLS");
		printf("\n										A PRESTO!!");
		sleep(1);
	break;
	
	case 1: //visualizza
		if(totcontatti==0)
		{
			printf("\n\n La rubrica è vuota...\n");
			sleep(1);
		}
		
		else
		{
			/*	if(ordinato==0 && totcontatti!=0)
			{
			printf("\n La rubrica non è ordinata. Vuoi ordinarla? (s/n)\n");
			scanf("%s",r);
			if(r=='s')
				ordinato=ordinamento(totcontatti,nomi,numeri);
			}*/
			
			ordinato=ordinamento(totcontatti,nomi,numeri);
			
			
		fflush(stdin);
		system("CLS");
		
		for(i=0;i<totcontatti;i++)
     		printf("\n %d ---> %s / %s",i,nomi[i],numeri[i]);
		if(i=totcontatti)
			{
			printf("\n");
			system("PAUSE");
			}			
		}	
		
	break;
					
	case 2: //inserimento
		totcontatti=inserimento(totcontatti,nomi,numeri);
		ordinato=0;
	break;
		
	case 3:  //cancellazione
	if(ordinato==0)	
		ordinato=ordinamento(totcontatti,nomi,numeri);
	totcontatti=cancellazione(totcontatti,nomi,numeri);
	break;
	
	case 4: //ricerca nomi
	if(ordinato==0)	
		ordinato=ordinamento(totcontatti,nomi,numeri);
		ricerca_nomi(totcontatti,nomi,numeri);
	break;
	
	case 5: //ricerca numeri
	if(ordinato==0)	
		ordinato=ordinamento(totcontatti,nomi,numeri);
		ricerca_numeri(totcontatti,nomi,numeri);
	break;
	
	case 6: //salvataggio .csv
	if(ordinato==0)	
		ordinato=ordinamento(totcontatti,nomi,numeri);
	salv_csv(totcontatti,nomi,numeri);
	break;
	
	case 7: //salvataggio .html
	if(ordinato==0)	
		ordinato=ordinamento(totcontatti,nomi,numeri);
	salv_html(totcontatti,nomi,numeri);
	break;	
	
	case 8:	//salvataggio .txt
	salv_txt(totcontatti,nomi,numeri);
	break;
	
	case 9:   //importazione
	loadfrom(&totcontatti,nomi,numeri);
	break;
		
	case 99:  //aiuto online
	 printf("\n Il sito web non e' disponibile.\n");
	 system("PAUSE");
	break;
	 
	 	default:
			if(ru!=0)
		 	 printf("Digita un numero valido!");
}
system("CLS");
} // do
while(ru>0);
}
