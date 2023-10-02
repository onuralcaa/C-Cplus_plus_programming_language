#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int topla(int sayi3 , int sayi4)
{
	return sayi3+sayi4;
}



main()
{
	setlocale(LC_ALL , "Turkish");
	
	int sayi1 , sayi2 ;
	
	printf("Toplamak istediðiniz sayýlarý giriniz:");
	scanf("%d %d" , &sayi1 , &sayi2);
	
	printf("\nToplam : %d" , topla(sayi1 ,sayi2));
	
	return 0;
}
