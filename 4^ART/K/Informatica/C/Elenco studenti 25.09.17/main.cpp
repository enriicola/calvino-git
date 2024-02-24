#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <unistd.h>
#define L 20

struct Studente
{
	char nome[L];
	char cognome[L];
	int giorno;
	int mese;
	int anno;
	char comune_nascita[L];
	int matricola;
};
typedef struct Studente studente;
studente * elenco;	int ru;

int menu()
{
	system("CLS");
	printf("----------MENU'----------");
	printf("\n0) Esci dal programma.");
	printf("\n1) Visualizza l'elenco.");
	printf("\n2) Inserisci uno o piu' studenti.");
	//printf("\n3) Elimina uno o piu' studenti.");
	printf("\n4) Modifica la dimensione dell'elenco.");
	printf("\n5) Aiuto Web.");
	 printf("\n\n	   Inserisci la scelta: ");
	 	 scanf("%d", &ru);
	return ru;
}

int main()
{
	int n=0, r=0, i , j, x, t=0;
 	
 	do
	{
	x=menu();
	switch(x)
	{
		case 0:
			system("CLS");
			printf("\n\n\n\n			A PRESTO!");
			sleep(1);
			break;
		case 1:
			if(n==0){
			printf("	Non sono presenti studenti registrati.");
			sleep(3);
			break;	}
	printf("\n ELENCO DEGLI STUDENTI\n");
	for(i=0; i<n; i++)
	{
		printf("\n\n\n\nStudente n%d \n\n", i+1);
		
		printf("Nome: %s \n\n", elenco[i].nome);
		
		printf("Cognome: %s \n\n", elenco[i].cognome);
		
		printf("Data di nascita: %d-%d-%d \n\n", elenco[i].giorno, elenco[i].mese, elenco[i].anno);
		
		printf("Comune di nascita: %s \n\n", elenco[i].comune_nascita);
	}
	system("PAUSE");
			break;
		case 2:
			if(t==1){
				printf("\n	 Hai già inizializzato l'elenco degli studenti una volta!\n 	Se vuoi aggiungere degli studenti, inserisci '4' dal Menu' principale.");
				sleep(5);
				break;
				}
	printf("Inserire il numero di alunni presenti nella classe: \n");
 	scanf("%d", &n);
 	elenco= new studente[n];
 	
	for(i=0; i<n; i++)
	{
		printf("Inserire il nome dello studente %d:\n", i+1);
		 scanf("%s", elenco[i].nome);
	     
	    printf("\nInserire il cognome dello studente %d:\n", i+1);
		 scanf("%s", elenco[i].cognome);
	
		printf("\nInserire il giorno di nascita dello studente %d:\n", i+1);
		 scanf("%d", &elenco[i].giorno);
		
		printf("\nInserire il mese di nascita dello studente %d:\n", i+1);
	     scanf("%d", &elenco[i].mese);	
	    
	    printf("\nInserire l'anno di nascita dello studente %d:\n", i+1);
	     scanf("%d", &elenco[i].anno);
		
		printf("\nInserire il comune di nascita dello studente %d:\n", i+1);	
		 scanf("%s", elenco[i].comune_nascita);
		system("CLS");
	}t=1;
			break;
		case 3:
			
			break;
		case 4:
	printf("\n Il numero totale degli studenti e' corretto? (%d)\n\n'1' per confermare\n'0' per ampliare l'elenco degli studenti: ", n);
	 scanf("%d", &r);
	
	if(r==0)
	{
		printf("\nInserisci la nuova lunghezza dell'elenco: \n");
		 scanf("%d", &n);
		studente * elenco2;
		elenco2=new studente[n];
		
		
		
		for(i=0; i<n_vecchio; i++)
			elenco2[i] = elenco[i];
			
		for(j=i; j<n; j++)
		{
			printf("Inserire il nome dello studente %d:\n", j+1);
			 scanf("%s", elenco[j].nome);
		    
		    printf("\nInserire il cognome dello studente %d:\n", j+1);
			 scanf("%s", elenco[j].cognome);
		
			printf("\nInserire il giorno di nascita dello studente %d:\n", j+1);
			 scanf("%d", &elenco[j].giorno);
			
			printf("\nInserire il mese di nascita dello studente %d:\n", j+1);
			 scanf("%d", &elenco[j].mese);	
		    
		    printf("\nInserire l'anno di nascita dello studente %d:\n", j+1);
			scanf("%d", &elenco[j].anno);
			
			printf("\nInserire il comune di nascita dello studente %d:\n", j+1);	
			 scanf("%s", elenco[j].comune_nascita);
			system("CLS");
		}
	}
			break;
		case 5:
			printf("	Sito Web non disponibile.");
			sleep(1);
			break;
		default:
			printf("	DIGITA UN NUMERO VALIDO!");
			sleep(1);
			break;
	}	
}//do
while(ru!=0);
}
