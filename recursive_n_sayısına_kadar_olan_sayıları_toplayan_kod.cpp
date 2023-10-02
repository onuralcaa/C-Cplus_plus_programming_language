#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int topla(int n)
{
	int toplam=0;
	
	if(n!=0)
	{
		toplam=n+topla(n-1);
		
	}
	
	else	
	return toplam;
}
main()
{
	setlocale(LC_ALL , "Turkish");
	int sayi;
	printf("Kaça kadar olan sayýlarý toplamak istersiniz: ");
	scanf("%d" , &sayi);
	
	topla(sayi);
	
	printf("Sonuc : %d" , topla(sayi) );
	
	return 0;
}
