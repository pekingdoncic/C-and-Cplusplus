#include <stdio.h>
int main()
{
	void copy_string(char *from,char *to);
	char *a;
	char c[20]="I am a teacher.";
	//ע���ʼ��һ���Ƕ����ָ�����������Ƕ�ָ����ָ���ݵĳ�ʼ����->char *a;a="";! 
	a=c;
	char b[]="You are a teacher.";
	char *p=b;
	printf("string a=%s\nstring b=% s\n",a,b);
	printf("���ƺ���ַ�����\n");
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
	*to='\0';//ע��һ�£����һ��Ҫ����'\0',��Ȼ�Ļ��������ͣ�������� 
}
