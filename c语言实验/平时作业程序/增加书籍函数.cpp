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
int i,k,j,p;
fp=fopen("library.txt","a");//�״δ��ļ��� ��û���ļ������Զ��������ļ� 
	for(i=0,p=0;i<N;i++)
	{	
		printf("��1�����鼮�й���Ϣ����0��������:\n");//ѯ���Ƿ�������� 
		scanf("%d",&j);
		if(j==0) 
		{
			fclose(fp);
			return 0;
		} 
		else
		{	
			printf("��������鼮����ţ������������磬����:\n");
			scanf("%ld\n%s%s%s",&a[i].num,a[i].name,a[i].addr,a[i].writ);
				Z:;
				for(k=0,p=0;k<i;k++)//�ⲿ���ǲ��ز�������û��д���غ����ɾ���� 
				{
					if(a[k].num==a[i].num)
					{ 
						printf("�����ظ�¼�룡\n");
						p=1;
						printf("������������鼮����ţ������������磬����:\n");
						scanf("%ld\n%s%s%s",&a[i].num,a[i].name,a[i].addr,a[i].writ);
						goto Z;//���������ʱ���Ī����ס�� 
					} 
				}
			while(1)//�����鼮���� 
			{
			printf("��ѡ���������ͣ�\n");
			printf("��1Ϊרҵ��\n��2Ϊ�ο���\n��3Ϊ����\n��4ΪС˵\n��5Ϊ����\n");
			scanf("%d",&m);
			if(m==1||m==2||m==3||m==4||m==5)
			{
				switch(m)
					{
					case professionalbook:printf("%-20s\n","�Ȿ��Ϊרҵ��");break;
					case referencebook:printf("%-20s\n","�Ȿ��Ϊ�ο���");	break;
					case report:printf("%-20s\n","�Ȿ��Ϊ����");break;
					case fiction:printf("%-20s\n","�Ȿ��ΪС˵");break;
					case others:printf("%-20s\n","�Ȿ��Ϊ����");break;
					} 
					break;
			}
			else
				printf("�޴������͵��鼮��������ѡ��:\n");
			}
			printf("%ld\t%s\t%s\t%s\t",a[i].num,a[i].name,a[i].addr,a[i].writ);
			printf("��ѡ���Ƿ񱣴棬��Ҫ���棬�밴2��\n");//�����鼮��Ϣ 
			scanf("%d",&j);
			if(j==2&&p==0)//д��û�����⣡
			{     
				fprintf(fp,"%d\t",a[i].num);
				fputs(a[i].name,fp);
				fputs(a[i].addr,fp);
				fputs(a[i].writ,fp);
				fprintf(fp,"%d\t",m);
				fputs("\n",fp);
				printf("����ɹ���\n"); 
			}
			else
			{
				printf("����ʧ�ܣ�\n");
			}
		}
		}
		for(i=0;i<N;i++)
		{
			fscanf(fp,"%-10ld\t","%-20s\t","%-20s\t","%-20s\t","%-10d\n"
			,a[i].num,a[i].name,a[i].addr,a[i].writ,m);
			printf("%-10ld\t","%-20s\t","%-20s\t","%-20s\t","%-10d\n",
			a[i].num,a[i].name,a[i].addr,a[i].writ,m);
		}
	return 0;
}
