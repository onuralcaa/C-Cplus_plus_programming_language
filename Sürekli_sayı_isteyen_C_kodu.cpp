#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void sayi_iste()
{
	int sayi;
	
	while(1)
	{
		printf("L�tfen bir say� giriniz : ");
		scanf("%d" , &sayi);
		
		if(sayi <= 0)
		break;		
		
	}
}


main()
{
	setlocale(LC_ALL , "Turkish");
	
	sayi_iste();
	
	return 0;
}
