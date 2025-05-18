#include <stdio.h>
int main()
{
	int age(int);
	int n;
	printf("请输入第几个学生：\n");
	scanf("%d",&n);
	printf("第%d个学生的年龄：%d\n",n,age(n));
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
