#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int maksimum(int a, int b , int c)
{
	int max = a;
	
	if(b>max)
	   max=b;
	
	else if(c>max)
	   max=c;
	   
	else 
	max=a;
	
	return max;	   
}

int minimum(int a, int b , int c)
{
	int min = a;
	
	if(min>b)
	  min=b;
	  
	else if(min>c)
	  min=c;
	  
	else
	 min=a;
	
	
	return min;
}


main()
{
	setlocale(LC_ALL , "Turkish");
	
	int a,b,c;
	int max, min;
	
	printf("Sýralamak istediðiniz 3 sayýyý giriniz: ");
	scanf("%d %d %d" , &a, &b, &c);
	
	
	max = maksimum(a,b,c);
	min = minimum(a,b,c);
	
	printf("Maksimum deðerimiz : %d \n Minimum deðerimiz : %d" , max , min);
	
	return 0;
	
}
