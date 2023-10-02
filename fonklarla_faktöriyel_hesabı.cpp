#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int fakt(int k)
{
	int i , sonuc=1;
	
	for(i=1 ; i<=k ; i++)
	{
		sonuc*=i;
	}
	
	return sonuc;
}


main()
{
	setlocale(LC_ALL , "Turkish");
	
	int n;
	
	printf("Lütfen faktöriyelini almak istediðiniz sayýyý giriniz : ");
	scanf("%d" , &n);
	
	printf("\nFaktöriyel sonucu : %d" , fakt(n));
	
	return 0;
}
