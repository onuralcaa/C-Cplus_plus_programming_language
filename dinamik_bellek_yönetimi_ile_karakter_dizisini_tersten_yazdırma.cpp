#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define MAX 50
main()
{
	setlocale(LC_ALL,"Turkish");
	char *cumle;
	int i;
		
	cumle=(char *)malloc(MAX*sizeof(char));
	
	printf("Lütfen bir cümle veya kelime giriniz : ");
	gets(cumle);
	
	for(i=strlen(cumle)-1 ; i>=0 ; i--)
	{
		printf("%c" , *(cumle+i));
	}
	
	free(cumle);
	
	return 0;
}
