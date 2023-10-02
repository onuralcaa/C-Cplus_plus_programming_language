#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>

int main() 
{
	setlocale(LC_ALL , "Turkish");
	
	int a, b=0 ,c=0;
	int matris[10][10];

	printf("NxN formatýnda bir matris giriniz : ");
	scanf("%d", &a);

	printf("Degerleri giriniz\n");
	for (int i = 0; i < a; i++)
	{
	for (int j = 0; j < a; j++)
	{	
	scanf("%d", &matris[i][j]);
		}
	}
	printf("\n\n\n");

	for (int i = 0; i < a; i++)
	{
	for (int j = 0; j < a; j++)
	{
printf("%d   ", matris[i][j]);
}
printf("\n");
}

for (int i = 0; i < a; i++)
{
for (int j = 0; j < a; j++)
{
{
b++;
}
}
}



if (b == a*a - a)

{

printf("Matrisiniz diagonaldir.\n");

}

else {

printf("Matrisiniz diyagonal degildir\n");

}



for (int i = 0; i < a; i++)

{

for (int j = 0; j < a; j++)

{

if (matris[i][j] == matris[j][i])
		{
c++;
		}
	}
	}
if (c == a*a )
	{
printf("Matrisiniz simetriktir.\n");
	}
else {
printf("Matrisiniz simetrik deðildir.\n");

	}

	}
