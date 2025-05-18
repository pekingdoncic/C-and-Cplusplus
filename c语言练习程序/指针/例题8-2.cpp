#include <stdio.h>
int main()
{
	int a,b,*p1=&a,*p2=&b,*p;
	printf("请输入俩个数字：\n");
	scanf("%d%d",p1,p2);
	printf("a=%d\tb=%d\n",a,b);
	printf("按先大后小输出：\n");
	if(*p1<*p2)
	{
		/*p=p1;//用指针，就是要利用指针的特性，把指向改变了！ 
		p1=p2;
		p2=p;*/
		p1=&b;p2=&a;//或者用第二种方法：这样子写更直观，也更方便理解！ 
	}
	
	printf("%d\t%d\n",*p1,*p2);
	return 0;
}
