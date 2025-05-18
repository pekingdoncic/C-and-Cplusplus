#include <stdio.h>
int main()
{
	int max();
	extern int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("max is %d",max());
	return 0;
}
int a,b,c;
int max()
{
	int m;
	m=a>b?a:b;
	m=c>m?c:m;
	return(m);
}
