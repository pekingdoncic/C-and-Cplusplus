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
		printf("打开文件失败！");
		exit(0);
	}
	else
	{	A:;
		printf("请输入想要修改的书籍序号：\n");
		scanf("%d",&x);
		for(j=0;(fscanf(fp,"%d%s %s %s %d\n",&a[j].num,a[j].name,a[j].addr,a[j].writ,&a[j].m))==5;j++);//用于统计数据个数！ 
		rewind(fp);
		for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
			//printf("%-9d %-15s %-18s %-20s %-40d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			if(x==a[i].num)
			{
			printf("书籍序号    书籍名称          出版社           书籍作者           书籍类别      \n");
			printf("   %-9d %-15s %-18s %-20s %-40d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1;
			break;	
			}	
		}
		if(p==0)
			{
			printf("在文件中没有这本书！请重新输入书籍修改序号！\n");
			goto A;
			}
		else
	{
		printf("请输入你想修改的信息：\n");
		printf("(提示：按1为修改图书名称，按2为修改图书作者，按3为修改图书出版社，按4为修改图书类型)\n");
		scanf("%d",&y);
		switch(y)
			{
		case 1:
			{
			printf("请输入改变后的图书名称：\n");
			scanf("%s",a[i].name);
			break;	
			}
		case 2:
			{
			printf("请输入改变后的图书作者：\n");
			scanf("%s",a[i].writ);
			break;	
			}
			case 3:
			{
			printf("请输入改变后的图书出版社：\n");
			scanf("%s",a[i].addr);
			break;	
			}
		case 4:
			{
			printf("请输入改变后的图书出版社：\n");
			printf("书籍的类别:专业书(1)、工具书(2)、报告(3)、小说(4)、其他(5)\n");
			scanf("%d",&a[i].m);
			break;	
			}	
		}
		fclose(fp); 
		C:;
		printf("请选择是否保存！（保存按2）\n");
		scanf("%d",&n);
		if(n==2)
		{
		fp=fopen("library.txt","w");
		rewind(fp);
		for(k=0;k<j;k++)
		fprintf(fp,"%d\t%s\t%s\t%s\t%d\n",a[k].num,a[k].name,a[k].addr,a[k].writ,a[k].m);			
		printf("保存成功！\n");
		}
		else
		{
			printf("保存失败！\n请重新保存！\n");
			goto C; 
		}
	}
		fclose(fp);
	}
	return 0;
}

