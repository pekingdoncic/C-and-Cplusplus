#include<stdio.h>
int main()
{
	int max(int x,int y);
	int a,b,c;
	printf("please input the value of a and b");
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("max=%d\n",c);
	return 0;
}
int max(int x,int y)//定义函数max 
{
	int z;
	if(x>y)//如果x>y ，则z=x 
	z=x;
	else//如果x<=y，则z=y 
	z=y; 
	return(z);
}
