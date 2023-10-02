#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	char kullanici_adi[3] = "Onur";
	
	/*
	printf("Lütfen bir kullanýcý adý giriniz :");
	scanf("%s" , &kullanici_adi);
	*/
	
    if(kullanici_adi == "Onur")
   	printf("giriþ yaptýnýz...");
	
	else
	printf("geçersiz kullanýcý adý...");
	
	
	
		
	
	
	//printf("%s" , kullanici_adi);
	
	
	
	return 0;
}
