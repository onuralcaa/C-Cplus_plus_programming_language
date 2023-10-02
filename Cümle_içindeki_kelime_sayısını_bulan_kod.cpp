#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	char cumle[100];
	
	printf("Lütfen bir cümle giriniz : ");
	gets(cumle);
	
	int i=0;
	int sayac = 0;
	while(cumle[i])
	{
		if(cumle[i]==32)
		{
			sayac++;
		}
		i++;
	}
	printf("\nCümlenizin içindeki kelime sayýsý : %d " , sayac+1);
	
	
	return 0;
}
