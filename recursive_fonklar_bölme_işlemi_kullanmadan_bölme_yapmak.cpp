#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int bolum(int bolunen , int bolen)
{
	if(bolen == 0)
	return 0;
	
	else if(bolunen-bolen==0)
	return 1;
	
	else if(bolunen<bolen)
	return 0;
	
	else
	return (1+bolum(bolunen-bolen , bolen));
}

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int a,b;
	
	printf("B�l�nen say�y� giriniz :");
	scanf("%d" , &a);
	
	printf("B�len say�y� giriniz: ");
	scanf("%d" , &b);
	
	printf("\nSonu� : %d" , bolum(a,b));
	printf("\nKalan :%d" , a-(bolum(a,b)*b));
	
	return 0;
}
