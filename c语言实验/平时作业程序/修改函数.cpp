#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#define N 100
enum type{professionalbook=1,referencebook,report,fiction,others}m;
typedef struct book
{
	long int num;
	char name[50];
	char addr[50];
	char writ[30];
	enum type m; 
}B;

int main()
{
	B a[N];
	FILE *fp; 
	int i,x,y,j,k,n,p=0;
	fp=fopen("library.txt","r");
	if(fp==NULL)
	{
		printf("���ļ�ʧ�ܣ�");
		exit(0);
	}
	else
	{	A:;
		printf("��������Ҫ�޸ĵ��鼮��ţ�\n");
		scanf("%d",&x);
		for(j=0;(fscanf(fp,"%d%s %s %s %d\n",&a[j].num,a[j].name,a[j].addr,a[j].writ,&a[j].m))==5;j++);//����ͳ�����ݸ����� 
		rewind(fp);
		for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
			//printf("%-9d %-15s %-18s %-20s %-40d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			if(x==a[i].num)
			{
			printf("�鼮���    �鼮����          ������           �鼮����           �鼮���      \n");
			printf("   %-9d %-15s %-18s %-20s %-40d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1;
			break;	
			}	
		}
		if(p==0)
			{
			printf("���ļ���û���Ȿ�飡�����������鼮�޸���ţ�\n");
			goto A;
			}
		else
	{
		printf("�����������޸ĵ���Ϣ��\n");
		printf("(��ʾ����1Ϊ�޸�ͼ�����ƣ���2Ϊ�޸�ͼ�����ߣ���3Ϊ�޸�ͼ������磬��4Ϊ�޸�ͼ������)\n");
		scanf("%d",&y);
		switch(y)
			{
		case 1:
			{
			printf("������ı���ͼ�����ƣ�\n");
			scanf("%s",a[i].name);
			break;	
			}
		case 2:
			{
			printf("������ı���ͼ�����ߣ�\n");
			scanf("%s",a[i].writ);
			break;	
			}
			case 3:
			{
			printf("������ı���ͼ������磺\n");
			scanf("%s",a[i].addr);
			break;	
			}
		case 4:
			{
			printf("������ı���ͼ������磺\n");
			printf("�鼮�����:רҵ��(1)��������(2)������(3)��С˵(4)������(5)\n");
			scanf("%d",&a[i].m);
			break;	
			}	
		}
		fclose(fp); 
		C:;
		printf("��ѡ���Ƿ񱣴棡�����水2��\n");
		scanf("%d",&n);
		if(n==2)
		{
		fp=fopen("library.txt","w");
		rewind(fp);
		for(k=0;k<j;k++)
		fprintf(fp,"%d\t%s\t%s\t%s\t%d\n",a[k].num,a[k].name,a[k].addr,a[k].writ,a[k].m);			
		printf("����ɹ���\n");
		}
		else
		{
			printf("����ʧ�ܣ�\n�����±��棡\n");
			goto C; 
		}
	}
		fclose(fp);
	}
	return 0;
}

