#include <stdio.h>
int main()
{
	int age(int);
	int n;
	printf("������ڼ���ѧ����\n");
	scanf("%d",&n);
	printf("��%d��ѧ�������䣺%d\n",n,age(n));
	return 0;
}
int age(int n)
{
	int c;
	if(n==1)
		c=10;
	else
		c=age(n-1)+2;
	return c;
}
