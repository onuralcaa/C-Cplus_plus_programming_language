//BTK akademi C programlama eðitimi 9.12.2023
//Onur ALACA

#include <stdio.h>
#include <locale.h>
#include <string.h>


union veri {
	int i;
	float f;
	char str[20];
};

//struct veri yapýsý bellekte uniona göre daha fazla yer ayýrýr bu yüzden veri eriþimi noktasýnda
//herhangi bir sorun yaþanmaz.
//fakat union türündeki verilere her seferinde sadece bir tanesine saðlýklý eriþim þansý bulunur.
//Bu da son eriþilen deðiþkendir.
//gömülü yazýlým gibi sýnýrlý beller çalýþmalarýnda tercih edilir.

int main()
{
	
	setlocale(LC_ALL, "Turkish");
	
	union veri veri1;
	
	veri1.i = 10;
	veri1.f = 220.5;
	strcpy(veri1.str , "C programlama kursu");
	
	printf("Verinin buyuklugu : %d\n", sizeof(veri1));
	printf("veri.i = %d\n", veri1.i);
	printf("veri.f = %.2f\n", veri1.f);
	printf("veri.str = %s\n", veri1.str);
	
	printf("\n----------------------------------\n");
	 
	veri1.i = 103; //son eriþilen
	
	printf("Verinin buyuklugu : %d\n", sizeof(veri1));
	printf("veri.i = %d\n", veri1.i);
	printf("veri.f = %.2f\n", veri1.f);
	printf("veri.str = %s\n", veri1.str);
	
	printf("\n----------------------------------\n");
	
	veri1.f = 220.5; //son eriþilen
	
	printf("Verinin buyuklugu : %d\n", sizeof(veri1));
	printf("veri.i = %d\n", veri1.i);
	printf("veri.f = %.2f\n", veri1.f);
	printf("veri.str = %s\n", veri1.str);
	
	printf("\n----------------------------------\n");
	
	
	
	
	
	
	
	
	return 0;
}
