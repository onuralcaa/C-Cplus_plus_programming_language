//BTK akademi C programlama e�itimi 9.12.2023
//Onur ALACA

#include <stdio.h>
#include <locale.h>
#include <string.h>


/*
sadece belirli de�erler alabilen liste i�lemlerinde kullan�l�r. �rnek Kan gruplar�...
*/
enum seviyeler {
	dusuk = 12, //bu �ekilde tan�mlama yap�l�r ise di�er de�erlerde buna g�re deger al�r. 13, 14 gibi.Ayr� ayr� degerde tan�mlanabilir.
	orta,
	yuksek
};

int main()
{
	enum seviyeler odasicakligi = dusuk; //0 degerini dondurur. orta 1, yuksek 2 degerlerini dondurur.
	enum seviyeler yukseklik = yuksek;
	
	printf("%d", odasicakligi);
	printf("\n%d", yukseklik);
		
	return 0;
}
