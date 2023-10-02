#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int *ptr;
	int n=5;
	printf("Girdiðiniz sayý deðeri : %d" ,n);
	int i;
	ptr=(int * )malloc(n*sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Hafýza bölünemedi.");
	}
	
	else
	{
		for(i=0 ; i<n ; i++)
		{
			ptr[i]=i+1;
		}
		
		printf("\nElemanlar  \n");
		for(i=0 ; i<n ; i++)
		{
			printf("%d " , ptr[i]);
		}
		
		free(ptr);
	}
	
	return 0;
}
