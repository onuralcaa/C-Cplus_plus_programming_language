#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define A 3
#define B 2

void yazdir(int tab[A][B])
{
	int i,j;
	printf("\nMatrisin d�zenlenmi� hali:\n");
	
	for(i=0 ; i<A ; i++)
	{
		for(j=0 ; j<B ; j++)
		{
			printf("%4d", tab[i][j]);	
		}
		printf("\n");
	}	
	
}

void hesapla(int matris[A][B],int *max,int*min,int*toplam)
{
	*toplam= 0;
	*max , *min = matris[0][0];
	int i,j;
	
	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
		{
			if(matris[i][j]>*max)
			*max=matris[i][j];
			
			if(matris[i][j]<*min)
			*min=matris[i][j];
			
			*toplam = *toplam+matris[i][j];
		}
	}
		
}

int main()
{
	setlocale(LC_ALL , "Turkish");
	
	int matris[A][B];
	int i,j;
	printf("3 * 2 tipinde bir matris giriniz : \n");
	
	for(i=0 ; i<A ; i++)
	{
		for(j=0 ; j<B ; j++)
		{
			scanf("%d" , &matris[i][j]);
		}
	}
	
	yazdir(matris);
	
	int max,min,toplam;
	
	hesapla(matris,&max,&min,&toplam);
	
	printf("\nDizinin en b�y�k de�eri : %d\n" , max);
	printf("Dizinin en k���k de�eri : %d\n" , min );
	printf("Dizi elemanlar�n�n toplam� : %d" , toplam);
		
	return 0;
}
