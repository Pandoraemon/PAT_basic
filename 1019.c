#include<stdio.h>
#include<string.h>
void Swap(int *A,int *B);
void Bulble_Sort(int A[],int N);
int main()
{
	int N=0,A=0,B=0,D[4]={},i,temp;
	scanf("%d",&N);
	temp=N;
	do
	{
		for(i=0;i<4;i++)
		{
			D[i]=N%10;
			N=N/10;
		}/*��4λ���ֽ�Ϊ���鷽������*/
		if(D[0]==D[1]&&D[1]==D[2]&&D[2]==D[3])
		{
			printf("%04d - %04d = 0000\n",temp,temp);/*N���ֽ���ˣ���Ҫһ��temp����N�����*/
			break;
		}/*4λ������ͬ��ֱ�ӽ���ѭ��*/
		Bulble_Sort(D,4);/*����*/ 
		A=0,B=0;
		for(i=0;i<4;i++)
		{
			B=B*10+D[i];
			A=A*10+D[3-i];
		} 
		N=A-B;
		printf("%04d - %04d = %04d\n",A,B,N);		
	}while(N!=6174);
	return 0;
}
void Swap(int *A,int *B)
{
	int temp=*A;
	*A=*B;
	*B=temp;
}
void Bulble_Sort(int A[],int N)
{
	int i,j;
	for(j=N-1;j>=0;j--)
	{
		int flag=0;
		for(i=0;i<j;i++)
		{
			if(A[i]>A[i+1])
			{
				Swap(&A[i],&A[i+1]);
				flag=1;
			}
		}
		if(flag==0) break;
	}
}
