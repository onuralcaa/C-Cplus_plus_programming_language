#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int i=1;
	
	while(i<1000)
	{
		if(i % 17== 0)
		{
			printf(" %d " , i);
							
		}
		if(i % 100 == 0)
		printf("\n");
			
		i++;
}
	return 0;
}
