#include <stdio.h>
#include <stdlib.h> 
int main()
{
	FILE *gp;
	char ch,filename[20];
	printf("�����������ļ�����\n");
	scanf("%s",filename);
	getchar();
	if((gp=fopen(filename,"w"))==NULL)//����if����д�˷ֺţ������if���ʧȥ���жϹ��ܣ� 
	{
		printf("cannot open file.\n");
		exit(0);	
	}
	printf("������һ���ַ��Դ��浽�����ϣ�\n");
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
