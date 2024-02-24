#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <iostream>
#include <graphics.h>
#include <windows.h>

int main(void)
{
	int NL,NLI,E,ME,T,i,k,c,x,y,x2,p;
    char L,PSB[27],PS[25];
    
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
     
    printf("IMPICCATO GAME");
    printf("\n  \n");
    printf("\n DIGITA LA PAROLA SEGRETA: \n");
    gets(PS);
    printf("\n DIGITA IL NUMERO MASSIMO DI ERRORI CHE IL GIOCATORE PUà FARE: ");
    scanf("%d",&ME);

    system("CLS");
    
    x2=0;
    NL=strlen(PS);
    NLI=0;
    E=0;
    c=0;
    p=2;
    char PT[NL+1];
    for(k=0;k<NL;k++)
	     PT[k]='-';
    PT[k]='\0';
   
    for(c=0;c<27;c++)
	     PSB[c]=' ';
	PSB[c-1]='\0';
    
    c=0;
    	fflush(stdin);
		while(NLI<NL && E<ME)
    	{
    		fflush(stdin);
    	printf("IMPICCATO GAME\n");
    	printf("\n Puoi fare massimo %d errori.\n",ME);
    	printf("\n Hai fatto %d errori.\n",E);
    	printf("\n %s\n",PT);
        printf("\n Lettere sbagliate: %s\n",PSB);
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
			    T=1;
			    NLI++;
		    }
    		i++;
		}
    	if(T==0)
    	{
    	   E++;
    	   
    	   	if(c==0)
    	   		PSB[c++]=L;
    	   	else 
			{
				while(p<26)
    	        { 
		          if(L==PSB[p])
		          {
						T=0;
		          }
		          else
		          {
		    			PSB[p]=L;	
			      }
    		       p++;
		        }
				
				PSB[c++]='-';
		   		PSB[c++]=L;
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
