#include <stdio.h>
#define N 10
int main()
{
	int i,j,t,a[N];
	printf("������%d�����ص������",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	putchar('\n');
	for(j=0;j<N-1;j++)
	{
		for(i=0;i<N-1-j;i++)
		{
		if(a[i]<a[i+1])
			{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
			}
		}
	}
	printf("��%d�����������С��������\n");
	for(i=0;i<N;i++)
		printf("%d\t",a[i]);
	return 0;
 } 
