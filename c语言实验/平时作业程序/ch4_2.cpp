#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("������һ������");
	scanf("%int",&a);
	b=(int)a/10000;//��λ�� 
	c=(int)(a-b*10000)/1000;//ǧλ�� 
	d=(int)(a-b*10000-c*1000)/100;//��λ 
	e=(int)(a-b*10000-c*1000-d*100)/10;//ʮλ 
	f=(int)(a-b*10000-c*1000-d*100-e*10);//��λ 
	if(a>=100000||a<=0) 
		printf("�ⲻ�ǲ�����5λ��������\n");
	else if((int)a>=10000)
		{
		printf("����һ����λ��\n");
		printf("��λ���������Ϊ��%d%d%d%d%d\n",f,e,d,c,b);
		}
	else if(a>=1000)
		{
		printf("����һ����λ��\n");
		printf("��λ���������Ϊ��%d%d%d%d\n",f,e,d,c);
		}
	else if(a>=100)
		{
		printf("����һ����λ��\n");
		printf("��λ���������Ϊ��%d%d%d\n",f,e,d);
		}
	else if(a>=10)
		{ 
		printf("����һ����λ��\n");
		printf("��λ���������Ϊ��%d%d\n",f,e);
		} 
	else 
		{
		printf("����һ��һλ��\n");
		printf("��λ���������Ϊ��%d\n",f);
		}
	return 0;
 } 
