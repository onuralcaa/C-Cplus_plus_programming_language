//BTK akademi C programlama e�itimi 9.12.2023
//Onur ALACA

#include <stdio.h>
#include <locale.h>
#include <string.h>


union veri {
	int i;
	float f;
	char str[20];
};

//struct veri yap�s� bellekte uniona g�re daha fazla yer ay�r�r bu y�zden veri eri�imi noktas�nda
//herhangi bir sorun ya�anmaz.
//fakat union t�r�ndeki verilere her seferinde sadece bir tanesine sa�l�kl� eri�im �ans� bulunur.
//Bu da son eri�ilen de�i�kendir.
//g�m�l� yaz�l�m gibi s�n�rl� beller �al��malar�nda tercih edilir.

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
	 
	veri1.i = 103; //son eri�ilen
	
	printf("Verinin buyuklugu : %d\n", sizeof(veri1));
	printf("veri.i = %d\n", veri1.i);
	printf("veri.f = %.2f\n", veri1.f);
	printf("veri.str = %s\n", veri1.str);
	
	printf("\n----------------------------------\n");
	
	veri1.f = 220.5; //son eri�ilen
	
	printf("Verinin buyuklugu : %d\n", sizeof(veri1));
	printf("veri.i = %d\n", veri1.i);
	printf("veri.f = %.2f\n", veri1.f);
	printf("veri.str = %s\n", veri1.str);
	
	printf("\n----------------------------------\n");
	
	
	
	
	
	
	
	
	return 0;
}
