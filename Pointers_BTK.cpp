//BTK akademi C programlama e�itimi 19.02.2023
//Onur ALACA

//��aret�iler...

#include <stdio.h>

int main()
{
	//de�i�ken tan�mlamalar�
	
	char karakter = 'c';
	int tamsayi = 1;
	float gercel_Sayi = 10.4f;
	long long buyuk_tamsayi = 980798798ll;
	
	printf("Karakter degiskeninin degeri : %c, karakter degiskenin adresi : %u\n", karakter, &karakter);
	printf("Tamsayi degiskeninin degeri : %d, tamsayi degiskenin adresi : %u\n", tamsayi, &tamsayi);
	printf("Gercel sayi degiskeninin degeri : %f, gercel sayi degiskenin adresi : %u\n", gercel_Sayi, &gercel_Sayi);
	printf("Buyuk tam sayi degiskeninin degeri : %lld, buyuk tam sayi degiskenin adresi : %u\n", buyuk_tamsayi, &buyuk_tamsayi);
	
	//lld kavram�
	
	
	return 0;
}
