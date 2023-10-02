#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	int a,b;
	
	printf("iKÝ tane sayý giriniz:");
	scanf("%d %d",&a,&b);
	
	int toplam;
	
	toplam = a*b;
	
	printf("%d" , toplam);
	
	
	
	
	
	
	
	return 0;
}
