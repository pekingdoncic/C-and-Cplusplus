#include <stdio.h>
#include <stdlib.h> 
int main()
{
	FILE *gp;
	char ch,firename[20];
	printf("�����������ļ�����\n");
	scanf("%s",firename);
	printf("%s\n",firename);
	getchar();
	//gp=fopen("firename","w");
	if((gp=fopen("firename","w"))==NULL)//ע�����û�зֺţ��зֺ��������û���ˣ� 
	{
		printf("cannot open file.\n");
		exit(0);	
	}
	printf("������һ���ַ��Դ��浽�����ϣ�\n");
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
