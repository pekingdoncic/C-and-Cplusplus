#include <stdio.h>
int main()
{
	void swap(int *p1,int *p2);
	int a,b,*c1,*c2;
	printf("ÇëÊäÈëa,bµÄÖµ£º\n");
	scanf("%d%d",&a,&b);
	printf("%d\t%d\n",a,b);
	c1=&a;
	c2=&b;
	if(a<b)
		swap(c1,c2);
	printf("%d\t%d\n%d\t%d\n",a,b,*c1,*c2);
	return 0;
}
void swap(int *p1,int *p2)
{
	int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
}
