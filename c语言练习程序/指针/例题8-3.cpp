#include <stdio.h>
int main()
{
	void max1(int *p1,int *p2,int *p3); 
	int a,b,c,*p1=&a,*p2=&b,*p3=&c;
	printf("请输入三个数：\n");
	scanf("%d%d%d",p1,p2,p3);
	max1(p1,p2,p3);
	printf("从大到小排序依次是：\n");
	printf("%d\t%d\t%d\n",*p1,*p2,*p3);
	return 0;
}
void max1(int *p1,int *p2,int *p3)
{
	void max2(int *p1,int *p2);
	max2(p1,p2);
	max2(p2,p3);
	max2(p1,p2);
	return;
}
void max2(int *p1,int *p2)
{
	int p;//注意，这里区别于例题8-2，
	//这里在函数调用的时候，交换指针没什么用，因为指针变量存的地址也是一个值，（只交换了形参指向） 
	//无法从形式参数传到实际参数，只能传递指针变量所指向的值！ 
	//直接交换值！ 
	if(*p1<*p2)
	{
		p=*p1;//注意这块，是指针变量的指向值交换！所以要定义一个p，
		//但不能定义*p，因为没有给p的指向，这样做会改变p1，p2的值！ 
		*p1=*p2;
		*p2=p;
	}
	return;
}

