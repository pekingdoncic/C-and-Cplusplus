#include <stdio.h>
int main()
{
	void copy_string(char *from,char *to);
	char *a;
	char c[20]="I am a teacher.";
	//注意初始化一定是对这个指针名，而不是对指针所指内容的初始化！->char *a;a="";! 
	a=c;
	char b[]="You are a teacher.";
	char *p=b;
	printf("string a=%s\nstring b=% s\n",a,b);
	printf("复制后的字符串：\n");
	copy_string(a,p);
	printf("string a=%s\nstring b=%s\n",a,b);
	return 0;
}
void copy_string(char *from,char *to)
{
	for(;*from!='\0';from++,to++)
	{
		*to=*from;
	}
	*to='\0';//注意一下，这块一定要加上'\0',不然的话这个程序停不下来！ 
}
