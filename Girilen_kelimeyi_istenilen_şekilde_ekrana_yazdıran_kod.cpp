#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	char cumle[100];
	printf("Lütfen bir cümle giriniz:");
	gets(cumle);
	
	int i=0;
	int sayac=0;
	
	while(i<strlen(cumle))
	{
		sayac=0;
		while(sayac<=i)
		{
			printf(" %c " , cumle[sayac] );
			sayac++;
			
		}
		printf("\n");
		i++;
	}
		
	return 0;
}
