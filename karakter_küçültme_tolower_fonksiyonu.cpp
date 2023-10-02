#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL , "Turkish");
	
	char karakter; 
	
	printf("Lütfen bir karakter giriniz:");
	scanf("%c" , &karakter);
	
	if((karakter >= 'A') && (karakter <= 'Z' ))
	{
		printf("\nGirdiðiniz karakter : %c" ,karakter); //BURADA tolower fonksiyonu kullanýlmasý gerekiyordu.
	}
	
	
	else
	printf("HATA...küçük karakter girdiniz...");
	
	return 0;
}
