#include <stdio.h>
#define n 10
int main()
{
	int a[n],max[n],i,j,t;
	printf("输入原始数据：");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]<a[j])//这个和我熟悉的那种j，j+1的结构还不一样！
		//用j=0那种结构写的话，比较的逻辑就有问题，第二次内层循环的时候第一个数就没有参与比较，这很离谱！ 
		//这个是用i和j去比较！ 
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
