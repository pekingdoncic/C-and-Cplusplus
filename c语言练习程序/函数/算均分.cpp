#include <stdio.h>
int main()
{
	double average(double a[],int n);
	double a[4],b[2];
	int i;
	printf("������1��ɼ���\n");
	for(i=0;i<4;i++)
		scanf("%lf",&a[i]);
	printf("������2��ɼ���\n");
	for(i=0;i<2;i++)
		scanf("%lf",&b[i]);
	putchar('\n');
	printf("1��ƽ����Ϊ:%lf\n",average(a,4));
	printf("2��ƽ����Ϊ:%lf\n",average(b,2));  
	return 0;
}
double average(double a[],int n)
{
	double sum=0,aver;
	int i;
	for(i=0;i<n;i++)
		sum+=a[i];
	aver=sum/n;
	return (aver);
} 
