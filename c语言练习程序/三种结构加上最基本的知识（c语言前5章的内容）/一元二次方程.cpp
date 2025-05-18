#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,x1,x2;
	printf("请输入a,b,c的值：\n"); 
	scanf("%lf%lf%lf",&a,&b,&c);
	x1=(-b+sqrt(b*b-4*c*a))/(2.0*a);//注意，这里不需要.0！因为都是double类型的，没有必要强调！ 
	x2=(-b-sqrt(b*b-4*c*a))/(2.0*a);
	printf("%lf\n%lf\n",x1,x2);
	return 0;
 } 
