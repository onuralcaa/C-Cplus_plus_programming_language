#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int carpim(int sayi1 ,int sayi2)
{
	int onur=0;
	
	if(sayi2 == 1)
	{
		onur = sayi1;//en kritik nokta burasý
	}
	else if(sayi2==0)
	onur=0;
	
	else
	{
		onur = sayi1 + carpim(sayi1 , sayi2-1);
	}
	
	
	return onur;
}



main()
{
	setlocale(LC_ALL , "Turkish");
	
	int a,b;
	
	printf("Çarpmak istediðiniz iki adet sayýyý giriniz :");
	scanf("%d %d" , &a, &b);
	
	int sonuc = carpim(a,b);
	printf("Sonuç : %d" , sonuc);
	
	return 0;
}
