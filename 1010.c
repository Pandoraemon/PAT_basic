#include<stdio.h>
int main()
{
	int factor,power;
	int flag=0;
//	�Ƿ�����ո�ı�� 
	char ch;
	do
	{
		scanf("%d %d",&factor,&power);
		ch=getchar();
//		ÿ�δ������ȡһ����ֱ�������س����껷���� 
		if(power==0)
		{
			if(flag==0){
				printf("0 0");/*����Ϊ0 0�����*/
			}
		}else
		{
			if(flag==0)
			{
				printf("%d %d",factor*power,power-1);
				flag=1;
			}else
			{
				printf(" %d %d",factor*power,power-1);
			}
			
		}
		
	}while(ch!='\n');
	return 0;
}
