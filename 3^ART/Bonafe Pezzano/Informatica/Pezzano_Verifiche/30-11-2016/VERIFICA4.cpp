#include <stdio.h>
#include <iostream>
#include <graphics.h>

int main(void)

{  int x,y,i;
   initwindow(15000,15000,"FINESTRA");   
   
   line(50,50,50,100);
   line(50,100,100,100);
   line(100,100,100,50);
   line(100,50,50,50);
   
   x=0; y=x;
   for(i=0;i<50;i++)
   {
   x++;
   y++;
   putpixel(50+x,50+y,WHITE);
   }
   
   
   x=0; y=x;
   for(i=0;i<50;i++)
   {
   x--;
   y++;
   putpixel(100+x,50+y,WHITE);
   }

   
   while( !kbhit() );  
   closegraph();
   return 0;

}




