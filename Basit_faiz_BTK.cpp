//BTK akademi C programlama e�itimi 10.11.2023
//Onur ALACA

#include <stdio.h>
#include <math.h>

int main()
{
	float ana_para, zaman, faiz_orani, faiz_miktari;
	
	//Girdileri al
	printf("Ana para miktarini giriniz : ");
	scanf("%f", &ana_para);
	
	printf("Zamani giriniz :");
	scanf("%f", &zaman);
	
	printf("Faiz oranini giriniz :");
	scanf("%f", &faiz_orani);
	
	//Basit bir faiz hesab� ile faiz miktar�n� hesapla
	faiz_miktari = (ana_para * zaman * faiz_orani)/100;

	//Sonucu ekrana yazd�r
	printf("Basit faiz hesabi ile hesaplanan faiz miktari = %.2f", faiz_miktari);	
	
	return 0;
}
