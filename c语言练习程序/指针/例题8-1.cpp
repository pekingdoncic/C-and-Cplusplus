#include <stdio.h>
int main()
{
	int a=10,b=5,*p1,*p2;
	p1=&a;//当这个变量不是数组的时候，必须用最原始的地址符去指向！ 
	p2=&b;
	printf("%d\t%d\n",*p1,*p2);
	return 0;
}
