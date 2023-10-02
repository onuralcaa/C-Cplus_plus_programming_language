#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>


int OyunCercevesi()
{
	while(1)
	{
		int i,j;
		for(i=0; i<=100 ; i++)
		{
			for(j=0 ; j<100 ; j++)
			{
				printf("-");
				
			}
			printf("\n");
			usleep(100000);
		}
		
	
		
	}
}

main()
{
	int konum[102];
	int baslangic[50];
	OyunCercevesi();
	
	
	
	
	return 0;
}
