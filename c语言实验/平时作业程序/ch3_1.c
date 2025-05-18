#include <stdio.h>
#include <math.h>
int main()
{
	double n,p,r;
	n=10,r=0.09;
	p=pow((1+r),n);
	printf("10年后我国国民生产总值与现在相比增长百分比:%lf%%",p);
	return 0;
 } 
