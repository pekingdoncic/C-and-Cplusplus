#include <stdio.h>
#define n 10
int main()
{
	void choose(double a[], int m);
	double a[n];
	int i;
	printf("请输入%d个数字：\n",n);
	for(i=0;i<n;i++)
		scanf("%lf",&a[i]);
	putchar('\n');
	choose(a,n);
	printf("从小到大排序为:\n");
	for(i=0;i<n;i++)
		printf("%.2lf\t",a[i]);
	return 0;
} 
void choose(double a[], int m)
{
	int i,j,k;
	double t;
	for (i=0;i<m-1;i++)
		{
			for(j=i+1;j<m;j++)
			if(a[j]<a[i])
			{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}
}
