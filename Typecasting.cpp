//BTK akademi C programlama eðitimi 10.11.2023
//Onur ALACA

#include <stdio.h>

int main()
{
	int sayi1 = 17, sayi2 = 5;
	
	int tamsayi_bolme_sonucu;
	float gercel_bolme_sonucu_float;
	double gercel_bolme_sonucu_double;
	int gercel_bolme_sonucu_tamsayi;
	
	tamsayi_bolme_sonucu = sayi1 / sayi2;
	printf("Tam sayi bolme sonucu : %d\n", tamsayi_bolme_sonucu);
	
	gercel_bolme_sonucu_float = (float)sayi1 / sayi2;
	printf("Gercel sayi bolme sonucu float : %f\n", gercel_bolme_sonucu_float);
	
	gercel_bolme_sonucu_double = (double)sayi1 / sayi2;
	printf("Gercel sayi bolme sonucu double : %f\n", gercel_bolme_sonucu_double);
	
	gercel_bolme_sonucu_tamsayi = (int)sayi1 / sayi2;
	printf("Gercel sayi bolme sonucu int : %d\n", gercel_bolme_sonucu_tamsayi);
	
	
	
	
	
	return 0;
}
