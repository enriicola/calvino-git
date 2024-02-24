#include <stdio.h>
#include <iostream>
#include <graphics.h>
#define k 100
#define m 500

int main(void)

{  int x,y,u,i;
   initwindow(15000,15000,"Ocenano Pacifico");   
   setcolor(BLUE);
   settextstyle(TRIPLEX_FONT, HORIZ_DIR,4);
   outtextxy(50,50,"OCEANO PACIFICO");
   
   
   for(x=400;x<900;x++) //bordi nave
   putpixel(x,650,WHITE);
   setcolor(WHITE);
   line(900,650,1000,550);
   for(x=1000;x>300;x--)
   putpixel(x,550,WHITE);
   setcolor(WHITE);
   line(300,550,400,650);
   
   for(y=550;y>400;y--) //torri
   putpixel(450,y,WHITE);
   for(x=450;x<550;x++)
   putpixel(x,400,WHITE);
   for(y=400;y<550;y++)
   putpixel(550,y,WHITE);
   for(y=550;y>300;y--)
   putpixel(750,y,WHITE);
   for(x=750;x<850;x++)
   putpixel(x,300,WHITE);
   for(y=300;y<550;y++)
   putpixel(850,y,WHITE);
   line(480,550,480,505);
   line(480,505,515,505);
   line(515,505,515,550);
   
   
   for(x=751;x<849;x++) //striscia verde
   putpixel(x,519,GREEN);
   for(x=751;x<849;x++)
   putpixel(x,549,GREEN);
   for(y=519;y<549;y++)
   putpixel(751,y,GREEN);
   for(y=519;y<549;y++)
   putpixel(849,y,GREEN);
   setfillstyle(SOLID_FILL,GREEN);
   floodfill(800,530,GREEN);
    
   setcolor(WHITE); //oblò
   circle(500,595,16); 
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(500,595,WHITE);
   setcolor(LIGHTGRAY);
   circle(500,595,13); 
   setfillstyle(SOLID_FILL,BLUE);
   floodfill(500,595,LIGHTGRAY);
   
   setcolor(WHITE);
   circle(650,595,16);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(650,595,WHITE);
   setcolor(LIGHTGRAY);
   circle(650,595,13); 
   setfillstyle(SOLID_FILL,BLUE);
   floodfill(650,595,LIGHTGRAY);
   
   setcolor(WHITE);
   circle(800,595,16);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(800,595,WHITE);
   setcolor(LIGHTGRAY);
   circle(800,595,13); 
   setfillstyle(SOLID_FILL,BLUE);
   floodfill(800,595,LIGHTGRAY);
   
   setcolor(WHITE);
   circle(500,430,16);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(500,430,WHITE);
   setcolor(LIGHTGRAY);
   circle(500,430,13); 
   setfillstyle(SOLID_FILL,BLUE);
   floodfill(500,430,LIGHTGRAY);
   
   
    
    for(i=0;i<k;i++) //fumo che si muove
    {
    setcolor(LIGHTGRAY);
    circle(800,240,50);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    floodfill(800,240,LIGHTGRAY);
    delay(m);
    setcolor(BLACK);
	circle(800,240,50);
	setfillstyle(SOLID_FILL,BLACK);
    floodfill(800,240,BLACK);
    
    setcolor(LIGHTGRAY);
    circle(910,150,50);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    floodfill(910,150,LIGHTGRAY);
    delay(m);
    setcolor(BLACK);
	circle(910,150,50);
	setfillstyle(SOLID_FILL,BLACK);
    floodfill(910,150,BLACK);
    
    setcolor(LIGHTGRAY);
    circle(1030,80,50);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    floodfill(1030,80,LIGHTGRAY);
    delay(m);
    setcolor(BLACK);
	circle(1030,80,50);
	setfillstyle(SOLID_FILL,BLACK);
    floodfill(1030,80,BLACK);
    
    /*setcolor(LIGHTGRAY);
    circle(1150,55,50);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    floodfill(1150,55,LIGHTGRAY);
    delay(m);
    setcolor(BLACK);
	circle(1150,55,50);
	setfillstyle(SOLID_FILL,BLACK);
    floodfill(1150,55,BLACK);*/

	}
   
   
   
   while( !kbhit() );  
   closegraph();
   return 0;

}



