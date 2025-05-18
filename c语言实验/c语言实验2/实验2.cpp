#include <stdio.h>
int main() 
{
	int i,a[200],n=0,t1,t2,j=0,b[200][2],max=0,k;
	printf("请输入-100到100的整数：\n");
	for(i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==-1)
			break;
		if(a[i]!=-1)
			n++;
	}
	b[0][0]=a[0];// [0]表示不同的数字 
	b[0][1]=0;//【1】表示重复个数 
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i-1])
			{
			b[j][1]++;	
			}
		else
		{
			j++;
			b[j][0]=a[i];
			b[j][1]=1;
		}
	}
	/*for(i=1;i<=j;i++)// 
		printf("%d输出了%d次\n",b[i][0],b[i][1]);*/
	for(i=0;i<j;i++)
	{
		for(k=0;k<j-i;k++)
		{
			if(b[k][1]<b[k+1][1])
			{ 
				t1=b[k][0];
				t2=b[k][1];
				b[k][0]=b[k+1][0];
				b[k][1]=b[k+1][1];
				b[k+1][0]=t1;
				b[k+1][1]=t2;
			}  
		}
	}
	printf("按频率从大到小排序：\n");
	for(i=0;i<j;i++)
		printf("%d输出了%d次\n",b[i][0],b[i][1]);
	return 0;
}
