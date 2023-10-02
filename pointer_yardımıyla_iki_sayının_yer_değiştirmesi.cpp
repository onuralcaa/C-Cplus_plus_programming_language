#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void yerDegistir(int *ptr1, int *ptr2)
{
	int gecici;
	gecici=*ptr1;
	*ptr1=*ptr2;
	*ptr2=gecici;
	
	printf("\nSayýlarýnýzýn yer deðiþtirmiþ hali.");
	printf("%d - %d" , *ptr1, *ptr2);
	
	
}

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int a,b;
	
	int *ptr1 ,*ptr2;
	
	ptr1=&a;
	ptr2=&b;
	
	printf("Lütfen iki adet sayý giriniz:");
	scanf("%d%d", &a,&b);
	
	yerDegistir(ptr1,ptr2);	
	
	return 0;
}
