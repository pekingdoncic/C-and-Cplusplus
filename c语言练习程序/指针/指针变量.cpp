#include <stdio.h>
int main()
{
/*	int a=100,b=1000;
	int *c_1,*c_2;
	c_1=&a;
	c_2=&b;
	printf("%d\t%d\n%d\t%d\n",a,b,*c_1,*c_2);
	*/
	int a=1,*p;
	p=&a;
	printf("%d\n",*p);
	*p = 2;
	printf("%d\t%d\n",*p,a);	
	return 0;
 } 
