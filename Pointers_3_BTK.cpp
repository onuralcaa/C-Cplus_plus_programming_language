//BTK akademi C programlama eðitimi 20.02.2024
//Onur ALACA

//Ýþaretçiler...

#include <stdio.h>

int main()
{
	int sayi1, sayi2, toplam;
	int *isaretci1, *isaretci2;
	
	isaretci1 = &sayi1;
	isaretci2 = &sayi2;
	
	printf("Iki sayi giriniz :");
	scanf("%d%d", isaretci1, isaretci2);
	
	toplam = *isaretci1 + *isaretci2;
	
	printf("Toplam : %d", toplam);
	
	return 0;
}
