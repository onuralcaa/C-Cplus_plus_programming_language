//BTK akademi C programlama eðitimi 9.12.2023
//Onur ALACA

#include <stdio.h>
#include <string.h>

struct PersonelBilgi {
	int yas;
	float maas;
	char isim[30];
	char cinsiyet[8];
};

int main()
{
	struct PersonelBilgi personel1; //personel oluþturma
	
	//personel1'in alanlarýna deger atama
	//personel1.isim  = "Onur ALACA"; --> HATALI KULLANIM
	
	//String ifadelere string kütüphane fonksiyonlarý ile atama yapýlýr.
	
	strcpy(personel1.isim , "Onur ALACA");
	strcpy(personel1.cinsiyet , "Erkek");

	//int degerlere normal atama yapýlabilir.
	
	personel1.yas = 22;
	personel1.maas = 3000;
	
	printf("Personelin adi : %s\n", personel1.isim);
	printf("Personelin cinsiyeti : %s\n", personel1.cinsiyet);
	printf("Personelin yasi : %d\n", personel1.yas);
	printf("Personelin maasi : %.2f\n", personel1.maas);
	
	printf("\n-------------------------------------------\n");
	
	struct PersonelBilgi personel2 = {33, 2333, "Gulfidan ATES", "bayan"};
	
	printf("Personelin adi : %s\n", personel2.isim);
	printf("Personelin cinsiyeti : %s\n", personel2.cinsiyet);
	printf("Personelin yasi : %d\n", personel2.yas);
	printf("Personelin maasi : %.2f\n", personel2.maas);
	
	
	printf("\n-------------------------------------------\n");
	
	struct PersonelBilgi personel3;
	
	personel3 = personel2;
	
	printf("Personelin adi : %s\n", personel3.isim);
	printf("Personelin cinsiyeti : %s\n", personel3.cinsiyet);
	printf("Personelin yasi : %d\n", personel3.yas);
	printf("Personelin maasi : %.2f\n", personel3.maas);
	
	
	
	
	
		
	
	return 0;
}
