//BTK akademi C programlama e�itimi 19.02.2023
//Onur ALACA

//��aret�iler...

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
