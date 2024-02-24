
#include <stdio.h>
#include <iostream>
#include <graphics.h>
//documentazione di tutte le funzioni:
//  https://www.cs.colorado.edu/~main/bgi/doc/
int main(void)

{  int i;
   /* initialize graphics window at 500 x 500 */
   initwindow(500, 500);
   
   setcolor (GREEN);   // costanti colore in maiuscolo
   line(0, 0, 100,100);
   line(0, 250, 500,250);
    
   setcolor  (RED); //...codici colore da 0  a 15
   circle (250,250,50);
   setcolor (WHITE);
   
   for (i=0; i<5; i++)
      circle (100,100,i*10);
   
    for (i=0; i<500; i++)
         putpixel(i, 100, YELLOW);  //... una linea fatta di pixel
    getch();   //wait for an input

   closegraph();
   return 0;

}


