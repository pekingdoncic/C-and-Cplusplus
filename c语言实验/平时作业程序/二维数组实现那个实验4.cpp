#include <stdio.h>
int main() 
{
	int i,a[200],n=0,t,j=0,b[200][2]; 
	printf("请输入-100到100的整数：\n");
	for(i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==-1)
			break;
		if(a[i]!=-1)
			n++;
			printf("%d\t%d\t",a[i],n);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		if(a[j+1]>a[j])
			{
			t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
			}	
		}
	}
	for(i=0;i<n-1;i++)
		printf("%d\t",a[i]);
b[0][0]=a[0];//统计好数组 
b[0][1]=1;
for(int i=1;i<=n;i++)
{
	if(a[i]==a[i-1]) b[j][1]++;
	else
	{
   		j++;
   		b[j][0]=a[i];
   		b[j][1]=1;
  	}
}
printf("从大到小排序：\n");
for(int i=0;i<=n;i++)
{
  printf("%d\t",a[i]); 
}
for(int i=0;i<=j;i++)
{
  printf("数字%d有%d个\n",b[i][0],b[i][1]);
}
	printf("输入的整数个数为：%d\n",n);
	return 0;
}

