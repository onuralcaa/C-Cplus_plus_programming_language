#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int onur, canberk ,semih;
	
	printf("Lütfen iki adet sayý giriniz : ");
	scanf("%d %d" , &onur, &canberk);
	
	printf("Onur un þu an ki deðeri = %d \n" , onur);
	printf("Canberk in þu an ki deðeri = %d" , canberk);
	

	while(1)
	{
		char deger;
		
		printf("\nk tuþuna ve ardýndan ENTER a basýn.");
		scanf("%c" , &deger);
		
		if(deger == 'k')
		break;
			
	}	
		semih = onur;
		onur=canberk;
		canberk=semih;
		
	printf("\n\nOnur un yeni deðeri = %d \n" , onur);
	printf("Canberk in yeni deðeri : %d" , canberk);
	
	printf("\n\nENTER tuþuna basarak programý kapatabilirsiniz.");
		
	return 0;
}
