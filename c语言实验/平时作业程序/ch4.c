#include <stdio.h>
#include <math.h>
int main()
{
	double a,b;
	printf("请输入一个数：\n");
	do
	{
	scanf("%lf",&a);
	if(a<1000&&a>0)
	{ 
		b=sqrt(a);
		printf("结果为：%.0lf\n请再输入一个数\n",b); 
	} 
	else
	printf("请重新输入：\n");
	}while(1);
	return 0; 
 } 
