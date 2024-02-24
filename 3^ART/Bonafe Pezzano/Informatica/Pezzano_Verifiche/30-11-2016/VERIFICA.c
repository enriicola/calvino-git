#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int NL,i,l2;
	char s[10],l;
	
	printf("\n Digita la parola : \n");
    gets(s);
    NL=strlen(s);
    
    printf("\n Inserisci una lettera: ");
    scanf("%c",&l);
    l2=0;
    
      for(i=0;i<=NL;i++)
      {
       if(l==s[i])
       {
        l2++;
        i++;
       }
       else
       {
    	i++;
	   }
      }
      l2++;
    printf("\n La lettera '%c' e' presente nella parola '%s' %d volte",l,s,l2);
  
}

