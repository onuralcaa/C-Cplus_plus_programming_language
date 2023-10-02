#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , 	"Turkish");
	
	int matris[10][10];
	
	int i , j;
	
	for(i=0 ; i<10 ; i++)
	{
		for(j=0 ; j<10 ; j++)
		{
			if(i==j)
			matris[i][j]=1;
			
			else
			matris[i][j]=0;
		}
		
	}
	
	for(int i=0 ; i<10 ; i++)
	{
		for(int j=0 ; j<10 ; j++)
		{
			printf(" %d " , matris[i][j]);
		}
		
		printf("\n");		
		
	}
	
	return 0;
}
