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
			printf("��karma sonucunuz : %d" , abs(a-b));
			break;
			}
			
		case 'x':
			{
			printf("�arpma sonucunuz : %d" , a*b);
			break;
			}
			
		case '/':
			{
			printf("B�lme sonucunuz : %d" , a/b);
			break;
			}
			
		default:
			{
			printf("Ge�ersiz bir i�lem girdiniz...");
			break;
			}
	}
		
}

int main()
{
	setlocale(LC_ALL , "Turkish");
	int sayi1 , sayi2;
	printf("L�tfen i�lem yapmak istedi�iniz iki adet say� giriniz : ");
	scanf("%d %d" , &sayi1 , &sayi2);
	
	char islem;
	
	printf("\nL�tfen yapmak istedi�iniz i�lemi se�iniz(+ , - , / , x) : ");
	scanf("%c" , &islem);
	
	hesapla(sayi1 , sayi2 , islem);
	
	return 0;
}
