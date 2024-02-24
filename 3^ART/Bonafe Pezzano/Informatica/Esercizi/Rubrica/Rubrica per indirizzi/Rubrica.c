#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define lunghezza	15
#define righe 		100

void menu()
{
int ru;
	printf("-------- RUBRICA --------");
	printf("\nMENU': ");
	printf("\n 0 ---> Uscita.");
	printf("\n 1 ---> Visualizza Rubrica Ordinata.");
	printf("\n 2 ---> Inserisci uno o piu' contatti.");
	printf("\n 3 ---> Cancella uno o piu' contatti.");
	printf("\n 4 ---> Cerca un nome.");
	printf("\n 5 ---> Cerca un numero.");
	printf("\n 6 ---> Stampa la rubrica in un file .csv (esportabile in Office).");
	printf("\n 7 ---> Stampa la rubrica in un file .html.");
	printf("\n 99 ---> Aiuto online.");
	printf("\n\n\n                Inserisci la scelta: ");
		
		scanf("%d",&ru);
		fflush(stdin);
}

int ordinamento(int* totcontatti, char A[*totcontatti][lunghezza], char B[*totcontatti][lunghezza])
{
int i,j,k;
char a[lunghezza],b[lunghezza];
	
for(i=0;i<(*totcontatti-1);i++)
{
  for(j=i+1;j<*totcontatti;j++)
  {
  	k=strcmp(A[i],A[j]);  //Compara due nomi        
  	if(k>0)   //Se la prima è maggiore (viene dopo in ordine alfabetico) k>0
	  { 
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


int inserimento(int totelementi, char A[totelementi][lunghezza], char B[totelementi][lunghezza])
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

int cancellazione(int totelementi, char A[totelementi][lunghezza], char B[totelementi][lunghezza])
{
int deletecontact,l,i,r,j;
	printf("\n Quanti contatti vuoi eliminare? ");
		scanf("%d",&deletecontact);
		fflush(stdin);
		
	for(l=0;l<deletecontact;l++)
	{
		system("CLS");
	printf("\n Contatti:");
     	for(i=0;i<totelementi;i++)
     	   printf("\n %d ---> %s / %s",i,A[i],B[i]);
	printf("\n Quale contatto vuoi cancellare? (digita il numero) ");
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

void ricerca_nomi (int totelementi, char A[totelementi][lunghezza], char B[totelementi][lunghezza])
{
int a,i,j,trovato,posizione;
char s[lunghezza];
	
	system("CLS");
	printf("\n Quanti nomi vuoi cercare?\n");
	scanf("%d",&a);
	for(j=0;j<a;j++)
	{
		printf("\nInserisci il nome da ricercare: ");
		scanf("%s",&s);
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

void ricerca_numeri (int totelementi, char A[totelementi][lunghezza], char B[totelementi][lunghezza])
{
int i,a,j,trovato,posizione;
char s[lunghezza];

	system("CLS");
	printf("\n Quanti numeri vuoi cercare?\n");
	scanf("%d",&a);
	for(j=0;j<a;j++)
	{
		printf("\nInserisci il numero da ricercare: ") ;
		scanf("%s",&s) ;
		trovato=0 ;
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

int main() 
{
int i,ru,totcontatti=0,ordinato=0;
char numeri[righe][lunghezza],nomi[righe][lunghezza],a[lunghezza],b[lunghezza];


// Numeri e nomi provvisori contenenti nella rubrica.
strcpy(numeri[0],"3451111111"); 
strcpy(numeri[1],"3455555555");
strcpy(numeri[2],"3454444444");
strcpy(numeri[3],"3453333333");
strcpy(numeri[4],"3452222222");
strcpy(nomi[0],"arianna");
strcpy(nomi[1],"zane");
strcpy(nomi[2],"sonia");
strcpy(nomi[3],"enrico");
strcpy(nomi[4],"bonafe");
totcontatti=5;

do{

menu(&ru);

switch(ru){
	
	case 1: //visualizza
		if(totcontatti==0)
			printf("\n\n La rubrica è vuota...");
		if(ordinato==0)
			ordinato=ordinamento(&totcontatti,nomi,numeri);
		fflush(stdin);
			  		
		for(i=0;i<totcontatti;i++)
     	   printf("\n %d ---> %s / %s",i,nomi[i],numeri[i]);
		printf("\n");
		system("PAUSE");
	break;
					
	case 2: //inserimento
		totcontatti=inserimento(totcontatti,nomi,numeri);
		ordinato=0;
	break;
		
	case 3:  //cancellazione
	if(ordinato==0)	
		ordinato=ordinamento(&totcontatti,nomi,numeri);
	totcontatti=cancellazione(&totcontatti,nomi,numeri);
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
		
	break;
	
	case 7: //salvataggio .html
		
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
