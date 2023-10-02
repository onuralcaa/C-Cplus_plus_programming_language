#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


main()
{
	setlocale(LC_ALL , "Turkish");
	
	char isim[30] , soyad[30];
	
	printf("Ýsminizi giriniz:");
	gets(isim);
	
	printf("Soyadýnýzý giriniz:");
	fgets(soyad , sizeof(soyad) , stdin);
	
	
	printf(" %s %s" , isim  , soyad);
	
	return 0;
}
