#include <stdio.h>
#define N 4
int main()//折半查找是为了找到这个数已经这个数字的位置！ 
{
	int a[N];
	int i,j,t,m,location;
	int Binary_Search(int a[],int n,int x);
	printf("请输入%d个数：\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N;i++)//冒泡 
	{
		for(j=0;j<N-1-i;j++)
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}	
	}
	for(i=0;i<N;i++)
		printf("%d\t",a[i]);
	printf("请输入要查找的数字：\n");
	scanf("%d",&m);
	location=Binary_Search(a,N,m);
	if(location==-1)
		printf("你输入的数字不在其中\n");
	else 
		printf("你要找的数字在第%d位\n",location+1);
	return 0;
}
int Binary_Search(int a[],int n,int x)
{
	int max=n-1,min=0,mid;
	while(min<=max)
	{
	mid=(max+min)/2;
	if (x==a[mid])
	{
		return mid;
	}
	else if(x>a[mid])
		min=mid+1;
	else max=mid-1;
	}
	return -1;
} 

