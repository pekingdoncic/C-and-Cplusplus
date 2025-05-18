#include <stdio.h>
int main()
{
	double AnnulusArea(double in,double out);
	double a,b;
	printf("请输入内圆半径和外圆半径:\n");
	scanf("%lf%lf",&a,&b);
	printf("圆环面积为：%.2lf",AnnulusArea(a,b));
	return 0;
}
double AnnulusArea(double in,double out)
{
	double CircleArea(double r);
	double s;
	s= CircleArea(out)-CircleArea(in);
	return s;
}
	
double CircleArea(double r)
{
	return(3.14*r*r);	
}
