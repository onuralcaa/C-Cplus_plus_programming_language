#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , 	"Turkish");
	
	int ihsan=2;
	char canberk='f';
	float semih=3.42;
	double onur=4365324;
	
	printf("int deger= %d -------------adresi = %d\n",ihsan, &ihsan);
	printf("char deger= %c -------------adresi = %d\n" ,canberk,&canberk);
	printf("float deger= %.3f -------------adresi = %d\n",semih ,  &semih);
	printf("double deger= %.3lf -------------adresi = %d\n",onur, &onur);
	
	return 0;
}
