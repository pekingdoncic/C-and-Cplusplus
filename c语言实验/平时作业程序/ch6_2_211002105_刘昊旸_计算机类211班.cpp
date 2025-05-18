#include <stdio.h>
#include <string.h>
#define n 10
int main()
{
	char a[2*n],b[n];
	int i,j;
	printf("请输入长度小于%d的字符串a，b：\n",n);
	gets(a);
	gets(b);
	printf("输入的字符为：\n%s\n%s\n",a,b);
	i=strlen(a);
	for(j=0;b[j]!='\0';i++,j++)
		a[i]=b[j];//核心思想是通过下标把‘\0’用有意义的字符代替 
	printf("连接好的字符串为：\n%s\n",a);
	return 0;
}
