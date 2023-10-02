#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

struct ogrenci {
	char ad[50];
	char soyad[50];
	int no;
};

main()
{
	
	setlocale(LC_ALL, "Turkish");
	
	struct ogrenci onur;
	
	onur.no = 512;
	strcpy(onur.ad , "Onur");
	strcpy(onur.soyad , "ALACA");
	
	
	printf("%s \t %s \t %d" , onur.ad , onur.soyad , onur.no);	
	
	
	return 0;
	
}
