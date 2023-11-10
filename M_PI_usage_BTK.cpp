//BTK akademi C programlama eðitimi 10.11.2023
//Onur ALACA

#include <stdio.h>
#include <math.h>

int main()
{
	float yaricap, cap, cevre, alan;
	
	//Kullanýcýdan yarýçap bilgisini al
	printf("Lutfen yaricapi giriniz : ");
	scanf("%f", &yaricap);
	
	//Çap ve çevre hesabýný yapýnýz.
	cap = 2 * yaricap;
	cevre = 2 * M_PI - yaricap;
	alan = M_PI * (yaricap * yaricap);
	
	//Tüm sonuçlarý ekrana yazdýr
	printf("Cemberin capi : %.2f\n", cap);
	printf("Cemberin cevresi : %.f2\n", cevre);
	printf("Cemberin alani : %.2f\n", alan);
	
	
	return 0;
}
