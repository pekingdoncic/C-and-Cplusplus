#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#define N 100
enum type{professionalbook=1,referencebook,report,fiction,others}m;
typedef struct book
{
	int num;
	char name[50];
	char addr[50];
	char writ[30];
	enum  type m; 
}B;
int main()
{
	int i,j,k=0,q,p;
	B a[N];
	B b;
	FILE *fp;
	fp=fopen("library.txt","r");
	if(fp==NULL)
	{
		printf("该文件为空，无法打开！\n");
		exit(0);		
	}
	else
	{
		for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++);
		for(p=0;p<i-1;p++)
		{	
		for(q=0;q<i-1-p;q++)
		{
			if(strcmp(a[q].name,a[q+1].name)>0)
			{
				b=a[q];
				a[q]=a[q+1];
				a[q+1]=b;
			}
			else if(strcmp(a[q].name,a[q+1].name)==0&&a[q].num>a[q+1].num)
				{
						b=a[q];
						a[q]=a[q+1];
						a[q+1]=b;
				}
			}
		}
		printf("书籍的类别:专业书(1)、工具书(2)、报告(3)、小说(4)、其他(5)\n");
		printf("书籍序号    书籍名称          书籍作者          出版社            书籍类别      \n");
		for(j=0;j<i;j++)
		printf("   %-9d %-15s %-18s %-20s %-40d\n",a[j].num,a[j].name,a[j].addr,a[j].writ,a[j].m);
	}
	return 0;
}
