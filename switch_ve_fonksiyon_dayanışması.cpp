#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

void hesapla(int a , int b , char onur)
{
	
	switch(onur)
	{
		case '+':
			{
			printf("Toplama sonucunuz : %d" , a+b);
			break;
			}
			
		case '-':
			{
			printf("Çýkarma sonucunuz : %d" , abs(a-b));
			break;
			}
			
		case 'x':
			{
			printf("Çarpma sonucunuz : %d" , a*b);
			break;
			}
			
		case '/':
			{
			printf("Bölme sonucunuz : %d" , a/b);
			break;
			}
			
		default:
			{
			printf("Geçersiz bir iþlem girdiniz...");
			break;
			}
	}
		
}

int main()
{
	setlocale(LC_ALL , "Turkish");
	int sayi1 , sayi2;
	printf("Lütfen iþlem yapmak istediðiniz iki adet sayý giriniz : ");
	scanf("%d %d" , &sayi1 , &sayi2);
	
	char islem;
	
	printf("\nLütfen yapmak istediðiniz iþlemi seçiniz(+ , - , / , x) : ");
	scanf("%c" , &islem);
	
	hesapla(sayi1 , sayi2 , islem);
	
	return 0;
}
