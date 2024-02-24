#include <stdio.h>
#include <iostream>
#include <graphics.h>
int main( )
{ 
    int x,y,i;
	initwindow( 640 , 480 , "Mia Finestra" );
	setcolor(BLUE);
	circle(200,200,120);
	
	setcolor(WHITE);
	circle(450,200,120);
	
	setcolor(RED);
	circle(700,200,120);	
	
	setcolor(YELLOW);
	circle(320,330,120);
	
	setcolor(GREEN);
	circle(575,330,120);
	
	while( !kbhit() ); 
    
	closegraph( );
    
	return( 0 );
	
	}
