//BTK akademi C programlama kursu.-11.11.2023
//Onur ALACA

#include <stdio.h>
#include <string.h>

int main()
{
	//Özel karakterlerin kullanýmý
	
	char metin[] = "Merhaba\nDunya!";
	printf("%s", metin);
	printf("\n....\n");
	
	char metin2[] = "Merhaba\nDunya!";
	printf("%s", metin2);
	printf("\n....\n");

	char metin3[] = {'M', 'e', 'r', 'h', 'a', 'b', 'a', '\0'};
	printf("%s", metin3);
	printf("\n....\n");

	char metin4[] = "Ogretmen iceri girdiginde \"Gunaydin\" diye seslendi.";
	printf("%s", metin4);
	printf("\n....\n");
	
	char metin5[] = "Ahmet \'in telefonu hic susmadi.";
	printf("%s", metin5);
	printf("\n....\n");
	
	char metin6[] = "\\ Karakteri ters taksim veya backslash olarak anilir.";
	printf("%s", metin6);
	printf("\n....\n");
	
	return 0;
}
