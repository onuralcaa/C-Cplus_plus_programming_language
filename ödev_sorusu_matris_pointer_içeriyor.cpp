#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define M 5
#define N 5

int birim_test(int mat[M][N])
{
	int i,j;
	int sonuc;
	int onur[N][M];
	for(i=0 ; i<M ; i++)
	{
		for(j=0 ; j<N ; j++)
		{
			if(onur[i][j]!=mat[j][i])
			sonuc=0;
			
			else
			sonuc=1;
		}
	}
	return sonuc;
}
int main()
{
	setlocale(LC_ALL , "Turkish");
	
	int n,m;
	int i,j;
	printf("Kaça kaçlýk bir matris girmek istersiniz : ");
	scanf("%d %d", &n,&m);
	int matris[M][N];
	
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<m ; j++)
		{
			printf("%d. satýrýn %d. elemaný : " ,i+1,j+1);
			scanf("%d" ,&matris[i][j]);
		}
	}
	
	int karar=birim_test(matris);
	
	if(karar == 0)
	printf("Matrisiniz simatriktir.");
	
	else if(karar ==1)
	printf("Matrisiniz simetrik deðildir.");
	
		
	
	
	
	return 0;
}
