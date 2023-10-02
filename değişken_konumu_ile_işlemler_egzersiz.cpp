#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int  Onur(int sayi1 , int* konum)
{
	*konum = sayi1*sayi1;
	
	return *konum;
	
}

int main()
{
	
	int sayi1=4 , konum;
	
	int sonuc = Onur(sayi1 , &konum);
	
	
	printf("%d", konum);
	
	
}
