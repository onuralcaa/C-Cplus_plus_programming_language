#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int sayiIste()
{
	int sayi;
	printf("L�tfen bir say� giriniz : ");
	scanf("%d" , &sayi);
	
	if(sayi==0)
	exit(0);
	
	else
	sayiIste();
}



main()
{
	setlocale(LC_ALL , "Turkish");
	
	sayiIste();	
	
	return 0;
}
