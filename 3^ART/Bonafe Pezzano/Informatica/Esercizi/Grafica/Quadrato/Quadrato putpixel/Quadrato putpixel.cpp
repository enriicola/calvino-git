#include <stdio.h>
#include <iostream>
#include <graphics.h>

int main(void)

{  int i;
   initwindow(1500,1500,"Mia Finestra");   
   
   for(i=100;i<500;i++)
   putpixel(100,i,WHITE);
   
   for(i=100;i<500;i++)
   putpixel(i,500,WHITE);
   
   for(i=500;i>100;i--)
   putpixel(500,i,WHITE); 
   
   for(i=500;i>100;i--)
   putpixel(i,100,WHITE);    
   
   setfillstyle (SOLID_FILL,GREEN); 
   floodfill (300,300,WHITE);

   while( !kbhit() );  
   closegraph();
   return 0;

}


