#include <stdio.h>
int main()
{
	char a[5],b[5],*p,*q;
	for(p=a;p<4+a;p++)//����������5���ַ�����Ϊ���һ��������'\0'�� 
		scanf("%c",p);
		getchar();//�����Ҫ����һ��getchar���յ��ո�ͻس��� 
	for(q=b;q<5+b;q++)
		scanf("%c",q);
	printf("%s\n%s\n",a,b);
	return 0;
}
