//BTK akademi C programlama e�itimi 10.11.2023

#include <stdio.h>

int main()
{
	int sayi1, sayi2;
	int toplam, fark, carpim, mod;
	float bolum;
	
	/*
	* Kullan�c�dan say� alma
	*/
	printf("Lutfen iki sayi giriniz : ");
	scanf("%d %d", &sayi1, &sayi2 );
	
	//* i�aretinin ad� "ASTER�SK"tir.
	
	toplam = sayi1 + sayi2;
	fark = sayi1 - sayi2;
	carpim = sayi1 * sayi2;
	bolum = (float)sayi1 / sayi2;
	mod = sayi1 %sayi2;
	
	//Sonu�lar� ekrana yazd�r.
	
	printf("Toplam : %d \n", toplam);
	printf("Fark : %d \n", fark);
	printf("Carpim : %d\n", carpim);
	printf("Bolum : %.2f\n" , bolum);
	printf("Mod : %d\n", mod);
	
	
	
	
	return 0;
}
