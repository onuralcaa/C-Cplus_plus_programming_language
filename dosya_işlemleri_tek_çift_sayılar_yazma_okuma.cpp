#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	int sayi;
	int i;
	FILE *dosya;
	dosya = fopen("C:\sayilar.txt" , "w");
	
	if(dosya == NULL)
	{
		printf("Dosya olu�turulamad�...");
	}
	else
	{
		printf("L�tfen bir say� giriniz : ");
		scanf("%d" , &sayi);
		
		for(i=0 ; i<sayi ; i++ )
		{
			if(i%2==0)
			{
				fprintf(dosya , "%d �ift bir say�d�r.\n" , i);	
			}	
			else
			{
				fprintf(dosya , "%d tek bir say�d�r.\n" , i);
			}	
		}	
	}
	fclose(dosya);
	printf("\nBilgiler dosyaya yazd�r�ld�.\n");
	printf("Dosyalar okunuyor.");
	FILE *dosya1;
	dosya1 = fopen("C:\sayilar.txt" , "r");
	int sayilar;
	
	do{
		sayilar = getc(dosya1);
		if(sayilar != EOF)
		{
			putchar(sayilar);
		}
		
	}while(sayilar != EOF);
	
	fclose(dosya1);
	return 0;
}
