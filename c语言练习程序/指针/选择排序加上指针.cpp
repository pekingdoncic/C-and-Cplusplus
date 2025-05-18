#include <stdio.h>
int main()
{
	void xuanze (int *p,int n);
	int a[10],i,j,*p,t;
	for(p=a;p<(a+10);p++)
		scanf("%d",p);
	/*for(i=0;i<10;i++)
		{
			for(j=i+1;j<10;j++)
			{
				if(a[i]<a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}	
			}
		}*/
		p=a;//注意，这块要是不重新指一下的话，这个p指的在已知数组之外！一定要小心！ 
		xuanze(p,10);
	for(p=a;p<(a+10);p++)
		printf("%d\t",*p);
	return 0;
}
void xuanze (int *p,int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(*(p+i)<*(p+j))
		{
			t=*(p+i);*(p+i)=*(p+j);
			*(p+j)=t;	
		}	
	}	
	return;
}
