#include <stdio.h>
//#define n 6
#include <string.h>
int main()
{
	char a[10];
	int i,t,n;
	scanf("%s",&a);
	printf("�ַ����ȣ�%d\n",strlen(a));
	n=strlen(a); 
	for(i=0;i<n/2;i++)//�������������Ļ������i��ȡ�����൱�ڣ�n-1��/2������Ҫ��ôд�� 
	//����൱���۰���ҵ��Ǹ���˼�����Ǵ��м�ֿ�����ǰһ��ͺ�һ������ 
	{
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
	printf("%d\n",i);
	printf("%s",a);
	putchar('\n');
	//printf("�ַ����ȣ�%d",strlen(a));
	return 0;
}
