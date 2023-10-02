#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 10
struct adresBilgisi{
	char ad[MAX];
	char soyad[MAX];
	char tel[MAX];
	char adres[MAX];
	char postaKodu[MAX];
};

main()
{
	setlocale(LC_ALL , "Turkish");
	int n,i,k;
	fflush(stdin);//scanf ile ilgili hatalarda kullanýlýr, ram in temizlenmesi ile ilgilidir.
	printf("Kaç kiþinin bilgisini tutmak istiyorsunuz : ");
	scanf("%d \n" , &n);
	struct adresBilgisi bilgi[n];
	
	for(i=0 ; i<n ; i++)
	{
			printf("Ýsim");
			gets(bilgi[i].ad);
			
			printf("Soyisim : ");
			gets(bilgi[i].soyad);
			
			printf("Tel no : ");
			gets(bilgi[i].tel);
			
			printf("Adres : ");
			gets(bilgi[i].adres);
			
			printf("Posta kodu : ");
			gets(bilgi[i].postaKodu);
			
	}	
	
	printf("\n\n");
	printf("Kaçýncý kiþinin bilgilerini görmek istersiniz: ");
	scanf("%d" , &k);
	
	printf("\n isim : %s soyisim : %s tel : %s adres : %s posta kodu : %s",bilgi[k].ad , bilgi[k].soyad,bilgi[k].tel,bilgi[k].adres,bilgi[k].postaKodu);
	
	
	
	
	
	return 0;
}
