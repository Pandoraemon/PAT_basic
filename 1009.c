#include<stdio.h>
#include<string.h>

int main()
{
	char s[81]={};
	gets(s);
	if(strchr(s,' ')==NULL)
//����ֻ��һ�����ʣ����ַ�����û�пո� 
	{
		printf("%s\n",s);
	}
	else
	{
		while(strrchr(s,' ')!=NULL)
		{
			printf("%s ", strrchr(s,' ')+sizeof(char));
//			��ӡ���һ�����ʣ�ע��Ҫ�� sizeof(char)
    		*strrchr(s,' ')=0;
//    		���һ���ո��Ϊ��/0�� 
		}
		printf("%s",s);
//		���һ������ֱ�Ӵ�ӡ�ַ��� 
	}
	
	
	
	return 0;
}
