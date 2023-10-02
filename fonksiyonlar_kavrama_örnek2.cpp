#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
 int ussunu_al(int a , int b , int *onur);

main()
{
	int sayi1 = 4 , sayi2=5 , sonuc;
	
	ussunu_al(sayi1 , sayi2 , &sonuc);
	
	printf("%d" , sonuc);  
	
	return 0;
}

int ussunu_al(int a , int b , int *onur)
{
	*onur = 1;
	
	int i;
	
	for(i=0 ; i<b ; i++)
	{
		*onur = *onur*a;
	}

	
	
	
	
}
