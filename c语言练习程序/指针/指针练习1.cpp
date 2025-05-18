#include <stdio.h>
int main()
{
void aver(float *p,int n);
void search(float (*p)[4],int n);
	float a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	aver(*a,12);
	search(a,2);
	return 0;
}
void aver(float *p,int n)
{
	float *p1,sum;
	for(p1=p+n-1;p<p1;p++)
	{
		sum+=*p;
	}
	printf("平均值为：%d\n",sum/n);
}
void search(float (*p)[4],int n)
{
	int i;
	for(i=0;i<4;i++)
		printf("%f",*(*(p+n)+i));
	putchar('\n');
}
