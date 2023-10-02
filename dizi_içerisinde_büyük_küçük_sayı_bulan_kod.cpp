#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

buyukBul(int A[] , int boy)
{
	int max = A[0];
	int i;
	
	for(i=1 ; i<boy ; i++)
	{
		if(A[i]>max)
		max = A[i];
		
	}
	printf("\nDizinin en büyük sayýsý : %d" , max);
}

kucukBul(int A[] , int boy)
{
	int min=A[0];
	int j;
	
	for(j=0 ; j<boy ; j++)
	{
		if(A[j]<min)
		min=A[j];
	}
	
	printf("\nDizinin en küçük elemaný : %d" , min);
	
}


main()
{
	
	setlocale(LC_ALL , "Turkish");
	
	int boyut;
	
	
	printf("Dizinizin kaç elemanlý olacaðýný belirtiniz : ");
	scanf("%d" , &boyut);
	
	int dizi[boyut];
	int i;
	
	for(i=0  ; i<boyut ; i++)
	{
		printf(" %d. eleman : " , i+1);
		scanf("%d" , &dizi[i]);
	}
	
	buyukBul(dizi ,  boyut);
    kucukBul(dizi ,  boyut);	

	return 0;
}
