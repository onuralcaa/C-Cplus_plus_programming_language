//BTK akademi C programlama e�itimi 10.11.2023
//Onur ALACA

#include <stdio.h>

int main()
{
	float cm, metre, km;
	
	//Uzunlu�u cm cinsinden al
	printf("Uzunlugu santimetre turunden giriniz : ");
	scanf("%f", &cm);
	
	//Uzunluk �evrim i�lemleri
	metre = cm / 100.0;
	km = metre / 1000.0;
	
	printf("Metre cinsinden uzunluk : %.3f\n", metre);
	printf("Kilometre cinsinden uzunluk : %.3f", km);
	
	
	return 0;
}
