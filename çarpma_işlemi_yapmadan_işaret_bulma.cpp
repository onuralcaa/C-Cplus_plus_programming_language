#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int sayi1 , sayi2;
	
	printf("L�tfen i�leme sokmak istedi�iniz iki say�y� giriniz:");
	scanf("%d %d" , &sayi1 , &sayi2);
	
	if((sayi1<0 )&& (sayi2<0))
	printf("\nSonucunuz + i�aretli olacakt�r.");
	
	else if((sayi1>0 )&& (sayi2>0))
	printf("\nSonucunuz + i�aretli olacakt�r.");
	
	else if((sayi1>0 )&& (sayi2<0))
	printf("\nSonucunuz - i�aretli olacakt�r.");
	
	else if((sayi1<0 )&& (sayi2>0))
	printf("\nSonucunuz - i�aretli olacakt�r.");
	
	else
	printf("\nSonucunuz 0 olacakt�r.");
	
	
	
	
	
	return 0;
}
