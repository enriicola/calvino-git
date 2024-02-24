#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void)
{
	int NL,NLI,E,ME,T,i,k,c;
    char L,PS[25],PSB[26];
    
    printf("IMPICCATO GAME");
    printf("\n  \n");
    printf("\n DIGITA LA PAROLA SEGRETA: \n");
    gets(PS);
    printf("\n DIGITA IL NUMERO MASSIMO DI ERRORI CHE IL GIOCATORE PUà FARE: ");
    scanf("%d",&ME);

    system("CLS");
    
    NL=strlen(PS);
    NLI=0;
    E=0;
    char PT[NL+1];
    for(k=0;k<NL;k++)
	{
     PT[k]='-';
	}
    PT[k]='\0';
   
    	fflush(stdin);
		while(NLI<NL && E<ME)
    	{
    	printf("IMPICCATO GAME");
    	printf("\n Puoi fare massimo %d errori.",ME);
    	printf("\n Hai fatto %d errori.",E);
    	printf("\n %s",PT);
        printf("\n La parola segreta contiene %d lettere.",NL);
        printf("\n Lettere sbagliate: %s",PSB);
    	printf("\n Inserisci una lettera: ");
    	scanf("%c",&L);
    	fflush(stdin);
    	
    	PSB[c]=L;
		PSB[c+1]='-';
		c=c+2;
		printf("\n Lettere sbagliate: %s",PSB);
		
	    i=0;
		T=0;
    	while(i<NL)
    		{ 
    		   if(L==PS[i])
			   {
    		    PT[i]=L;
    		    T=1;
    		    NLI++;
    		    }
    		i++;     	//fflush(stdin);
			}
    	if(T==0)
    	{
    	   E++;     	//fflush(stdin);
    	   
		   // PlaySound("C:\\Users\\Commander\\Desktop\\test.wav", NULL, SND_ASYNC);
		   
		}
		system("CLS");

      }
    	    
    	if(E>=ME)
    	       {
    	 printf("\n GAME OVER");
    	 printf("\n La parola era %s",PS);
		}
    	 
    	else
		{
			printf("\n %s",PT);
	     printf("\n YOU WIN!");	
	     printf("\n Hai fatto %d errori su %d.",E,ME);
	     system("PAUSE");
		}

}
