#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b, r;
    printf("\n ----------- DIVISIONE DI 2 NUMERI INTERI ------------\n");
    printf("\n Inserisci il primo numero:");
    scanf("%d",&a);  // Lettura del primo valore 
    printf("\n Inserisci il secondo numero:");
    scanf("%d", &b);  // lettura del primo valore 
    //---controlliamo che il divisore sia !=0
    if (b==0)
       printf("\n Errore divisione per zero!\n");
	else
	{
		r=a/b;
		printf("\n La Divisione di %d e %d vale %d:",a,b,r);
	 }
	return 0;
}
        
        
        
