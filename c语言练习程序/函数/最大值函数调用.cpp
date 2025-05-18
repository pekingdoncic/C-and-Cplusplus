#include <stdio.h>
#define m 3
int main()
{
	double max(double a[][4]),f;
	int i,j;
	double a[m][4];
	printf("ÇëÊäÈë%d*4¸öÊı×Ö£º\n",m);
	for(i=0;i<m;i++)
		for(j=0;j<4;j++)
		scanf("%lf",&a[i][j]);
	f=max(a);
	printf("%.1lf",f);
	return 0;
}
double max(double a[][4])
{
	int i,j;
	double max=a[0][0];
	for(i=0;i<m;i++)
		for(j=0;j<4;j++)
		if(max<a[i][j])
			max=a[i][j];
	return max;
}
