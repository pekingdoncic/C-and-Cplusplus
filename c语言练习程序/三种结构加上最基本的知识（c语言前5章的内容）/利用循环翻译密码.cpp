#include <stdio.h>
int main()
{
	char c;
	int i;
	c=getchar();
	while(c!='\n')
	{
	if(c>='A'&&c<='Z'||c>='a'&&c<='z')//�ж��Ƿ�Ҫִ�з�������Ĳ����� 
		if(c>='A'&&c<'W'||c>='a'&&c<'w')
		//ע������wǰ�治���еȺţ���Ȼ����������ţ���ʾ�Ժ���Ե�ʱ��Ҫ�ڱ�Ե���в��ԣ�		
			c+=4;
		else 
			c=c+4-26;
	printf("%c",c);
	c=getchar(); 
	}
	return 0;
}
