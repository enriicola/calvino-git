#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,z,k;
    char p[25];
    
    printf("Questo programma capisce se la parola digitata in input è' palindroma o no.");
    printf("\n Digita la parola: \n");
    gets(p);
    
    n=strlen(p);
    z=n/2;
    for(k=0;k<z;k++)
    {
    if(p[i]==p[n])
     {
     i++;
     n--;
     printf("\n La parola digitata e' palindroma.");
     }
    else
     {
    printf("\n La parola digitata non e' palindroma.");
     } 
    }
	 
}
