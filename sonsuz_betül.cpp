#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void betul()
{
	int i;
	
	while(1)
	{
		printf("  Sonsuz  ");
		if(i==100)
		printf("\n");
	}
}
main()
{
	setlocale(LC_ALL , "Turkish");
	
	printf("Betülün inatçılık seviyesi hesaplanıyor.\n");
	betul();
	
	return 0;
}
