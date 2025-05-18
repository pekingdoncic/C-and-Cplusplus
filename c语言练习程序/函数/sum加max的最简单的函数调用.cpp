#include <stdio.h>
int main()
{
	int a,b,c,d;
	int max(int x,int y);
	int sum(int x,int y);
	printf("请输入两个数的值：\n");
	scanf("%d%d",&a,&b);
	c=max(a,b);
	d=sum(a,b);
	printf("最大值为：%d\n求和为：%d\n",c,d);
	return 0;
} 
int max(int x,int y)
{
	return(x>y?x:y);//注意这种写法，能看懂了就好！ 
}
int sum(int x,int y)//注意这块定义的时候一定不要写成float型，很容易编译器识别不了没办法正常执行！ 
{
	return(x+y);
}
