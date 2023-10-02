#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	typedef struct{
		float abs;
		float ord;
	}nokta;
	
	nokta P;
	
	P.abs = 3.2;
	P.ord = 2.0;
	
	printf("x=%.2f , y=%.2f" , P.abs , P.ord);
	
	return 0;
}
