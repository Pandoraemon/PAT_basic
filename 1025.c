#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int N,n,K,i,head,link;
	int value[100010]={0};/*link��¼�ڵ�ĵ�ַ��value[link]��¼ֵ��next[]��¼��һ���ڵ�ĵ�ַ*/
	int  next[100010]={0};
	int  list[100010]={0};/*list��¼��ʼ����˳��final��¼��ת�������˳��*/
	int final[100010]={0};
	scanf("%d %d %d",&head,&N,&K);
	for(i=0;i<N;i++)
	{
		scanf("%d",&link);/*����linkҪ�������룬����һ��������*/
		scanf("%d %d",&value[link],&next[link]);
	}
	
	n=0;
	while(head!=-1)
	{	
		list[n]=head;
		head=next[head];/*��list���������˳���Է��㷴ת*/ 
		n++;/*n�᲻����N��Ҳ����˵�������������û�õĽڵ㣬�ⲻ�ǿ�����*/
	}
	for(i=0;i<(n-n%K);i++)
	{
		final[i]=list[(i/K)*K+K-i%K-1];/*ÿK���ڵ㷴ת�����Ҫ�ú����ҹ���*/
	} 
	for(i;i<n;i++)
	{
		final[i]=list[i];
	}
	
	for(i=0;i<n-1;i++)
	{
		printf("%05d %d %05d\n",final[i],value[final[i]],final[i+1]);
	}
	printf("%05d %d %d\n",final[n-1],value[final[n-1]],-1);
	
	return 0;
}
