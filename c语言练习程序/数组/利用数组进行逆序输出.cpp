#include <stdio.h>
#define N 10
int main()
{
	int a[N],i,t;
	printf("������%d�����ݵ�ֵ��\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N/2;i++)
		{
			t=a[i];
			a[i]=a[N-1-i];
			a[N-1-i]=t;
		}
	putchar('\n');
	printf("���������Ϊ��\n");
	for(i=0;i<N;i++)
		printf("%d\t",a[i]);
	return 0;
 } 
