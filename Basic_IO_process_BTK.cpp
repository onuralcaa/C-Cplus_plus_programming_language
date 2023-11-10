//BTK akademi C programlama eðitimi 10.11.2023

#include <stdio.h>

int main()
{
	int sayi1, sayi2;
	int toplam, fark, carpim, mod;
	float bolum;
	
	/*
	* Kullanýcýdan sayý alma
	*/
	printf("Lutfen iki sayi giriniz : ");
	scanf("%d %d", &sayi1, &sayi2 );
	
	//* iþaretinin adý "ASTERÝSK"tir.
	
	toplam = sayi1 + sayi2;
	fark = sayi1 - sayi2;
	carpim = sayi1 * sayi2;
	bolum = (float)sayi1 / sayi2;
	mod = sayi1 %sayi2;
	
	//Sonuçlarý ekrana yazdýr.
	
	printf("Toplam : %d \n", toplam);
	printf("Fark : %d \n", fark);
	printf("Carpim : %d\n", carpim);
	printf("Bolum : %.2f\n" , bolum);
	printf("Mod : %d\n", mod);
	
	
	
	
	return 0;
}
