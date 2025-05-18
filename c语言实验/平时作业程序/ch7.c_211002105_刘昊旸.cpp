#include <stdio.h>
#define n 4
int main()
{
	int i,j,a[n][n],sum=0,m=1,max1,max2,e=1,b=1,c=4,d=1;
	printf("请输入%d*%d的数组：\n",n,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}//数组的输入 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(i==j||i+j==n-1)
				sum=sum+a[i][j];
	}
	printf("对角线各元素的和为：%d\n",sum);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if((i==j||i+j==n-1)&&(i%2==0&&j%2==0))
				m=m*a[i][j];
	}
	printf("对角线上行、列下标均为偶数的各元素的积：%d\n",m);
	//对角线上行、列下标均为偶数的各元素的积。
	for(i=0,max1=a[0][0];i<n;i++)
	{
		if(max1<a[i][i])
					{
					max1=a[i][i];
					e=i+1;
					b=i+1;
					}
 	}
	for(i=0,max2=a[3][0];i<n;i++)
	{
		if(max2<a[i][n-1-i])
			{
			max2=a[i][n-1-i];
			c=i+1;
			d=n-i;
			}
	}
	if(max1>max2)
		printf("最大值为%d\n其所在行为%d列为%d",max1,e,b);
	else
		printf("最大值为%d\n其所在行为%d列为%d",max2,c,d);
	return 0; 
}
