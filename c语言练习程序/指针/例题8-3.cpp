#include <stdio.h>
int main()
{
	void max1(int *p1,int *p2,int *p3); 
	int a,b,c,*p1=&a,*p2=&b,*p3=&c;
	printf("��������������\n");
	scanf("%d%d%d",p1,p2,p3);
	max1(p1,p2,p3);
	printf("�Ӵ�С���������ǣ�\n");
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
	int p;//ע�⣬��������������8-2��
	//�����ں������õ�ʱ�򣬽���ָ��ûʲô�ã���Ϊָ�������ĵ�ַҲ��һ��ֵ����ֻ�������β�ָ�� 
	//�޷�����ʽ��������ʵ�ʲ�����ֻ�ܴ���ָ�������ָ���ֵ�� 
	//ֱ�ӽ���ֵ�� 
	if(*p1<*p2)
	{
		p=*p1;//ע����飬��ָ�������ָ��ֵ����������Ҫ����һ��p��
		//�����ܶ���*p����Ϊû�и�p��ָ����������ı�p1��p2��ֵ�� 
		*p1=*p2;
		*p2=p;
	}
	return;
}

