#include<stdio.h>
void replace(int *a,int M,int N);
int main()
{
	int M,N,i;
	int A[200]={0};
	scanf("%d %d",&N,&M);
	M%=N;  
//	Mû�й涨С��N������ʹNС��M 
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
		A[N+i]=A[i];
	}
	for(i=0;i<N;i++)
	{
		A[i]=A[N-M+i];
	}
	for(i=0;i<N;i++)
	{	
		printf("%d",A[i]);
		if(i!=N-1){
			printf(" ");
		}
		
	}
//	printf("end");
	return 0;
}


