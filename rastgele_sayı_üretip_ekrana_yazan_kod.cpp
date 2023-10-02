#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>//srand fonksiyonun çalýþmasý için gerekli
#define MAX 50
main()
{
	setlocale(LC_ALL , "Turkish");
	int i;
	int sayi[MAX];
	srand(time(0));
	
	for(i=0 ; i<MAX ; i++)
	{
		sayi[i] = rand()%50;
		printf("%d " , sayi[i]);
	}
	
	return 0;
}
