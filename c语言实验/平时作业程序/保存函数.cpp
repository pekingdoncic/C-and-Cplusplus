#include <stdio.h>
#include <stdlib.h> 
#define N 100
int main() 
{
enum type{professionalbook=1,referencebook,report,fiction,others};
typedef struct book
{
	long int num;
	char name[50];
	char addr[50];
	char writ[30];
	enum type{professionalbook,referencebook,report,fiction,others}; 
}B;
enum type m;
	B a[N];
	FILE *fp;//����ָ����� 
	int i,k=3,j,p=0;
	fp=fopen("library","w");//�״δ��ļ��� ��û���ļ������Զ��������ļ� 
	if(fp==NULL)
	{
		printf("�޷����ļ���\n");
		exit(0); 
	}
	else
	{
	 printf("��������鼮����ţ������������磬����:\n");
		scanf("%ld\n%s%s%s",&a[i].num,a[i].name,a[i].addr,a[i].writ);
	for(i=0;i<k;i++)//д��û�����⣡ 
		{
			fprintf(fp,"%d\t",a[i].num);
			fputs(a[i].name,fp);
			fputs(a[i].addr,fp);
			fputs(a[i].writ,fp);
			fputs("\n",fp);
		}
	}
	printf("����ɹ���\n"); 
	fclose(fp);
	return 0;
}
