#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	//strlev : Girilen karakter dizisi elemanlar�n� tersten yazd�rmam�z� sa�lar.
	char kelime[10];
		
	printf("Herhangi bir kelime giriniz :");
	fgets(kelime , sizeof(kelime) , stdin);
	
	printf("%s \n" , strrev(kelime));
	
	
	//strlwr : Girilen karakter dizisi i�indeki karakterleri k���k hale getirir.
	char kelime1[10];
	
	printf("2. kelimeyi giriniz: ");
	gets(kelime1);
	
	printf(" %s\n " , strlwr(kelime1));
	
	//strupr: Girilen karakter dizisi elemanlar�n� b�y�k hale getirir.
	char kelime2[10];
	
	printf("3� kelimeyi giriniz:");
	scanf("%s" , kelime2);
	
	printf("%s" , strupr(kelime2));
	
	
	
	
	
	
	
	
	return 0;
}
