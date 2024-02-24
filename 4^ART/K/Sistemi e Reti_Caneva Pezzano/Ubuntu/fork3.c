#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define N 20

void main (){
int pid; //pid_t
//int p, status;
bool x;
int i=0, s=0, fibonacci[N];
printf("\n\n\nInizio processo");
pid = fork();

if(pid==0){ //processo figlio
   if(x){
      printf("\n\n\nSono il figlio, pid: %d", getpid());

      for(s=250;s<500;s++){
         fibonacci[s]=fibonacci[s-1]+fibonacci[s-2];		
         printf("\n%d) %d", s, fibonacci[s]);
         //sleep(1);
      }
   }
}
else{
   if(pid>0){ //processo padre
      printf("\n\n\nSono il padre, pid: %d", getpid());

      fibonacci[0]=1;
      printf("\n0) %d", fibonacci[0]);
      fibonacci[1]=1;
      printf("\n1) %d", fibonacci[1]);

      for(i=2;i<250;i++){
         fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];		
         printf("\n%d) %d", i, fibonacci[i]);
         //sleep(1);
      }
      x=true;
	
   }
      //p=wait(&status);
   else
      printf("\n\n\nErrore nella fork!");
}
}
