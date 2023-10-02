#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef enum {
	ocak=1,
	subat,
	mart,
	nisan,
	mayis,
	haziran,
	temmuz,
	agustos,
	eylul,
	ekim,
	kasim,
	aralik
}aylar;

void ekrana_yazdir(aylar semih)
{
	switch(semih)
	{
		case ocak:
			printf("ocak");
			break;
		case subat:
			printf("subat");
			break;	
		case mart:
			printf("mart");
			break;	
		case nisan:
			printf("nisan");
			break;	
		case mayis:
			printf("mayis");
			break;	
		case haziran:
			printf("haziran");
			break;	
		case temmuz:
			printf("temmuz");
			break;	
		case agustos:
			printf("agustos");
			break;	
		case eylul:
			printf("eylul");
			break;	
		case ekim:
			printf("ekim");
			break;	
		case kasim:
			printf("kasim");
			break;	
		case aralik:
			printf("aralik");
			break;	
		default:
			printf("Böyle bir ay yok");
			break;	
					
	}
}

main()
{
	setlocale(LC_ALL , "Turkish");
	
	aylar onur = ocak;
	ekrana_yazdir(onur);
	
	return 0;
}
