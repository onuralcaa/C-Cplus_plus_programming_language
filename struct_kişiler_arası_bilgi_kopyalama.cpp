#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	struct ogrenci_bilgi{
		char ad[10];
		char soyad[10];
		int yas;
	};
	
	struct ogrenci_bilgi ogrenci1 , ogrenci2;
	
	strcpy(ogrenci1.ad , "Onur");
	strcpy(ogrenci1.soyad , "ALACA");
	ogrenci1.yas = 512;
	
	ogrenci2=ogrenci1;
	
	printf("%s  %s   %d" , ogrenci2.ad , ogrenci2.soyad , ogrenci2.yas);
	
	
	
	
	return 0;
}
