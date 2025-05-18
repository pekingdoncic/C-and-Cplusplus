#include <stdio.h>
int main()
{
	long int x1=1,x2=1,i;
	printf("%d\t%d\n",x1,x2);
	for(i=1;i<=9;i++)
	{
		x1=x2+x1;
		x2=x2+x1;
		printf("%d\t%d\n",x1,x2);
	}	
	return 0;
}
