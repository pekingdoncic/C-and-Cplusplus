#include <stdio.h>
int main()
{
	int sym=1;
	double i,n=1,sum=0;
	for(i=1;i<101;)
	{
		sym=-sym;
		sum+=n;
		i++;
		n=sym/i;
	}
	printf("���ֵΪ��%lf",sum);
	return 0;
} 
