#include <stdio.h>
#define n 4
int main()
{
	int i,j,a[n][n],sum=0,m=1,max1,max2,e=1,b=1,c=4,d=1;
	printf("������%d*%d�����飺\n",n,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}//��������� 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(i==j||i+j==n-1)
				sum=sum+a[i][j];
	}
	printf("�Խ��߸�Ԫ�صĺ�Ϊ��%d\n",sum);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if((i==j||i+j==n-1)&&(i%2==0&&j%2==0))
				m=m*a[i][j];
	}
	printf("�Խ������С����±��Ϊż���ĸ�Ԫ�صĻ���%d\n",m);
	//�Խ������С����±��Ϊż���ĸ�Ԫ�صĻ���
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
		printf("���ֵΪ%d\n��������Ϊ%d��Ϊ%d",max1,e,b);
	else
		printf("���ֵΪ%d\n��������Ϊ%d��Ϊ%d",max2,c,d);
	return 0; 
}
