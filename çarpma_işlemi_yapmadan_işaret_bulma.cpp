#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int sayi1 , sayi2;
	
	printf("Lütfen iþleme sokmak istediðiniz iki sayýyý giriniz:");
	scanf("%d %d" , &sayi1 , &sayi2);
	
	if((sayi1<0 )&& (sayi2<0))
	printf("\nSonucunuz + iþaretli olacaktýr.");
	
	else if((sayi1>0 )&& (sayi2>0))
	printf("\nSonucunuz + iþaretli olacaktýr.");
	
	else if((sayi1>0 )&& (sayi2<0))
	printf("\nSonucunuz - iþaretli olacaktýr.");
	
	else if((sayi1<0 )&& (sayi2>0))
	printf("\nSonucunuz - iþaretli olacaktýr.");
	
	else
	printf("\nSonucunuz 0 olacaktýr.");
	
	
	
	
	
	return 0;
}
