#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,x1,x2;
	printf("������a,b,c��ֵ��\n"); 
	scanf("%lf%lf%lf",&a,&b,&c);
	x1=(-b+sqrt(b*b-4*c*a))/(2.0*a);//ע�⣬���ﲻ��Ҫ.0����Ϊ����double���͵ģ�û�б�Ҫǿ���� 
	x2=(-b-sqrt(b*b-4*c*a))/(2.0*a);
	printf("%lf\n%lf\n",x1,x2);
	return 0;
 } 
