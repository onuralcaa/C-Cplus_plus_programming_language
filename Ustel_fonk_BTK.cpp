//BTK akademi C programlama e�itimi 10.11.2023
//Onur ALACA

#include <stdio.h>
#include <math.h>

int main()
{
	double taban, kuvvet, sonuc;
	
	//Kullan�cdan iki say� al
	printf("Taban degrini giriniz : ");
	scanf("%lf", &taban);
	
	printf("Kuvvet degeriniz giriniz : ");
	scanf("%lf", &kuvvet);
	
	//taban^kuvvet degerini hesapla
	sonuc = pow(taban, kuvvet);
	
	printf("Sonuc degeri : %.3f", sonuc);
	
	
	
	
	
	return 0;
}
