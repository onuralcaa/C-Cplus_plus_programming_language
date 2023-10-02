#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 100
main()
{
	setlocale(LC_ALL , "Turkish");
	
	char dizi[MAX]= {'O' , 'N' , 'U' , 'R'};
	char *sayi1;
	char *sayi2;
	char kopya_dizi[MAX];
	int i;
	sayi2 = kopya_dizi;
	
	for(sayi1 = dizi ;  sayi1 < dizi+ MAX ; sayi1++)
	{
		*sayi2 = *sayi1;
		sayi2++;
	}
	
	printf("\nOrjinak dizi :");
	
	for(i=0 ; i<MAX  ;i++)
	{
		printf("%c" , *(dizi+i));
	}
	
	printf("\nKopya dizi :");
	
	for(i=0 ; i<MAX ; i++)
	{
		printf("%c" , *(kopya_dizi+i));
	}
	
	return 0;
}
