#include<stdio.h>
int max(int a,int b,int c);
int main()
{
	int N,i,draw_times=0,A_winwithC=0,A_winwithB=0,A_winwithJ=0,B_winwithC=0,B_winwithB=0,B_winwithJ=0;
	char c1,c2;
	scanf("%d\n",&N);
	for(i=0;i<N-1;i++)
	{
		scanf("%c %c\n",&c1,&c2);
		
		if (c1==c2)
		{
			draw_times++;
		}else if(c1=='C'&&c2=='J')
		{
			A_winwithC++;
		}else if(c1=='J'&&c2=='B')
		{
			A_winwithJ++;
		}else if(c1=='B'&&c2=='C')
		{
			A_winwithB++;
		}
		else if(c2=='C'&&c1=='J')
		{
			B_winwithC++;
		}else if(c2=='J'&&c1=='B')
		{
			B_winwithJ++;
		}else if(c2=='B'&&c1=='C')
		{
			B_winwithB++;
		}/*�г���ÿһ���������ƽ���ⶼ������¼*/
	}
	scanf("%c %c",&c1,&c2);�� 
		/*����㲻�������һ���������Ժ�û��\n��ֻ�õ����ֿ�*/ 
		if (c1==c2)
		{
			draw_times++;
		}else if(c1=='C'&&c2=='J')
		{
			A_winwithC++;
		}else if(c1=='J'&&c2=='B')
		{
			A_winwithJ++;
		}else if(c1=='B'&&c2=='C')
		{
			A_winwithB++;
		}
		else if(c2=='C'&&c1=='J')
		{
			B_winwithC++;
		}else if(c2=='J'&&c1=='B')
		{
			B_winwithJ++;
		}else if(c2=='B'&&c1=='C')
		{
			B_winwithB++;
		}
	printf("%d %d %d\n",A_winwithC+A_winwithB+A_winwithJ,draw_times,N-(A_winwithC+A_winwithB+A_winwithJ)-draw_times);
	printf("%d %d %d\n",B_winwithC+B_winwithB+B_winwithJ,draw_times,N-(B_winwithC+B_winwithB+B_winwithJ)-draw_times);
	if(max(A_winwithB,A_winwithC,A_winwithJ)==0)
	{
		printf("B ");
	}else if(max(A_winwithB,A_winwithC,A_winwithJ)==1)
	{
		printf("C ");
	}else
	{
		printf("J ");
	}
	if(max(B_winwithB,B_winwithC,B_winwithJ)==0)
	{
		printf("B");
	}else if(max(B_winwithB,B_winwithC,B_winwithJ)==1)
	{
		printf("C");
	}else
	{
		printf("J");
	}
	return 0;

	
}

int max(int a,int b,int c)/*��ð�ݰ�Ӯ���Ĵ���ѡ���������밴��ĸ��Ļ�������ⲻΨһ���ͻ��������ĸ����С�Ľ�*/ 
{
	int result=a;
	if(b>result)
	{
		return 1;
	}
	if(c>result)
	{
		return 2;
	}else 
	{
		return 0;
	}
}
