#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	char cumle[100];
	
	printf("Bir cumle veya kelime giriniz : ");
	gets(cumle);
	
	int i=0;
	
	while(cumle[i])
	{		
		i++;		
	}
	
	printf("Cumlenizdeki karakter sayýsý : %d" , i);
		
	return 0;
}
