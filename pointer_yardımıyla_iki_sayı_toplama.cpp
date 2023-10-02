#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int sayi1,sayi2;
	
	int *ptr1,*ptr2;
	
	ptr1=&sayi1;
	ptr2=&sayi2;
	
	printf("Lütfen bir sayý giriniz : ");
	scanf("%d%d" , ptr1,ptr2);
	
	printf("\n%d", *ptr1+*ptr2);
	

	
	return 0;
}
