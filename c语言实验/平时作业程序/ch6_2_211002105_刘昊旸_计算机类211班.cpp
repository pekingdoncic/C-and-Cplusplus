#include <stdio.h>
#include <string.h>
#define n 10
int main()
{
	char a[2*n],b[n];
	int i,j;
	printf("�����볤��С��%d���ַ���a��b��\n",n);
	gets(a);
	gets(b);
	printf("������ַ�Ϊ��\n%s\n%s\n",a,b);
	i=strlen(a);
	for(j=0;b[j]!='\0';i++,j++)
		a[i]=b[j];//����˼����ͨ���±�ѡ�\0������������ַ����� 
	printf("���Ӻõ��ַ���Ϊ��\n%s\n",a);
	return 0;
}
