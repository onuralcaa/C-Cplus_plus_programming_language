#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int hesap(int tab , int k)
{
	int i , sonuc=1;
	
	for(i=0 ; i<k ; i++)
	{
		sonuc *= tab;
	}
	return sonuc;
}

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int taban, us;
	
	printf("L�tfen s�ras�yla taban ve �s de�erlerini giriniz: ");
	scanf("%d %d" , &taban , &us);
	
	if((taban == 0 ) || (us == 0))
	printf("HATALI DE�ER G�RD�N�Z");
	
	
	printf("\nSonu� de�eriniz : %d" , hesap(taban , us));
	
	return 0;
}
