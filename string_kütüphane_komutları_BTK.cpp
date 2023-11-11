//BTK akademi C programlama kursu.-11.11.2023
//Onur ALACA

#include <stdio.h>
#include <string.h>

int main()
{
	//string fonksiyonlarý dersi
	
	char ingiliz_alfabesi[] = "ABCDEFGHIJKLMNOPRSTUWXYZ";
	printf("%d", strlen(ingiliz_alfabesi));
	printf("\n\n");
	printf("%d", sizeof(ingiliz_alfabesi));
	printf("\n\n");
	
	char turk_alfebesi[] = "ABCÇDEFGÐHIÝJKLMNOÖPRSÞTUÜVYZ"; 
	printf("%d", strlen(turk_alfebesi));
	printf("\n\n");
	printf("%d", sizeof(turk_alfebesi));
	printf("\n\n");	

	return 0;
	
}
