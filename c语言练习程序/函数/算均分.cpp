#include <stdio.h>
int main()
{
	double average(double a[],int n);
	double a[4],b[2];
	int i;
	printf("请输入1班成绩：\n");
	for(i=0;i<4;i++)
		scanf("%lf",&a[i]);
	printf("请输入2班成绩：\n");
	for(i=0;i<2;i++)
		scanf("%lf",&b[i]);
	putchar('\n');
	printf("1班平均分为:%lf\n",average(a,4));
	printf("2班平均分为:%lf\n",average(b,2));  
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
