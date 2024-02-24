#include <stdio.h>
#include <stdlib.h>
#include "P:\\I3CI\\informatica\\Funzioni\\mialib.h" 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void vismat (int r, int c, int m[r][c] ){
	int i,j;
	for (i=0; i<r; i++){
			for (j=0; j<c; j++)
				printf("%5d", m[i][j]);
	    printf("\n");
	}

	}



void modmat (int r, int c, int m[r][c] ){
	int i,j;
	for (i=0; i<r; i++)
			for (j=0; j<c; j++)
				 m[i][j]=-1;

	}


	
int f1(int p1){   //p1 x valore
	p1=p1*100;
	printf("\n in f1 p1=%d",p1);
}

int f2(int *p1){   //p1 passato x riferimento
   int tmp=*p1;
   
	tmp=tmp*100 ;  //*p1= *p1 * 100
	*p1=tmp;
	printf("\n in f2 p1=%d",*p1);
}	


	
int main(int argc, char *argv[]) {
	int k, i=6,z=2, p=3, a=9;
	
	int kkk[3][3] = {{0,0,0},{0,1,3},{0,2,1}};
	
	vismat(3,3,kkk);
	printf("\n");
	modmat(3,3,kkk);
	vismat(3,3,kkk);
	
	//k=pow(3,max(i,max(a,p)));
	
	
	z=1;
	f1(z);  //---- Z E' PASSATA PER VALORE
	printf("\n nel main z=%d",z);
	
	
	
	z=1;   
	f2(&z);  // --- Z E' PASSATA PER RIFERIMENTO
	printf("\n nel main z=%d\n",z);
	
	
	
	
	printf( "%d", k);
	
	/*
	k=menu01( "----- AGENDA 5.0 ------",0);
	//------
	k=menu01( "----- AGENDA 5.0 ------",1);
	//------
	
	k=menu01( "----- Menu di cancellazione ------",0);
//-------
int f2(int *p1){
	int tmp=*p1;
	tmp=tmp*100;
	*p1=tmp;
	printf("\n in f2 p1=%d",tmp);
}	

	
	printf("\n hai scelto %d",k); */
	return 0;
}
