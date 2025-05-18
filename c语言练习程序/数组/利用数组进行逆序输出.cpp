#include <stdio.h>
#define N 10
int main()
{
	int a[N],i,t;
	printf("请输入%d个数据的值：\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N/2;i++)
		{
			t=a[i];
			a[i]=a[N-1-i];
			a[N-1-i]=t;
		}
	putchar('\n');
	printf("逆序输出后为：\n");
	for(i=0;i<N;i++)
		printf("%d\t",a[i]);
	return 0;
 } 
