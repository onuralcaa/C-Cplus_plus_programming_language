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
	
	printf("struct yapýmýzýn hafýzada tuttuðu yer %d bytetýr.\n" , sizeof(t));//12 byte , tüm deðiþkenlerin boyutlarýný toplar.
	printf("union yapýmýzýn hafýzada tuttuðu yer %d bytetýr." , sizeof(T));//4 byte , en büyük boyuta sahip deðiþkenin boyutunu alýr.
     	
	return 0;
}
