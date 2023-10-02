#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void birlestir(int A[],int B[],int C[],int N,int K )
{
     int j;
     
     for(j=0 ; j<N+K ; j++)
     {
     	C[j] = A[j];
	 }
	     j++;
	for(j ; j<N+K ; j++)
	{
		C[j]=B[j];
	}
	
	printf("Dizilerin birleþtirilmiþ hali : ");
	
	for(j=0 ; j<N+K ; j++)
	{
		printf(" %d " , C[j]);
	}
	
	
}

main()
{
	int N , K , i;
	
	setlocale(LC_ALL , "Turkish");
	
	printf("Ýlk dizinin eleman sayýsýný giriniz : ");
	scanf("%d" , &N);
	int A[N];
	
	for(i=0 ; i<N ; i++)
	{
		printf("%d. sayýyý giriniz : " , i+1);
		scanf("%d" , &A[i]);
	}
	
	
	printf("Ýkinci dizinin eleman sayýsýný giriniz : ");
	scanf("%d" , &K);
	int B[K];
	
	for(i=0 ; i<K ; i++)
	{
		printf("%d. sayýyý giriniz : " , i+1);
		scanf("%d" , &B[i]);
	}
	
	int Birlesik[N+K];
	birlestir(A , B , Birlesik , N , K);
		
	return 0;
}
