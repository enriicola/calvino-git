#include <stdio.h>
#include <iostream>
#include <graphics.h>

int main(void)

{  int i;
   initwindow(1500,1500,"Mia Finestra");   
   
   setcolor(WHITE);
   line(100,100,100,500);
   line(100,500,500,500);   
   line(500,500,500,100);   
   line(500,100,100,100);   
   setfillstyle (SOLID_FILL,RED); 
   floodfill (300,300,WHITE);

   while( !kbhit() );  
   closegraph();
   return 0;

}

