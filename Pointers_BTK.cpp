//BTK akademi C programlama eðitimi 19.02.2023
//Onur ALACA

//Ýþaretçiler...

#include <stdio.h>

int main()
{
	//deðiþken tanýmlamalarý
	
	char karakter = 'c';
	int tamsayi = 1;
	float gercel_Sayi = 10.4f;
	long long buyuk_tamsayi = 980798798ll;
	
	printf("Karakter degiskeninin degeri : %c, karakter degiskenin adresi : %u\n", karakter, &karakter);
	printf("Tamsayi degiskeninin degeri : %d, tamsayi degiskenin adresi : %u\n", tamsayi, &tamsayi);
	printf("Gercel sayi degiskeninin degeri : %f, gercel sayi degiskenin adresi : %u\n", gercel_Sayi, &gercel_Sayi);
	printf("Buyuk tam sayi degiskeninin degeri : %lld, buyuk tam sayi degiskenin adresi : %u\n", buyuk_tamsayi, &buyuk_tamsayi);
	
	//lld kavramý
	
	
	return 0;
}
