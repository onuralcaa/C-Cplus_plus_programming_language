#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	char kullanici_adi[3] = "Onur";
	
	/*
	printf("L�tfen bir kullan�c� ad� giriniz :");
	scanf("%s" , &kullanici_adi);
	*/
	
    if(kullanici_adi == "Onur")
   	printf("giri� yapt�n�z...");
	
	else
	printf("ge�ersiz kullan�c� ad�...");
	
	
	
		
	
	
	//printf("%s" , kullanici_adi);
	
	
	
	return 0;
}
