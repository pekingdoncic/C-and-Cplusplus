#include <stdio.h>
#include <math.h>
int main()
{
	double a,b;
	printf("������һ������\n");
	do
	{
	scanf("%lf",&a);
	if(a<1000&&a>0)
	{ 
		b=sqrt(a);
		printf("���Ϊ��%.0lf\n��������һ����\n",b); 
	} 
	else
	printf("���������룺\n");
	}while(1);
	return 0; 
 } 
