#include <stdio.h>
int main()
{
	char c;
	int i;
	c=getchar();
	while(c!='\n')
	{
	if(c>='A'&&c<='Z'||c>='a'&&c<='z')//判断是否要执行翻译密码的操作！ 
		if(c>='A'&&c<'W'||c>='a'&&c<'w')
		//注意这里w前面不能有等号，不然会输出花括号！提示以后测试的时候要在边缘进行测试！		
			c+=4;
		else 
			c=c+4-26;
	printf("%c",c);
	c=getchar(); 
	}
	return 0;
}
