#include <stdio.h>
#define N 4
int main()//�۰������Ϊ���ҵ�������Ѿ�������ֵ�λ�ã� 
{
	int a[N];
	int i,j,t,m,location;
	int Binary_Search(int a[],int n,int x);
	printf("������%d������\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N;i++)//ð�� 
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
	printf("������Ҫ���ҵ����֣�\n");
	scanf("%d",&m);
	location=Binary_Search(a,N,m);
	if(location==-1)
		printf("����������ֲ�������\n");
	else 
		printf("��Ҫ�ҵ������ڵ�%dλ\n",location+1);
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

