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
	
	
	printf("Kaç adet sayý ile çalýþmak istersiniz : ");
	scanf("%d", &N);
	p=(int *)calloc(N,sizeof(int));
	
	for(i=0 ; i<N ; i++)
	{
		printf("%d. sayý :" , i+1);
		scanf("%d" , (p+i));
		
		toplam += *(p+i);
		
	}
	ortalama=toplam/N;
	printf("\nSayýlarýn toplamý : %d" , toplam);
	printf("\nSayýlarýn ortalamsý : %d" , ortalama);
	
	return 0;
}
