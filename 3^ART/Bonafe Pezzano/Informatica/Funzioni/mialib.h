
//---- Menu usato per .....

int menu01 (char titolo[], int lingua)  //lingua 0=italiano 1= inglese
{
	int miascelta;  //variabile locale
	system("CLS");
if (lingua==0)	{
	printf ("\n\n%s\n\n", titolo);
	printf("\n 0) Uscita");
	printf("\n 1) Inserimento");
}
else
if (lingua==1)	{
	printf ("\n\n%s\n\n", titolo);
	printf("\n 0) Exit");
	printf("\n 1) Add");
}

	do {
		scanf("%d",&miascelta);
	}
    while (miascelta>1); 
  
	return (miascelta);
}

//------ documentazione della funzione
int max (int a, int b) { //ritorna il massimo fra due numeri

if (a>b)
    return (a);
 
 return (b) ;   

}

