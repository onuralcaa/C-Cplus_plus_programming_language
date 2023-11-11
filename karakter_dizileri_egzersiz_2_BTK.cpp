//BTK akademi C programlama kursu.-11.11.2023
//Onur ALACA

#include <stdio.h>

int main()
{
	char karsilama_mesaji[] = "Merhaba"; //SONUNA OTOMATÝK OLARAK '\0' ÝFADESÝ EKLENDÝ.
	char karsilama_mesaji2[] = {'m', 'e', 'r', 'h', 'a', 'b', 'a', '\0'};
	
	printf("%lu\n\n", sizeof(karsilama_mesaji));
	printf("%lu\n", sizeof(karsilama_mesaji2));
	
	return 0;
}
