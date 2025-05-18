#include <stdio.h>
int main()
{
	int i,a,b,c;
	for(i=200;i<301;i++)
	{
		a=i/100;
		b=(i-a*100)/10;
		c=(i-a*100-b*10);
		if(a*b*c==42&&a+b+c==12)
			printf("%d\t",i);
	}
	return 0;
}
