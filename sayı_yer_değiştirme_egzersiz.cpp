#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int onur, canberk ,semih;
	
	printf("L�tfen iki adet say� giriniz : ");
	scanf("%d %d" , &onur, &canberk);
	
	printf("Onur un �u an ki de�eri = %d \n" , onur);
	printf("Canberk in �u an ki de�eri = %d" , canberk);
	

	while(1)
	{
		char deger;
		
		printf("\nk tu�una ve ard�ndan ENTER a bas�n.");
		scanf("%c" , &deger);
		
		if(deger == 'k')
		break;
			
	}	
		semih = onur;
		onur=canberk;
		canberk=semih;
		
	printf("\n\nOnur un yeni de�eri = %d \n" , onur);
	printf("Canberk in yeni de�eri : %d" , canberk);
	
	printf("\n\nENTER tu�una basarak program� kapatabilirsiniz.");
		
	return 0;
}
