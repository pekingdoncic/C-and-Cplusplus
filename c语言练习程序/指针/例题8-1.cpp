#include <stdio.h>
int main()
{
	int a=10,b=5,*p1,*p2;
	p1=&a;//������������������ʱ�򣬱�������ԭʼ�ĵ�ַ��ȥָ�� 
	p2=&b;
	printf("%d\t%d\n",*p1,*p2);
	return 0;
}
