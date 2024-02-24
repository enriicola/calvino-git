/*un cerchio che rimbalza lungo le "pareti" della finestra <----->
   per rallentare:
       (a)  for (zz=1; zz<999999; zz++)
                       ;    
       (b)  delay(valore intero)   es delay(100)  ritardo di 100 millisec */

#include <stdio.h>
#include <iostream>
#include <graphics.h>
#include <time.h>
#define T 15

int main(void)

{  int x,y,direzione,x2,y2,zz,i,s;
   initwindow(1000,1000,"Pong");   
   setcolor(BLUE);
   settextstyle(TRIPLEX_FONT, HORIZ_DIR,4);
   outtextxy(50,50,"Pong");
   
   x=500; y=x; y2=0; x2=y2;
   
   setcolor(WHITE);
   circle(x,y,70);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(x,y,WHITE);
   delay(T);
   setcolor(BLACK);
   circle(x,y,70);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(x,y,BLACK);
   
   srand((unsigned int) time(NULL));
   direzione=rand() %8+1;  
   printf("\n direzione= %d\n",direzione);
   
   do{
   switch(direzione)
   {
    case 1:
    	
    do
	{
		y2--;
   setcolor(WHITE);
   circle(x,y+y2,70);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(x,y+y2,WHITE);
   delay(T);
   setcolor(BLACK);
   circle(x,y+y2,70);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(x,y+y2,BLACK);
	} 
	while(direzione==1);
    break;
   	
    case 2:
    
	do
	{
		y2--;
		x2--;
   setcolor(WHITE);
   circle(x+x2,y+y2,70);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(x+x2,y+y2,WHITE);
   delay(T);
   setcolor(BLACK);
   circle(x+x2,y+y2,70);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(x+x2,y+y2,BLACK);
	}
	while(direzione==2);
    break;
    
    case 3:
    	
    do
	{
		x2--;
   setcolor(WHITE);
   circle(x+x2,y,70);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(x+x2,y,WHITE);
   delay(T);
   setcolor(BLACK);
   circle(x+x2,y,70);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(x+x2,y,BLACK);
	}
	while(direzione==3);
    break;
    
    case 4:
    	
    do
	{
		y2++;
		x2--;
   setcolor(WHITE);
   circle(x+x2,y+y2,70);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(x+x2,y+y2,WHITE);
   delay(T);
   setcolor(BLACK);
   circle(x+x2,y+y2,70);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(x+x2,y+y2,BLACK);
	}
	while(direzione==4);
    break;
    
    case 5:
    	
    do
	{
		y2++;
   setcolor(WHITE);
   circle(x,y+y2,70);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(x,y+y2,WHITE);
   delay(T);
   setcolor(BLACK);
   circle(x,y+y2,70);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(x,y+y2,BLACK);
    }
	while(direzione==5);
    break;
    
    case 6:
    	
    do
	{
		y2++;
		x2++;
   setcolor(WHITE);
   circle(x+x2,y+y2,70);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(x+x2,y+y2,WHITE);
   delay(T);
   setcolor(BLACK);
   circle(x+x2,y+y2,70);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(x+x2,y+y2,BLACK);
	}
	while(direzione==6);
    break;
    
    case 7:
    	
    do
	{
		x2--;
   setcolor(WHITE);
   circle(x+x2,y,70);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(x+x2,y,WHITE);
   delay(T);
   setcolor(BLACK);
   circle(x+x2,y,70);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(x+x2,y,BLACK);
	}
	while(direzione==7);
    break;
    
    case 8:
    	
    do
	{
		y2--;
		x2++;
   setcolor(WHITE);
   circle(x+x2,y+y2,70);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(x+x2,y+y2,WHITE);
   delay(T);
   setcolor(BLACK);
   circle(x+x2,y+y2,70);
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(x+x2,y+y2,BLACK);
	}
	while(direzione==8);
    break;
   }
   }
   while((x<930 && x>0) && (y>0 && y<930));

printf("bellaaaa");
   system("PAUSE");

   
   
   while( !kbhit() );  
   closegraph();
   return 0;
}
