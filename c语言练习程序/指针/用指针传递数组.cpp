#include <stdio.h>
int main()
{
	void inv(int x[],int n);
	int a[10]={1,2,3,4,5,7,6,8,9,10},i,*p;
	p=a;
	for(i=0;i<10;i++,p++)
		printf("%d ",*p);
	putchar('\n'); 
	inv(a,10);
	printf("%d",a[5]);
	putchar('\n'); 
	for(i=0;i<10;i++)
		printf("%d ",*(a+i));
	return 0;
}
void inv(int x[],int n)
{
	int t,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(x+i)<*(x+j))
			{
			t=*(x+i);
			*(x+i)=*(x+j);
			*(x+j)=t;
			}
		}
	}
}
