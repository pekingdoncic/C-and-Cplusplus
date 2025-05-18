#include <stdio.h>
int main()
{
	int a,b,*p1,*p2,*p;
	printf("ÇëÊäÈëa,bµÄÖµ£º\n");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b; 
	if(a<b)
	{
		p2=&a;
		p1=&b;
	}
	printf("%d\t%d\n%d\t%d\n",a,b,*p1,*p2);
	return 0;
}
