#include <stdio.h>
#include <stdlib.h>

void main (){
pid_t pid;
//int p, status;
printf("\nCiaoo");
pid = fork();

if(pid==0){ //processo figlio
   printf("\nSono il figlio");
   printf("\nIl mio pid è %d",getpid());
   printf("\nIl pid di mio padre è %d", getppid());
}
else{
   if(pid>0){ //processo padre
      printf("\nSono il padre");
      printf("\nIl mio pid è %d",getpid());
      printf("\nIl pid di mio figlio è %d", pid);
      //p=wait(&status);
   }
   else
      printf("Errore nella fork");
}
}


