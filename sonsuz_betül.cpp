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
	
	printf("Bet�l�n inat��l�k seviyesi hesaplan�yor.\n");
	betul();
	
	return 0;
}
