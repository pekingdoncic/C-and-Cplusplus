#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#define N 100
enum type{professionalbook=1,referencebook,report,fiction,others}m;//ֻ���ҵ�һ�����ݣ� 
typedef struct book
{
	long int num;
	char name[50];
	char addr[50];
	char writ[30];
	enum type m; 
}B;
B a[N];
FILE *fp;
int main()
{	
	B a[N];
	FILE *fp;
	fp=fopen("library.txt","r");
	void numfind();
	void namefind();
	void typefind();
	void writfind();
	void addrfind();
	if(fp==NULL)
	{
		printf("���ļ�Ϊ�գ��޷������ļ�\n");
		exit(0);		
	}
	else{
	int i;
	printf("��ѡ��Ҫ��ѯ�����ͣ�\n��ʾ������1Ϊ�鼮��Ų���\n");
	printf("����2Ϊ�鼮���Ʋ���\n");
	printf("����3Ϊ�鼮���������\n"); 
	printf("����4Ϊ�鼮���߲���\n"); 
	printf("����5Ϊ�鼮������\n");  
	scanf("%d",&i);
	switch(i)
		{
		case 1:numfind();break;
		case 2:namefind();break;
		case 3:addrfind();break;
		case 4:writfind();break;
		case 5:typefind();break;
		default: break;
		} 
	}
	return 0;
} 
void numfind()
{
	B b[N]; 
	int i,j,p=0;
	printf("�������鼮��ţ�\n");
		C:;
		scanf("%d",&j);
		fp=fopen("library.txt","r");
		for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
			{
				if(j==a[i].num)
				{
					printf("��� ����      ����      ������    ���\n");
					printf("   %-9d %-15s %-10s %-20s %-40d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
					p=1;
					continue;
				}
			}
			if(p==0)
				{
				printf("ͼ��ϵͳ��û���Ȿͼ��!\n����������ͼ���ţ�\n");
				goto C;
				}
			
			return;		
}
void addrfind()
{	
	char ch[20];
	int i,k,p=0;
	fp=fopen("library.txt","r");
	printf("�������鼮�����磺\n");
	D:;
	scanf("%s",&ch);
	for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
		k=strcmp(ch,a[i].addr);//ccc�õĽṹ��ָ�룡 
		if(k==0)
			{
			printf("��� ����      ����      ������    ���\n");
			printf("   %-9d %-15s %-10s %-20s %-40d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1; 
			break;
			}
		}
		if(p==0)
			{
				printf("ͼ��ϵͳ��û���Ȿͼ��!\n����������ͼ������磺\n");
				goto D;
			}	
	
	return;
} 
void typefind()
{
	int i,j,p=0;
	printf("�������鼮���ͺţ�\n(�鼮�����:רҵ��(1)��������(2)������(3)��С˵(4)������(5))\n");
		C:;
		scanf("%d",&j);
		fp=fopen("library.txt","r");
		for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
			{
				if(j==a[i].m)
				{
					printf("��� ����      ����      ������    ���\n");
					printf("   %-9d %-15s %-10s %-20s %-40d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
					p=1;
					continue;
				}
			}
			if(p==0)
				{
				printf("ͼ��ϵͳ��û���Ȿͼ��!\n����������ͼ�����ͣ�\n(�鼮�����:רҵ��(1)��������(2)������(3)��С˵(4)������(5))\n");
				goto C;
				}
			return;		
}
void namefind()
{	
	char ch[20];
	//fread(&a,sizeof(B),1,fp);
	int i,k,p=0;
	fp=fopen("library.txt","r");
	printf("�������鼮���ƣ�\n");
	D:;
	scanf("%s",&ch);
	for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
		k=strcmp(ch,a[i].name);//ccc�õĽṹ��ָ�룡 
		if(k==0)
			{
			printf("��� ����      ����      ������    ���\n");
			printf("   %-9d %-15s %-10s %-20s %-40d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1;
			break;
			}
		}
		if(p==0)
			{
				printf("ͼ��ϵͳ��û���Ȿͼ��!\n����������ͼ�����ƣ�\n");
				goto D;
			}	
	return;
} 
void writfind()
{	
	char ch[20];
	//fread(&a,sizeof(B),1,fp);
	int i,k,p=0;
	fp=fopen("library.txt","r");
	printf("�������鼮���ߣ�\n");
	D:;
	scanf("%s",&ch);
	for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
		k=strcmp(ch,a[i].writ);//ccc�õĽṹ��ָ�룡 
		if(k==0)
			{
			printf("��� ����      ����      ������    ���\n");
			printf("   %-9d %-15s %-10s %-20s %-40d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1;
			break;
			}
		}
		if(p==0)
			{
				printf("ͼ��ϵͳ��û���Ȿͼ��!\n����������ͼ�����ߣ�\n");
				goto D;
			}	
	return;
} 
