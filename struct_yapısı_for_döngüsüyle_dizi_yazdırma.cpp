#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 10

typedef struct {
	char isim[MAX];
	int x_ekseni; 
	int y_ekseni;
}nokta;

void ekrana_yazdir(nokta p[] , int n)
{
	int i;
	for(i=0 ; i<n ; i++)
	{
		printf("%s =(%d %d)\n" , p[i].isim , p[i].x_ekseni , p[i].y_ekseni);
	}
}




main()
{
	setlocale(LC_ALL , "Turkish");
	nokta onur[5] = {{"Can" , 3 , 4} , {"Osman" , 4 , 6} , {"Semih" , 5 , 9} , {"Ýhsan" , 3 , 9} , {"Canberk" , 9,7}};
	ekrana_yazdir(onur , 5);
	
	
	
	
	
	
	return 0;
}
