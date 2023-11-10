//BTK akademi C programlama eðitimi 10.11.2023
//Onur ALACA

#include <stdio.h>
#include <math.h>

int main()
{
	double sayi, karekok;
	
	//Kullanýcýdan sayi degerini al
	printf("Lutfen bir sayi giriniz : ");
	scanf("%lf", &sayi);
	
	//Sayýnýn karekokunu hesapla
	karekok = sqrt(sayi);
	
	//Sonucu ekrana yazdýr
	printf("%.1f sayisinin karekoku : %.2f", sayi, karekok);	
	
	return 0;
}
