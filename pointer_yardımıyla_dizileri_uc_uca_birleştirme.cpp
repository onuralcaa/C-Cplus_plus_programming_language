#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 50

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int dizi1[MAX] , dizi2[MAX];
	int *sayi1 , *sayi2;
	int i,n;
	
	printf("Dizinizin kaç elemanlý olacaðý bilgisini giriniz :");
	scanf("%d" , &n);
	sayi1 = dizi1;
	sayi2 = dizi2;
	
	for(i=0 ; i<n ; i++)
	{
		scanf("%d" , *(sayi1+i));
	}
	
	
	
	
	
	return 0;
	
	
}
