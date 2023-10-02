#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	int dizi[14];
	
	int i=0;
	while(i<14)
	{
		dizi[i] = i;
		i++;
	}
	
	for(int j =0 ; j<14 ; j++)
	{
		printf("%d" , dizi[j]);
	}
	
	
	
	
	
	return 0;
}
