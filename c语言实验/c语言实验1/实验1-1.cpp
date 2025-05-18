#include <stdio.h>
int main()
{
	int sym=-1;
	double i,n=1,sum=0;
	for(i=1;i<101;)
	{
		sum+=n;
		i++; 
		n=sym/i;
		sym=-sym;
	}
	printf("求和值为：%lf",sum);
	return 0;
} 

