#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<math.h>

float toplama(float a , float b)
{
	printf("��lem yapmak istedi�iniz de�erleri giriniz : ");
	scanf("%f %f" , &a , &b);
	
	int sonuc = a+b;
	
	return sonuc;
	
}
float cikarma(float a , float b)
{
	printf("��lem yapmak istedi�iniz de�erleri giriniz : ");
	scanf("%f %f" , &a , &b);
	
	int sonuc = a-b;
	
	return sonuc;
	
}
float bolme(float a , float b)
{
	printf("��lem yapmak istedi�iniz de�erleri giriniz : ");
	scanf("%f %f" , &a , &b);
	
	int sonuc = a/b;
	
	return sonuc;
	
}
float carpma(float a , float b)
{
	printf("��lem yapmak istedi�iniz de�erleri giriniz : ");
	scanf("%f %f" , &a , &b);
	
	int sonuc = a*b;
	
	return sonuc;
}

int main()
{
	setlocale(LC_ALL , "Turkish");
	
	char islem;
    float sayi1 , sayi2 , toplam;
	
	int i=0;
	while(i<3)
	{
		printf("\nYapmak istedi�iniz i�lemi giriniz:");
	scanf("%c" , &islem);
	
	if(islem == '+')
	{
		toplam=toplama(sayi1 , sayi2);
		
		break;
	}
	
	
	else if(islem == '-')
	{
		toplam=cikarma(sayi1 , sayi2);
		break;
	}
	
	
	else if(islem == '/')
	{
		toplam=bolme(sayi1 , sayi2);
		break;
	}
	
	
	else if(islem == 'x')
	{
			toplam=carpma(sayi1 , sayi2);
			break;
	}

	
	else
	{
			printf("Ge�ersiz bir i�lem se�ene�i girdiniz.");
			i++;
			
			
	}
	
	
	}
	
	
	printf("\n i�leminizin sonucu : %.2f" , toplam);
	
	
	
	
}
