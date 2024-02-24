/*Riempire in modo casuale una matrice con dei caratteri e calcolarne la frequenza*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
int   c,x,x2,y2,y,i,freq[26]; 

for(i=0;i<26;i++)
   freq[i]=0;

printf("Quanto è lunga la matrice?");
scanf("%d",&x2);
y2=x2;
char  m[y][x],b;

srand(time(NULL));
c=0;
for(x=0;x<x2;x++) //Ciclo che ci sposta di riga in riga nella matrice
{
  for(y=0;y<y2;y++)  //Ciclo che ci sposta orizzontalmente nella matrice
  {
  	c=rand()%26 +65;   //Randomizzazione di un numero tra 65 e 90
	b=(char) c;  //Assegna il numero "c" in carattere alla variabile "b"
	m[y][x]=b; 
	printf("%3c",m[y][x]);
	
	freq[(int)m[y][x]-(int)'A']++;  //Assegna il numero della lettera uscita alla posizione dell'indice dell'array
  }
printf("\n");
}
for(i=0;i<26;i++)  //Ciclo che controlla che vengano visualizzate solo le lettere presenti nella sequenza
	  if(freq[i]>0)
	    printf("\n %c--->%d",i+(int)'A',freq[i]);



	return 0;
}
