#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int listele(int n)
{
	if(n==0)
	printf("%d\n" , n);
	
	else
	{
		printf("%d\n" , n);
		listele(n-1);
	}
}
main()
{
	setlocale(LC_ALL , "Turkish");
	int sayi;
	printf("L�tfen bir say� giriniz : ");
	scanf("%d" , &sayi);
	
	listele(sayi);
	
	return 0;
}
