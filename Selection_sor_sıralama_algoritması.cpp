#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	int N,konum;
	int i,j,gecici;
	printf("Ka� adet eleman ile �al��mak istersiniz : ");
	scanf("%d" , &N);
	int dizi[N];
	
	for(i=0 ; i<N ; i++)
	{
		printf("%d. say� : ", i+1);
		scanf("%d" , &dizi[i]);
	} 
	
	printf("\nDizinizin elemanlar� : ");
	printf("\n========================\n");
	
	for(i=0 ; i<N ; i++)
	{
		printf("%d " , dizi[i]);
	}
	
	
	for(i=0 ; i<(N-1);i++)
	{
		konum = i;
		for(j=i+1 ; j<N ;j++)
		{
			if(dizi[konum]>dizi[j])
			{
				konum = j;
			}
		}
	}
	
	if(konum != i)
	{
		gecici = dizi[i];
		dizi[i]=dizi[konum];
		dizi[konum]=gecici;
	}
	
	printf("\nS�ralanm�� hali : \n");
	for(i=0 ; i<N ; i++)
	{
		printf("%d " , dizi[i]);
	}
		
	return 0;
	
}
