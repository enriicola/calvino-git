/*CONTROLARE I PRIMI 50 NUMERI VEDENDO SE SONO PARI O DISPARI, DIVIDENDO IL CALCOLO IN DUE PROCESSI*/
#include <stdio.h>
#include <stdlib.h>

void main (){
//int p, status;
int i;
pid_t pid;
printf("\nCiaoo");
pid=fork();

if(pid==0){
   printf("\nSono il figlio. Il mio pid è %d",getpid());
   printf("\nIl pid di mio padre è %d\n\n\n", getppid());

   printf("\nStampo i numeri pari:");
   for(i=0;i<50;i++){ //cerca i numeri pari
      if(i%2==0)
   	printf("\n%d",i);
   }
}
else   if(pid>0){
          printf("\nSono il padre. Il mio pid è %d",getpid());
	  printf("\nIl pid di mio figlio è %d\n\n\n", pid);
	  //p=wait(&status);

        printf("\nStampo i numeri dispari:");
        for(i=0;i<50;i++){ //cerca i numeri dispari
           if(i%2!=0)
   	      printf("\n%d",i);
        }

	}
	else
	   printf("Errore nella fork");


}


