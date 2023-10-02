#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef enum renkler{
	yesil,
	kirmizi,
	siyah
}renk;

main()
{
	setlocale(LC_ALL , "Turkish");
	
	renk onur=siyah;
	
	printf("%d" , onur);
	
	return 0;
}
