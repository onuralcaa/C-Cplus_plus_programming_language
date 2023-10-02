#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define pi 3

union veri{
	int cevre;
	int alan;
};
main()
{
	setlocale(LC_ALL , "Turkish");
	
	union veri hesap;
	int r;
	printf("Yarýçap giriniz : ");
	scanf("%d" , &r);	
	
	hesap.cevre = 2*pi*r;
	printf("Çevre : %d \n", hesap.cevre);
	
	hesap.alan = pi*r*r;
	printf("Alan : %d" , hesap.alan);
	
	
	return 0;
}
