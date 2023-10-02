#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL , "Turkish");
	
	int matris[5][5];
	int toplam,i,j = 0;
	
	
	printf("Matrisin deðerlerini giriniz:");
	
	for( i=0 ; i<5 ; i++)
	{
		for( j=0 ; j<5 ; j++)
		{
		 scanf("%d" , &matris[i][j]);	
		
		toplam+=matris[i][j];
					
		}			
	}
	
	i=0 , j=0;
	
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			printf("% d ", matris[i][j]);
		}
		printf("\n");		
	}

	printf("\n girilen matris deðerlerinin toplamý : %d" , toplam);
	
	
	return 0;
}
