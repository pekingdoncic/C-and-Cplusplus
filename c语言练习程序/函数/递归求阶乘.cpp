#include <stdio.h>
int main()
{
	long int fac(int n);
	int n,a;
	printf("������׳�����:\n");
	scanf("%d",&n);
	a=fac(n);
	printf("�׳˽��Ϊ��%d\n",a);
	return 0;
}
long int fac(int n)
{
	int a;
	if(n==1||n==0)
		a=1;
	else
		a=n*fac(n-1);
	return a;
}

