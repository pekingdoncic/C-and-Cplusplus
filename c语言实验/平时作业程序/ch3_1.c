#include <stdio.h>
#include <math.h>
int main()
{
	double n,p,r;
	n=10,r=0.09;
	p=pow((1+r),n);
	printf("10����ҹ�����������ֵ��������������ٷֱ�:%lf%%",p);
	return 0;
 } 
