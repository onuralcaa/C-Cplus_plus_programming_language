#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int i=0 , n;
	int toplam=0;
    
	printf("L�tfen bir say� giriniz: ");
	scanf("%d" , &n);
	
	while(i<= n)
	{
		toplam=toplam+i;
		i++;
		
		}	
	
	printf("\nToplam de�eri : %d " , toplam);

	return 0;
}
