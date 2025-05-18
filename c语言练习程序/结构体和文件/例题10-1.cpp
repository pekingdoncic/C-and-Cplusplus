#include <stdio.h>
#include <stdlib.h> 
int main()
{
	FILE *gp;
	char ch,filename[20];
	printf("请输入所用文件名：\n");
	scanf("%s",filename);
	getchar();
	if((gp=fopen(filename,"w"))==NULL)//是你if后面写了分号，让这个if语句失去了判断功能！ 
	{
		printf("cannot open file.\n");
		exit(0);	
	}
	printf("请输入一串字符以储存到磁盘上：\n");
	ch=getchar();
	while(ch!='#')
	{
		fputc(ch,gp);
		putchar(ch);
		ch=getchar();
	}
	fclose(gp);
	putchar(10);
	return 0;
}
