#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int N,i;
	int *p;
	int toplam=0;
	int ortalama;
	
	
	printf("Ka� adet say� ile �al��mak istersiniz : ");
	scanf("%d", &N);
	p=(int *)calloc(N,sizeof(int));
	
	for(i=0 ; i<N ; i++)
	{
		printf("%d. say� :" , i+1);
		scanf("%d" , (p+i));
		
		toplam += *(p+i);
		
	}
	ortalama=toplam/N;
	printf("\nSay�lar�n toplam� : %d" , toplam);
	printf("\nSay�lar�n ortalams� : %d" , ortalama);
	
	return 0;
}
