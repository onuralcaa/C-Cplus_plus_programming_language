#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>


int enBuyuk(int A[] , int elemansayisi)
{
    int i, enb;
    enb = A[0];
    
    for(i=1 ; i<elemansayisi ; i++)
    {
    	if(A[i] > enb)
    	{
    		enb=A[i];
		}
	}

return enb;
	
}

main()
{
	setlocale(LC_ALL , "Turkish");
	
	int n,i;
	printf("Ka� adet say� �retilecek :");
	scanf("%d", &n);
	int dizi[n];
	
	srand(time(0));
	
	printf("Dizi elemanlar� : \n");
	
	for(i=0 ; i<n ; i++)
	{
		dizi[i] = rand()%100;
		printf("%d\n", dizi[i]);
	}
	
	printf("\n En b�y�k = %d \n" , enBuyuk(dizi ,n));
		
	return 0;
}
