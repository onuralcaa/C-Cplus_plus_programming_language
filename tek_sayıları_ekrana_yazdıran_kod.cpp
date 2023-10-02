#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void tek_fonk(int sayi)
{
	int i;
	
	for(i=0 ; i<sayi ; i++)
	{
		if(i % 2 == 1 )
		printf("%d " , i);
	}
}

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int n;
	
	printf("Bir sayý giriniz:");
	scanf("%d" , &n);
	
	tek_fonk(n);
	
	return 0;
}
