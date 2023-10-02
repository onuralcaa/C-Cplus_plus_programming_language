#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 40
main()
{
	char cumle[MAX];
	
	setlocale(LC_ALL , "Turkish");
	
	printf("Bir cümle giriniz: ");
	gets(cumle);
	
	char *ptr;
	
	ptr = cumle;
	
	for(ptr = cumle ; *ptr ; ptr++)
	{
		
	}
	
	printf("\nDizinizin boyu : %d" , ptr-cumle);
	
	return 0;
}
