#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#define N 100
enum type{professionalbook=1,referencebook,report,fiction,others}m;//只能找到一个数据！ 
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
		printf("该文件为空，无法查找文件\n");
		exit(0);		
	}
	else{
	int i;
	printf("请选择要查询的类型：\n提示：输入1为书籍序号查找\n");
	printf("输入2为书籍名称查找\n");
	printf("输入3为书籍出版社查找\n"); 
	printf("输入4为书籍作者查找\n"); 
	printf("输入5为书籍类别查找\n");  
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
	printf("请输入书籍序号：\n");
		C:;
		scanf("%d",&j);
		fp=fopen("library.txt","r");
		for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
			{
				if(j==a[i].num)
				{
					printf("序号 书名      作者      出版社    类别\n");
					printf("   %-9d %-15s %-10s %-20s %-40d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
					p=1;
					continue;
				}
			}
			if(p==0)
				{
				printf("图书系统中没有这本图书!\n请重新输入图书编号：\n");
				goto C;
				}
			
			return;		
}
void addrfind()
{	
	char ch[20];
	int i,k,p=0;
	fp=fopen("library.txt","r");
	printf("请输入书籍出版社：\n");
	D:;
	scanf("%s",&ch);
	for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
		k=strcmp(ch,a[i].addr);//ccc用的结构体指针！ 
		if(k==0)
			{
			printf("序号 书名      作者      出版社    类别\n");
			printf("   %-9d %-15s %-10s %-20s %-40d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1; 
			break;
			}
		}
		if(p==0)
			{
				printf("图书系统中没有这本图书!\n请重新输入图书出版社：\n");
				goto D;
			}	
	
	return;
} 
void typefind()
{
	int i,j,p=0;
	printf("请输入书籍类型号：\n(书籍的类别:专业书(1)、工具书(2)、报告(3)、小说(4)、其他(5))\n");
		C:;
		scanf("%d",&j);
		fp=fopen("library.txt","r");
		for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
			{
				if(j==a[i].m)
				{
					printf("序号 书名      作者      出版社    类别\n");
					printf("   %-9d %-15s %-10s %-20s %-40d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
					p=1;
					continue;
				}
			}
			if(p==0)
				{
				printf("图书系统中没有这本图书!\n请重新输入图书类型：\n(书籍的类别:专业书(1)、工具书(2)、报告(3)、小说(4)、其他(5))\n");
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
	printf("请输入书籍名称：\n");
	D:;
	scanf("%s",&ch);
	for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
		k=strcmp(ch,a[i].name);//ccc用的结构体指针！ 
		if(k==0)
			{
			printf("序号 书名      作者      出版社    类别\n");
			printf("   %-9d %-15s %-10s %-20s %-40d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1;
			break;
			}
		}
		if(p==0)
			{
				printf("图书系统中没有这本图书!\n请重新输入图书名称：\n");
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
	printf("请输入书籍作者：\n");
	D:;
	scanf("%s",&ch);
	for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
		k=strcmp(ch,a[i].writ);//ccc用的结构体指针！ 
		if(k==0)
			{
			printf("序号 书名      作者      出版社    类别\n");
			printf("   %-9d %-15s %-10s %-20s %-40d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1;
			break;
			}
		}
		if(p==0)
			{
				printf("图书系统中没有这本图书!\n请重新输入图书作者：\n");
				goto D;
			}	
	return;
} 
