#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>
#include <iostream>
#include <graphics.h>
#include <windows.h>

int main(void)
{
	int NL,NLI,E,ME,T,i,k,c,N,p,x,x2,y,j,r,v;
    char L,PSB[27],PS[400],M[11][400];
    
    initwindow(1500,1500,"Impiccato");  
	
    setcolor(BLUE);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR,4);
    outtextxy(50,50,"IMPICCATO GAME");
       	      for(x=180;x<420;x++)
              putpixel(x,100,WHITE);
              for(x=200;x<400;x++)
            	 putpixel(x,120,WHITE);
              for(y=550;y>100;y--)
             	 putpixel(180,y,WHITE);
              for(y=550;y>120;y--)
             	 putpixel(200,y,WHITE);
              for(x=200;x<320;x++)
            	  putpixel(x,550,WHITE);
              for(x=180;x>60;x--)
              	putpixel(x,550,WHITE);
              for(x=60;x<320;x++)
            	  putpixel(x,570,WHITE);
              for(y=550;y<570;y++)
             	 putpixel(60,y,WHITE);
              for(y=550;y<570;y++)
             	 putpixel(320,y,WHITE);
              for(y=100;y<170;y++)
             	 putpixel(420,y,WHITE);
              for(y=120;y<170;y++)
             	 putpixel(400,y,WHITE);
              for(x=400;x<420;x++)
             	 putpixel(x,170,WHITE);
              setfillstyle(SOLID_FILL,LIGHTGRAY);
              floodfill(220,560,WHITE);
    
     
      strcpy(M[0],"mamma");
      strcpy(M[1],"telecomando");
      strcpy(M[2],"autoveicolo");
	  strcpy(M[3],"pressatore");
	  strcpy(M[4],"superiorità numerica");
	  strcpy(M[5],"parole staccate");
	  strcpy(M[6],"apelle, figlio d'apollo. fece una palla di pelle di pollo. tutti i pesci vennero a galla per ammirare la palla di pelle di pollo, fatta da apelle, figlio d'apollo.");
	  strcpy(M[7],"iron maiden, metallica, motorhead, e così a caso... i queen. belli loro <3.");
	  strcpy(M[8],"i saw susie sitting in a shoe shine shop. she sits where she shines, and she shines where she sits.");
	  strcpy(M[9],"betty botter bought some butter but, said she, the butter's bitter. if i put it in my batter, it will make my batter bitter. but a bit of better butter will make my bitter batter better. so she bought some better butter, better than the bitter butter, put it in her bitter batter, made her bitter batter better. so it was better betty botter bought some better butter.");
	  strcpy(M[10],"se nella vita vedi tutto grigio, sposta l'elefante.");	  
	  
    srand((unsigned int) time(NULL));
       v=rand() %11;
       
    
    switch(v)
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
    		NL=20;
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
    		NL=75;
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
    
    strcpy(PS,M[v]);
        
   // NL=strlen(M[v]);
    NLI=0; E=0; c=0; p=0; j=0; r=0; x2=0;
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
			    NLI++;
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
		       
		if(ME<8 && E==ME)
		    {
              for(y=170;y<200;y++)
              	putpixel(410,y,WHITE);
              setcolor(WHITE);
              circle(410,220,20);
              setfillstyle(SOLID_FILL,WHITE);
              floodfill(410,220,WHITE);
              for(y=240;y<300;y++)
             	 putpixel(410,y,WHITE);
              for(y=240,x=410;y<270 && x<(450);y++,x++)
              	putpixel(x,y,WHITE);
              for(y=240,x=410;y<270 && x>370;y++,x--)
              	putpixel(x,y,WHITE);
              for(y=300,x=410;y<330 && x<480;y++,x++)
              	putpixel(x,y,WHITE);
              for(y=300,x=410;y<330 && x>340;y++,x--)
              	putpixel(x,y,WHITE);
		    }

            
    	   switch(E)
    	   {
    	   case 8:
	    	    for(y=300,x=410;y<330 && x>340;y++,x--)
	            putpixel(x,y,WHITE);
	           delay(500);
	           break;
          
           case 7:
	    	   	for(y=300,x=410;y<330 && x<480;y++,x++)
	            	putpixel(x,y,WHITE);
	           delay(500);
	           break;
            
           case 6:
	    	   	for(y=240,x=410;y<270 && x>370;y++,x--)
	           	 putpixel(x,y,WHITE);
	        delay(500);
	        break;
	            
           case 5:
	    	   	for(y=240,x=410;y<270 && x<450;y++,x++)
	            	putpixel(x,y,WHITE);
	           delay(500);
	           break;
	            
    	   case 4:
	    	   	for(y=240;y<300;y++)
	           		 putpixel(410,y,WHITE);
	        delay(500);
	        break;
	            
    	   case 3:
	    	   	setfillstyle(SOLID_FILL,WHITE);
	            floodfill(410,220,WHITE);
	        delay(500);
	        break;
	            
    	   case 2:
	    	   	setcolor(WHITE);
	            circle(410,220,20);
	        delay(500);
	        break;
	           
    	   case 1:  
	    	   	for(y=170;y<200;y++)
	            	putpixel(410,y,WHITE);
	           delay(500);
	           break;
	           
           case 0:
           		break; 
				     
		 default:
       	   	x2=x2+150;
		   	
		   	  for(y=170;y<200;y++)
              	putpixel((410+x2),y,WHITE);
              	
              setcolor(WHITE);
              circle((410+x2),220,20);
              setfillstyle(SOLID_FILL,WHITE);
              floodfill((410+x2),220,WHITE);
              
              for(y=240;y<300;y++)
              	putpixel((410+x2),y,WHITE);
              	
              for(y=240,x=(410+x2);y<270 && x<(450+x2);y++,x++)
              	putpixel(x,y,WHITE);
              for(y=240,x=(410+x2);y<270 && x>(370+x2);y++,x--)
              	putpixel(x,y,WHITE);
              for(y=300,x=(410+x2);y<330 && x<(480+x2);y++,x++)
              	putpixel(x,y,WHITE);
              for(y=300,x=(410+x2);y<330 && x>(340+x2);y++,x--)
              	putpixel(x,y,WHITE);
              
              delay(500);
	           break;
           }
		       
		   // PlaySound("F:\\Bonafe Pezzano\\Informatica\\Esercizi\\Suoni\\Ms_Pacman_Death", NULL, SND_ASYNC);
		}
		
		system("CLS");
    
  }
    	    
    	if(E==ME)
    	{
    	 printf("\n ----------GAME OVER----------");
		 printf("\n  \n");
    	 printf("\n La parola era %s",PS);
    	 //PlaySound("F:\\Bonafe Pezzano\\Informatica\\Esercizi\\Suoni\\Ms_Pacman_Death", NULL, SND_ASYNC);
		}
    	 
    	else
		{
			printf("\n ----------YOU WIN!----------");	
			printf("\n  \n");
	     printf("\n %s",PT);
	     printf("\n  \n");
	     printf("\n Hai fatto %d errori su %d .",E,ME);
		}
		
   while( !kbhit() );  
   closegraph();
   return 0;
}
