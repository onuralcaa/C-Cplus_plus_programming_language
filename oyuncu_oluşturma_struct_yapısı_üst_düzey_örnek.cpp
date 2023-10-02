#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define N 2

typedef struct oyuncularBilgi{
	
	char ad[10];
	char soyad[10];
	int yas;
	int seviye;
	
}oyuncu;

typedef struct Ekipler{
	
	char ekip_adi[10];
	oyuncu oyuncu1,oyuncu2;
	
}ekip;

void oyuncu_olustur(oyuncu *j)
{
	printf("Ýsmi giriniz : ");
	scanf("%s" , j->ad);
	
	printf("Soyismi giriniz : ");
	scanf("%s" , j->soyad);
	
	printf("Yaþý giriniz : ");
	scanf("%d" , &j->yas);
	
	printf("Seviyeyi giriniz : ");
	scanf("%d" , &j->seviye);
		
}


void ekibi_olustur(ekip *can)
{
	printf("Ekibin adýný giriniz : ");
	scanf("%s" , can->ekip_adi);
	printf("Oyuncu 1 : \n");
	oyuncu_olustur(&can->oyuncu1);
}

main()
{
	ekip tab[N];
	int i;
	
	for(i=0 ; i<N ; i++)
	{
		printf("Ekip %d : \n");
		ekibi_olustur(&tab[i]);	
	}
	
	return 0;
}
