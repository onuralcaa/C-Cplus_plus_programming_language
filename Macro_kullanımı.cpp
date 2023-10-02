#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define PI 3.14
#define Daire_alan(r) (PI *r*r)

main()
{
	setlocale(LC_ALL , "Turkish");
	
	float r , alan;
	
	printf("Bir yarýçap deðeri giriniz : ");
	scanf("%f" , &r);
	alan = Daire_alan(r);
	
	printf("\n%.2f" , alan);
	
	return 0;
}
