#include <stdio.h>
int main()
{
	int a,b,*p1=&a,*p2=&b,*p;
	printf("�������������֣�\n");
	scanf("%d%d",p1,p2);
	printf("a=%d\tb=%d\n",a,b);
	printf("���ȴ��С�����\n");
	if(*p1<*p2)
	{
		/*p=p1;//��ָ�룬����Ҫ����ָ������ԣ���ָ��ı��ˣ� 
		p1=p2;
		p2=p;*/
		p1=&b;p2=&a;//�����õڶ��ַ�����������д��ֱ�ۣ�Ҳ��������⣡ 
	}
	
	printf("%d\t%d\n",*p1,*p2);
	return 0;
}
