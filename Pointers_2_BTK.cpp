//BTK akademi C programlama eğitimi 19.02.2023
//Onur ALACA

//İşaretçiler...

#include <stdio.h>

int main()
{
	int sayi = 10;
	int * isaretci;
	
	isaretci = &sayi; //pointer atama
	
	printf("sayi değiskeninin adresi : %d\n", &sayi);
	printf("sayi değiskeninin icerigi : %d\n", sayi);
	
	printf("isaretci değiskeninin adresi : %d\n", &isaretci);
	printf("isaretci değiskeninin icerigi : %d\n", isaretci);
	printf("isaretci değiskeninin isaret ettigi deger : %d\n", *isaretci);

	return 0;
}
