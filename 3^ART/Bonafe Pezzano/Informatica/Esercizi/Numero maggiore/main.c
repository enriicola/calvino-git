#include <stdio.h>
#include <math.h>
void main (void)
{
	
int n1,n2,n3,m;   // numero 1, numero 2, numero 3, maggiore
printf("\n Questo programma stabilisce quale dei 3 numeri digitati è il maggiore");
printf("\n ");
printf("\n Inserisci il primo numero: ");
scanf("%d",&n1);
printf("\n Inserisci il secondo numero: ");
scanf("%d",&n2);
printf("\n Inserisci il terzo numero: ");	
scanf("%d",&n3);	
	
	if(n1==n2 && n2==n3) {
		m==0;
		printf("\n I numeri inseriti sono equivalenti"); 
		}
		else;
		if(n1>=n2 && n1>=n3){
	    m==n1;
	    printf("\n Il numero maggiore e' %d",n1);
		}
		else;
		if(n2>=n1 && n2>=n3){
			m==n2;
			printf("\n Il numero maggiore e' %d",n2);
		}
         else;
         m==n3;
         printf("\n Il numero maggiore e' %d",n3);
         
		 }
