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
	int i;
	struct yarismaciBilgi patenci;
	
	printf("Ad�n�z� giriniz: ");
	scanf("%s" , &patenci.isim);
	
	printf("Soyad�n�z� giriniz: ");
	scanf("%s" , &patenci.soyad);
		
	printf("\nPatencimizin ald��� puanlar� giriniz:");
	for(i=0 ; i<10 ; i++)
	{
		scanf("%f" , &patenci.puan[i]);	
	}	
		
	patenci.performans = puanHesap(patenci);
	
	printf("Patencinin performans sonucu : %f" , patenci.performans);
	
	return 0;
}
