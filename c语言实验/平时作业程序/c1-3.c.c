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
int max(int x,int y)//���庯��max 
{
	int z;
	if(x>y)//���x>y ����z=x 
	z=x;
	else//���x<=y����z=y 
	z=y; 
	return(z);
}
