//BTK akademi C programlama eðitimi 9.12.2023
//Onur ALACA

#include <stdio.h>
#include <locale.h>
#include <string.h>


/*
sadece belirli deðerler alabilen liste iþlemlerinde kullanýlýr. Örnek Kan gruplarý...
*/
enum seviyeler {
	dusuk = 12, //bu þekilde tanýmlama yapýlýr ise diðer deðerlerde buna göre deger alýr. 13, 14 gibi.Ayrý ayrý degerde tanýmlanabilir.
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
