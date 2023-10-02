#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct yarismaciBilgi{
	char isim[10] , soyad[10];
	float puan[10] , performans;
};

float puanHesap(struct yarismaciBilgi pat)
{
	int i;
	float sonuc = 0.0;
	float max = 0.0;
	float min = 6.0;
	
	for(i=0 ; i<10 ; i++)
	{
		if(pat.puan[i]>max)
		max = pat.puan[i];
		
		if(pat.puan[i]<min)
		min = pat.puan[i];
		
		
		sonuc += pat.puan[i];
	}
	
	sonuc = (sonuc-max-min)/8.0;
	return (sonuc);
}
main()
{
	setlocale(LC_ALL , "Turkish");
	struct yarismaciBilgi patenci[100];
	int n,birinci;
	int i,j;
	float max = 0.0;
	printf("Lütfen yarýþmacý sayýsý giriniz : ");
	scanf("%d" , &n);
	
	for(j=0 ; j<n ; j++)
	{
		printf("Yarýþmacý ismini ");
		gets(patenci[j].isim);
		
		printf("soyismini giriniz : \n");
		gets(patenci[j].soyad);
		
		printf("puan giriniz : ");
		for(i=0 ; i<10 ; i++)
		{
			scanf("%f" , &patenci[j].puan[i]);
		}
		
		patenci[j].performans = puanHesap(patenci[j]);
		
		printf("Puan = %f\n" , patenci[j].performans);
		
		if(patenci[j].performans>max)
		{
			max = patenci[j].performans;
			birinci=j;		
		}				
	}
	
	printf("Yarýþmanýn birincisi :");
	printf("\n%s %s %f" , patenci[birinci].isim , patenci[birinci].soyad , patenci[birinci].performans);
	
		
	return 0;
}
