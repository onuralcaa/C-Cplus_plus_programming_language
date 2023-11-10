//BTK akademi C programlama eðitimi 10.11.2023
//Onur ALACA

#include <stdio.h>

int main()
{
	char ogrenci_notu;
	
	printf("Ogrenci notunu giriniz :");
	
	//getchar() komutu ile notu al ve oðrenci notu deðiþkenine sakla
	ogrenci_notu = getchar();
	//getchar sadece bir tane karakter alabilir.
	
	
	//getchar ile alýnan veriler putchar ile ekrana yazdýrýlýr.
	putchar(ogrenci_notu);
	
	
	return 0;
}
