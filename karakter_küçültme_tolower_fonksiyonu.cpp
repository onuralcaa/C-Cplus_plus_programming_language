#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL , "Turkish");
	
	char karakter; 
	
	printf("L�tfen bir karakter giriniz:");
	scanf("%c" , &karakter);
	
	if((karakter >= 'A') && (karakter <= 'Z' ))
	{
		printf("\nGirdi�iniz karakter : %c" ,karakter); //BURADA tolower fonksiyonu kullan�lmas� gerekiyordu.
	}
	
	
	else
	printf("HATA...k���k karakter girdiniz...");
	
	return 0;
}
