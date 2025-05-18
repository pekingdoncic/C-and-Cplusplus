#include <stdio.h>
int main()
{
	int a[101],i=0,b[201]={0},j,t,max1,max2;
	printf("请输入-100到100之间的数字：（个数小于100个）\n");
	for(i=0;i<100;i++)//实现数字的输入！ 
	{
		A:;
		scanf("%d",&a[i]);
		if(a[i]>100||a[i]<-100)
		{
		printf("请重新输入：\n");
		goto A;
		}
		if(a[i]==-1)
		break;
	}
	/*for(i=0;a[i]!=-1;i++)
	{ 
	printf("%d\n",a[i]);
	}*/
//	for(j=0;j<201;j++)
//		b[j]=0;
	for(i=0;a[i]!=-1;i++)//统计个数 
	{
		for(j=0;j<201;j++)
		{
		if(a[i]==(j-100))
			b[j]++;
		}
	}
//	for(j=0;j<201;j++)
//	if(b[j]!=0)
//	printf("%d的个数为%d\n",j-100,b[j]);
	for(i=0;i<201;i++)
	{
		if(b[i]!=0)
		{ 
		max1=b[i];max2=i-100;
		for(j=0;j<201;j++) 
		{
		//	printf("lj");
			if(b[i]<b[j])
			{
			max1=b[j];
			max2=j-100;
			}
		}
		for(j=0;j<201;j++)
			if(j-100==max2)//这块用max2去找是为了让有个数相同的max1都变成0；并且都可以输出！ 
				b[j]=0;
		if(b[i]==max1)
			b[i]=0;		
		if(max1!=0) 
		printf("%d的个数有%d个！\n",max2,max1);
		//i=0;//这块 
		}
	}
	/*for(i=0;b[i]!=0&&i<201;i++)
	printf("%d的个数有%d个\n",i,b[i]);*/
	return 0;
}
