#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void yerDegistir(int *ptr1, int *ptr2)
{
	int gecici;
	gecici=*ptr1;
	*ptr1=*ptr2;
	*ptr2=gecici;
	
	printf("\nSay�lar�n�z�n yer de�i�tirmi� hali.");
	printf("%d - %d" , *ptr1, *ptr2);
	
	
}

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int a,b;
	
	int *ptr1 ,*ptr2;
	
	ptr1=&a;
	ptr2=&b;
	
	printf("L�tfen iki adet say� giriniz:");
	scanf("%d%d", &a,&b);
	
	yerDegistir(ptr1,ptr2);	
	
	return 0;
}
