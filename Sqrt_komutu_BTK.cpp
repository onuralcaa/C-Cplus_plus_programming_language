//BTK akademi C programlama e�itimi 10.11.2023
//Onur ALACA

#include <stdio.h>
#include <math.h>

int main()
{
	double sayi, karekok;
	
	//Kullan�c�dan sayi degerini al
	printf("Lutfen bir sayi giriniz : ");
	scanf("%lf", &sayi);
	
	//Say�n�n karekokunu hesapla
	karekok = sqrt(sayi);
	
	//Sonucu ekrana yazd�r
	printf("%.1f sayisinin karekoku : %.2f", sayi, karekok);	
	
	return 0;
}
