#include <stdio.h>
int main()
{
	char a[5],b[5],*p,*q;
	for(p=a;p<4+a;p++)//不可以输入5个字符！因为最后一个必须是'\0'！ 
		scanf("%c",p);
		getchar();//这块需要加上一个getchar吸收掉空格和回车！ 
	for(q=b;q<5+b;q++)
		scanf("%c",q);
	printf("%s\n%s\n",a,b);
	return 0;
}
