#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct test{
	char a;
	int b;
	float c;
};

union TEST{
	char d;
	int e;
	float f;
};

main()
{
	setlocale(LC_ALL , "Turkish");
	
	struct test t;
	union TEST T;
	
	printf("struct yap�m�z�n haf�zada tuttu�u yer %d bytet�r.\n" , sizeof(t));//12 byte , t�m de�i�kenlerin boyutlar�n� toplar.
	printf("union yap�m�z�n haf�zada tuttu�u yer %d bytet�r." , sizeof(T));//4 byte , en b�y�k boyuta sahip de�i�kenin boyutunu al�r.
     	
	return 0;
}
