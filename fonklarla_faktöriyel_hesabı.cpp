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
	
	printf("L�tfen fakt�riyelini almak istedi�iniz say�y� giriniz : ");
	scanf("%d" , &n);
	
	printf("\nFakt�riyel sonucu : %d" , fakt(n));
	
	return 0;
}
