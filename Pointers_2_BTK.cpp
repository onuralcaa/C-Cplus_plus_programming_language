//BTK akademi C programlama eðitimi 20.02.2024
//Onur ALACA

//Ýþaretçiler...

#include <stdio.h>

int main()
{
	int sayi = 10;
	int * isaretci;
	
	isaretci = &sayi; //pointer atama
	
	printf("sayi deðiskeninin adresi : %d\n", &sayi);
	printf("sayi deðiskeninin icerigi : %d\n", sayi);
	
	printf("isaretci deðiskeninin adresi : %d\n", &isaretci);
	printf("isaretci deðiskeninin icerigi : %d\n", isaretci);
	printf("isaretci deðiskeninin isaret ettigi deger : %d\n", *isaretci);

	return 0;
}
