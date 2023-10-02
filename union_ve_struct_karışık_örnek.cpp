#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	struct araba{
		int satis;
		union{
			int fiyat;
			char marka[20];
		}bilgi;
	}Araba1;
	
	/*
	Struct yapýsý oluþturulurken isimlendirme 
	yapýldýðý için sonradan yapýlmasýna gerek yoktur.
	*/
	
	Araba1.satis = 0;
	strcpy(Araba1.bilgi.marka , "Amadol");
	
	Araba1.satis = 1;
	Araba1.bilgi.fiyat = 20000;
	
	printf("%d" , Araba1.bilgi.fiyat);
		
	return 0;
}
