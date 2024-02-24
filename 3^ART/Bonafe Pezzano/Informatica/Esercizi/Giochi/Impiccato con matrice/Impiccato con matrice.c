#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>

int main(void)
{
	int NL,NLI,E,ME,T,i,k,c,N,p,x,j,r,a[26];
    char L,PSB[27],PS[400],M[11][400];
     
      strcpy(M[0],"mamma");
      strcpy(M[1],"telecomando");
      strcpy(M[2],"autoveicolo");
	  strcpy(M[3],"pressatore");
	  strcpy(M[4],"superiorita' numerica");
	  strcpy(M[5],"parole staccate");
	  strcpy(M[6],"apelle, figlio d'apollo. fece una palla di pelle di pollo. tutti i pesci vennero a galla per ammirare la palla di pelle di pollo, fatta da apelle, figlio d'apollo.");
	  strcpy(M[7],"iron maiden, metallica, motorhead, e cosi' a caso... i queen. belli loro <3.");
	  strcpy(M[8],"i saw susie sitting in a shoe shine shop. she sits where she shines, and she shines where she sits.");
	  strcpy(M[9],"betty botter bought some butter but, said she, the butter's bitter. if i put it in my batter, it will make my batter bitter. but a bit of better butter will make my bitter batter better. so she bought some better butter, better than the bitter butter, put it in her bitter batter, made her bitter batter better. so it was better betty botter bought some better butter.");
	  strcpy(M[10],"se nella vita vedi tutto grigio, sposta l'elefante.");	  
	  
    srand((unsigned int) time(NULL));
       x=rand() %11;

    printf("%d",x);
    
    switch(x)
    {
    	case 0:
    		NL=5;
    		ME=3;
    		break;
    		
    	case 1:
    		NL=11;
    		ME=4;
    		break;
    		
    	case 2:
    		NL=11;
    		ME=4;
    		break;
    		
    	case 3:
    		NL=10;
    		ME=4;
    		break;
    	
    	case 4:
    		NL=21;
    		ME=7;
    		break;
    	
    	case 5:
    		NL=15;
    		ME=6;
    		break;
    	
    	case 6:
    		NL=163;
    		ME=8;
    		break;
    	
    	case 7:
    		NL=76;
    		ME=9;
    		break;
    	
    	case 8:
    		NL=99;
    		ME=8;
    		break;
    	
    	case 9:
    		NL=368;
    		ME=8;
    		break;
    	
    	case 10:
    		NL=51;
    		ME=8;
    		break;
	}
    
    strcpy(PS,M[x]);
    
   // NL=strlen(M[x]);
    NLI=0; E=0; c=0; p=0; j=0; r=0;
    char PT[NL+1];
    for(k=0;k<NL;k++)
	     PT[k]='-';
    PT[k]='\0'; 
   
    for(c=0;c<27;c++)
	     PSB[c]=' ';
	PSB[c-1]='\0';
    
    c=0;
    
    for(i=0;i<NL;i++)
	     {
       if(PS[i]==' ')
	     PT[i]=' ';
	     
	   if(PS[i]==',')
	     PT[i]=',';
	     
       if(PS[i]=='.')
	     PT[i]='.';
	     
	   if(PS[i]=='!')
	     PT[i]='!';
		 	 
	   if(PS[i]=='\?')
	     PT[i]='\?'; 
	     
	   if(PS[i]=='<')
	     PT[i]='<'; 
		  
	   if(PS[i]=='\'')
	     PT[i]='\'';
	     
	   if(PS[i]=='3')
	     PT[i]='3';	 	 
		 }
          
    	fflush(stdin);
		while(NLI<NL && E<ME)
    	{
    		fflush(stdin);
    	printf("IMPICCATO GAME\n");
    	printf("\n Puoi fare massimo %d errori.\n",ME);
    	printf("\n Hai fatto %d errori.\n",E);
    	printf("\n %s\n",PT);
        printf("\n Lettere sbagliate: %s\n",PSB);
        fflush(stdin);
    	printf("\n Inserisci una lettera: ");
        scanf("%c",&L);
    	fflush(stdin);
    	
	    i=0;
		T=0;
    	while(i<NL)
    	{ 
		   if(L==PS[i])
		   {
			    PT[i]=L;
			    T=1;  //abbiamo trovato la lettera
			    
				//[97,122]
			    if(a[(int)L-97]==0)
			    {
			    	a[(int)L-97]=1;
					NLI++;
				}
		    }
    		i++;
		}
    	if(T==0)
    	{
    	   E++;  //ho sbagliato, aumentano gli errori
    	   
    	   	if(j==0)
			   {
			   	PSB[j++]=L;  //prima lettera sbagliata
			   }
    	   		   	   	
			else 
			   {
				for(p=0;p<26;p++)
    	        { 
		          if(L!=PSB[c])   //se trova una lettera già digitata non fa niente, altrimenti stampa un trattino e la lettera sbagliata
		                   {
						PSB[++c]='-';
		   		        PSB[++c]=L;
						   }
				 
		        }
		       }
		   // PlaySound("F:\\Bonafe Pezzano\\Informatica\\Esercizi\\Suoni\\Ms_Pacman_Death", NULL, SND_ASYNC);
		}
		
		system("CLS");
    
  }
    	    
    	if(E>=ME)
    	{
    	 printf("\n ----------GAME OVER----------");
		 printf("\n  \n");
    	 printf("\n La parola era %s",PS);
    	 printf("\n");
    	 system("PAUSE");
    	 //PlaySound("F:\\Bonafe Pezzano\\Informatica\\Esercizi\\Suoni\\Ms_Pacman_Death", NULL, SND_ASYNC);
		}
    	 
    	else
		{
			printf("\n ----------YOU WIN!----------");	
			printf("\n  \n");
	     printf("\n %s",PT);
	     printf("\n  \n");
	     printf("\n Hai fatto %d errori su %d .",E,ME);
	     printf("\n");
		 system("PAUSE");
		}
		
}

