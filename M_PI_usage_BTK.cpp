//BTK akademi C programlama e�itimi 10.11.2023
//Onur ALACA

#include <stdio.h>
#include <math.h>

int main()
{
	float yaricap, cap, cevre, alan;
	
	//Kullan�c�dan yar��ap bilgisini al
	printf("Lutfen yaricapi giriniz : ");
	scanf("%f", &yaricap);
	
	//�ap ve �evre hesab�n� yap�n�z.
	cap = 2 * yaricap;
	cevre = 2 * M_PI - yaricap;
	alan = M_PI * (yaricap * yaricap);
	
	//T�m sonu�lar� ekrana yazd�r
	printf("Cemberin capi : %.2f\n", cap);
	printf("Cemberin cevresi : %.f2\n", cevre);
	printf("Cemberin alani : %.2f\n", alan);
	
	
	return 0;
}
