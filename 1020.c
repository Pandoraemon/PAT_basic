#include<stdio.h>
#include<stdlib.h>
void Swap(int *A,int *B);
void Swap_double(double *A,double *B);
void Bulble_Sort(double A[],int B[],int N);
int main()
{
	int N,D,i,sum=0,last,flag=0;/*sum--���п��ȫ��������Ʒ�ֵ��ܿ�棬last--�����۳����±�����ı��*/
	double result=0;/*result--�۳��±����ܼ�ֵ*/
	scanf("%d %d",&N,&D);
	int stock[N],summary[N],key[N];/*��key�����¼�����Ժ�ԭ�������*/ 
	double price[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&stock[i]);
		key[i]=i;
	}
	for(i=0;i<N;i++)
	{
		scanf("%d",&summary[i]);
		price[i]=summary[i]/(double)stock[i];
	}
	Bulble_Sort(price,key,N);
	for(i=N-1;i>=0;i--)
	{
		sum+=stock[key[i]];
		if(sum>D)
		{
			sum-=stock[key[i]];
			last=i;
			flag=1;/*�ж��Ƿ�����Ʒ�ֶ�����󶼴ﲻ���г�����*/
			break;
		}
	}
	if(flag==0)
	{
		for(i=0;i<N;i++)
		{
			result+=summary[i];
		}
	}else{
		for(i=i+1;i<N;i++)
		{
			result+=summary[key[i]];
		}
		result+=price[last]*(D-sum); 
	}
	
	printf("%.2f",result);
	
	return 0;
}
void Swap(int *A,int *B)
{
	int temp=*A;
	*A=*B;
	*B=temp;
}
void Swap_double(double *A,double *B)
{
	double temp=*A;
	*A=*B;
	*B=temp;
}
void Bulble_Sort(double A[],int B[],int N)
{
	int i,j;
	for(j=N-1;j>=0;j--)
	{
		int flag=0;
		for(i=0;i<j;i++)
		{
			if(A[i]>A[i+1])
			{
				Swap_double(&A[i],&A[i+1]);
				Swap(&B[i],&B[i+1]);/*price Swap�󣬶�Ӧprice��KeyҲ����Swap��Ȼ��ͨ�������ʶ�Ӧ��stock[key[i]]*/
				flag=1;
			}
		}
		if(flag==0) break;
	}
}
