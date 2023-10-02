#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	int N;
	int i,j,gecici;
	printf("Kaç adet eleman ile çalýþmak istersiniz : ");
	scanf("%d" , &N);
	int dizi[N];
	
	for(i=0 ; i<N ; i++)
	{
		printf("%d. sayý : ", i+1);
		scanf("%d" , &dizi[i]);
	} 
	
	printf("\nDizinizin elemanlarý : ");
	printf("\n========================\n");
	
	for(i=0 ; i<N ; i++)
	{
		printf("%d " , dizi[i]);
	}
	
	for(i=0 ; i<(N-1) ; i++)
	{
		for(j=0 ; j<N-1-i ; j++)
		{
			if(dizi[j]<dizi[j+1])
			{
				gecici=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecici;
			}
		}
	}
	
	printf("\nSýralanmýþ dizi elemanlarý : \n");
	for(i=0 ; i<N ; i++)
	{
		printf("%d ", dizi[i]);
	}
	
	
	
	
	return 0;
}
