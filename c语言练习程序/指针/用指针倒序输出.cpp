#include <stdio.h>
int main()
{
	void inv(int b[],int n);
	int a[10]={0,1,2,3,44,5,6,7,8,9},i;
	printf("原始排序：\n");
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	inv(a,10);
	printf("排序之后数组\n");	
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	return 0;
}
void inv(int *x,int n)
{
	//int *b;
	//b=x; 
	int t,i,j;
	for(i=0,j=n-i-1;i<j;i++,j--)
	{
		t=*(x+i);
		*(x+i)=*(x+j);
		*(x+j)=t;
	}
	return;
}
