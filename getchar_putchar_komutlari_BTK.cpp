//BTK akademi C programlama e�itimi 10.11.2023
//Onur ALACA

#include <stdio.h>

int main()
{
	char ogrenci_notu;
	
	printf("Ogrenci notunu giriniz :");
	
	//getchar() komutu ile notu al ve o�renci notu de�i�kenine sakla
	ogrenci_notu = getchar();
	//getchar sadece bir tane karakter alabilir.
	
	
	//getchar ile al�nan veriler putchar ile ekrana yazd�r�l�r.
	putchar(ogrenci_notu);
	
	
	return 0;
}
