#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int fakt(int n)
{
	int faktor=1;
	
	if(n==0 || n==1)
	{
	
	}
	
	else
	{
		faktor = n*fakt(n-1);
	}
		
	return faktor;	
}

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int sayi;
	printf("Lütfen faktoriyelini almak istediðiniz sayýyý giriniz : ");
	scanf("%d" , &sayi);
	
	int sonuc = fakt(sayi);
	
	printf("Faktöriyel : %d" , sonuc);
	
	return 0;
}
