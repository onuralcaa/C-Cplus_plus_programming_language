#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#define pi 3.14

main()
{
	setlocale(LC_ALL , "Turkish");
	
	FILE *dosya;
	int i;
	double sinus,cosinus;
	
	dosya = fopen("C:\deneme.txt" , "w");
	if(dosya ==NULL)
	{
		printf("Dosya bulunmad�...\n");
	}
	else
	{
		fprintf(dosya , "DERECE\tSIN\tCOS\n");
		fprintf(dosya , "==========================\n");
		
		for(i=0 ; i<=360 ; i++)
		{
			sinus = (double)sin(i*pi/180);
			cosinus = (double)cos(i*pi/180);
			fprintf(dosya , "%d\t %lf\t %lf\n",i,sinus,cosinus);
		}		
	}	
	printf("��lemleriniz ba�ar�l� bir �ekilde yap�ld�.\n");
	fclose(dosya);	
	printf("Dosya kapat�ld�.");
	return 0;
}
