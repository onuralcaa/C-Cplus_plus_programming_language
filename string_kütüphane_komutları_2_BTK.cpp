//BTK akademi C programlama kursu.-11.11.2023
//Onur ALACA

#include <stdio.h>
#include <string.h>

int main()
{
	//string kütüphane komutlarý, birleþtirme komutlarý
	
	char metin1[20] = "Merhaba ";
	char metin2[] = "Dunya!";
	char metin3[20];
	
	//strcat komutu uc uca ekleme komutu
	strcat(metin1, metin2); //metin2 yi metin1 e ekle fakat ayrýlan yer boyutuna dikkat edilmeli.
	
	//metin1 i yazdýr
	printf("%s\n\n", metin1);
	
	//strcpy metin kopyalamada kullanýlýr.
	strcpy(metin3, metin1); //metin1 ifadesini metin3 e kopyala
	
	//metin3 ü yazdýr
	printf("%s\n\n", metin3);
	
	printf("%d\n", strcmp(metin1, metin3));
	printf("\n.............\n");
	
	printf("%d\n", strcmp(metin1, metin2));
	printf("\n.............\n");
	
	printf("%d\n", strcmp(metin2, metin1));
	printf("\n.............\n");
	
	return 0;
}
