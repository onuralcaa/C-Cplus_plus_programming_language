#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define max 20

struct musteri_durum {
	
	char isim_soyisim[max];
	int kahvalti_durum;
	int aksam_durum;
	int otel_durum;
	
};

void otel_gosterge(struct musteri_durum dogukan[3])
{
	int i;
	for(i=0 ; i<3 ; i++)
	{
		if(dogukan[i].otel_durum == 2)
		printf("%s isimli m��teri %d y�ld�zl� otelde kal�yor.\n" , dogukan[i].isim_soyisim , dogukan[i].otel_durum);
		
		else if(dogukan[i].otel_durum == 3)
		printf("%s isimli m��teri %d y�ld�zl� otelde kal�yor.\n" , dogukan[i].isim_soyisim , dogukan[i].otel_durum);

		else
		printf("Otel durumu yanl�� girilmi�tir.\n");	
	}
}

//BU KOD YARIM BIRAKILDI.

main()
{	
	setlocale(LC_ALL , "Turkish");
	
	struct musteri_durum musteri[3];
	fflush(stdin);
	int i;
	
	for(i=0 ; i<3 ; i++)
	{
		printf("M��teri ismi ve soyismini : ");
		gets(musteri[i].isim_soyisim);

		//if(i==1)
		printf("\n");
		
		//printf("M��teri soyismi : ");
		
		
		printf("Kahvalt� durumu(1/0) :");
		scanf("%d" , &musteri[i].kahvalti_durum);
		
		printf("Ak�am yeme�i durumu(1/0) :");
		scanf("%d" , &musteri[i].aksam_durum);
		
		printf("Otel ka� y�ld�zl� olsun(2/3) : ");
		scanf("%d" , &musteri[i].otel_durum);
		
		printf("---------------------------\n");
		
	}
	
	otel_gosterge(musteri);
	
	
		
	return 0;
}
