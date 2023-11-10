//BTK akademi C programlama e�itimi 10.11.2023
//Onur ALACA

#include <stdio.h>
#include <math.h>

int main()
{
	float ana_para, zaman, faiz_orani, basit_faiz_miktari, bilesik_faiz_miktari;
	
	//Girdileri al
	printf("Ana para miktarini giriniz : ");
	scanf("%f", &ana_para);
	
	printf("Zamani giriniz :");
	scanf("%f", &zaman);
	
	printf("Faiz oranini giriniz :");
	scanf("%f", &faiz_orani);
	
	//Basit bir faiz hesab� ile faiz miktar�n� hesapla
	basit_faiz_miktari = (ana_para * zaman * faiz_orani)/100;
	
	//Bile�ik faiz hesab� ile faiz miktar�n� hesapla
	bilesik_faiz_miktari = ana_para * (pow(1 + faiz_orani / 100, zaman));
	

	//Sonu�lar� ekrana yazd�r
	printf("Basit faiz hesabi ile hesaplanan faiz miktari = %.2f\n", basit_faiz_miktari);	
	printf("Bile�ik faiz hesabi ile hesaplanan faiz miktari = %.2f", bilesik_faiz_miktari);
	
	return 0;
}
