#include <stdio.h>
int main()
{
	int n,a,b,c;
	for(n=1;n<=1000;n++)
	{
		a=n/100;
		b=(n-100*a)/10;
		c=n-100*a-10*b;
		if(a*a*a+b*b*b+c*c*c==n)//Ҫ��ѷ������������ֶ����������ѭ���������if�������ͺã� 
			printf("%d����ȫ��\n",n);
	}
	return 0;
 } 
