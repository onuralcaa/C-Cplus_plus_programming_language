//BTK akademi C programlama e�itimi 20.02.2024
//Onur ALACA

//��aret�iler...

#include <stdio.h>

int main()
{
	int sayi = 10;
	int * isaretci;
	
	isaretci = &sayi; //pointer atama
	
	printf("sayi de�iskeninin adresi : %d\n", &sayi);
	printf("sayi de�iskeninin icerigi : %d\n", sayi);
	
	printf("isaretci de�iskeninin adresi : %d\n", &isaretci);
	printf("isaretci de�iskeninin icerigi : %d\n", isaretci);
	printf("isaretci de�iskeninin isaret ettigi deger : %d\n", *isaretci);

	return 0;
}
