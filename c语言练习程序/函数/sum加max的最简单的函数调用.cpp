#include <stdio.h>
int main()
{
	int a,b,c,d;
	int max(int x,int y);
	int sum(int x,int y);
	printf("��������������ֵ��\n");
	scanf("%d%d",&a,&b);
	c=max(a,b);
	d=sum(a,b);
	printf("���ֵΪ��%d\n���Ϊ��%d\n",c,d);
	return 0;
} 
int max(int x,int y)
{
	return(x>y?x:y);//ע������д�����ܿ����˾ͺã� 
}
int sum(int x,int y)//ע����鶨���ʱ��һ����Ҫд��float�ͣ������ױ�����ʶ����û�취����ִ�У� 
{
	return(x+y);
}
