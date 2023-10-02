#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int fibonacci(int n)
{
	if(n<=0)
	return 0;
	
	else if(n==1)
	return 1;
	
	else
	return(fibonacci(n-2)+ fibonacci(n-1));
}

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int sayi;
	printf("Kaç adet sayý oluþturmak istiyorsunuz : ");
	scanf("%d" , &sayi);
	
	int i;
	for(i=0 ; i<sayi ; i++)
	{
		printf("%d\n" , fibonacci(i));
	}

	return 0;
}
