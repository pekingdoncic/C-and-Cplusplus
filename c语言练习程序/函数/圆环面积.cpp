#include <stdio.h>
int main()
{
	double AnnulusArea(double in,double out);
	double a,b;
	printf("��������Բ�뾶����Բ�뾶:\n");
	scanf("%lf%lf",&a,&b);
	printf("Բ�����Ϊ��%.2lf",AnnulusArea(a,b));
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
