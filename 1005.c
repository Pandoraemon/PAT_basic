#include<stdio.h>

int main()
{
	int k,i;
	int key[101]={0};
	int number[1000]={0};
/*	��key�����¼0-100�Ƿ����������ǣ���number�����¼�û���������֡�
	��ʼ��key����Ϊ0���û�����������������Ϊ1����ɲ�������г��ֹ������������Ϊ0�����key��Ϊ1��Ԫ�صı�ż�Ϊδ�����ǵ�Ԫ��*/ 
	scanf("%d",&k);
	if(k<100)
	{
			for(i=0;i<k;i++)
		{
			scanf("%d",&number[i]);
			if(number[i]>1&&number[i]<=100)
			{
				key[number[i]]=1;
			}
			
		} 
		for(i=0;i<k;i++)
		{	int n;
			n=number[i];
			while(n!=1)
			{
				
				if(n%2)
				{
					n=(3*n+1)/2;
					if(n<=100){
						key[n]=0;
					}
					/*����n���ܻᳬ��100���������Խ�磬���Ҫ��һ���ж�*/ 
				}else
				{
					n/=2;
					if(n<=100){
						key[n]=0;
					}
					
				}
			}
		}
		int cnt=0;
		for(i=101;i>0;i--)
		{	
			if(key[i]==1)
			{	
				if(cnt>0){
					printf(" ");
				}
				printf("%d",i);
				cnt++;
			}
		}	
	}

	
	return 0;
}
