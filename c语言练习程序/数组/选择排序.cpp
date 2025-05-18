#include <stdio.h>
#define n 4
int main()
{
	int a[n],max[n],i,j,t;
	printf("输入原始数据：");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
