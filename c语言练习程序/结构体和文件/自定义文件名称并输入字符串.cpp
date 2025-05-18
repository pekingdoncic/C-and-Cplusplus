#include <stdio.h>
#include <stdlib.h> 
int main()
{
	FILE *gp;
	char ch,firename[20];
	printf("请输入所用文件名：\n");
	scanf("%s",firename);
	printf("%s\n",firename);
	getchar();
	//gp=fopen("firename","w");
	if((gp=fopen("firename","w"))==NULL)//注意这块没有分号！有分号这个语句就没用了！ 
	{
		printf("cannot open file.\n");
		exit(0);	
	}
	printf("请输入一串字符以储存到磁盘上：\n");
	while(ch!='#')
	{
		ch=getchar();
		fputc(ch,gp);
		putchar(ch);
	}
	fclose(gp);
	putchar(10);
	return 0;
}
