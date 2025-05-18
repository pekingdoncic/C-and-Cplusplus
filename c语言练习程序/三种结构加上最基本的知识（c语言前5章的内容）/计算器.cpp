#include <stdio.h>
#include <math.h>
int main()
{
	long double a,b,c,d;
	a=6.67*pow(10,-11);
	b=2.0*pow(10,30);
	scanf("%d",&c);
	d=sqrt(2*a*b/c);
	printf("%10.9lf",d);
	return 0;
}
