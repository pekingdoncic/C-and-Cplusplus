#include <stdio.h>
#define N 100
#include <string.h>
#include <stdlib.h> 
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
	B a[N];
	B b[N];
	int i;
	int x;
	int j=0,k=0,l=0,p=0,q=0,r=0;
	FILE *fp;
	fp=fopen("library.txt","r");
	if(fp==NULL)
	{
		printf("该文件为空，无法打开！\n");
		exit(0);		
	}
	else
	{
		printf("请问您想查看哪种类型的书籍？\n"); 
		printf("提示：书籍的类别:专业书(1)、工具书(2)、报告(3)、小说(4)、其他(5)\n");
		printf("请输入数字1到5之间的任意一个数字！\n");
		scanf("%d",&x);
		for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
			if(x==a[i].m) 
			{
			b[j]=a[i];
			j++;
			}
		}
		rewind(fp);
		for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
			switch(a[i].m)//统计每本书的个数！ 
			{
				case 1:r++;break;
				case 2:k++;break;
				case 3:l++;break;
				case 4:p++;break;
				case 5:q++;break; 
			}
		}
		switch(x)
		{
			case 1:
			{
			if(r==0)
			{
				printf("没有该类型的书籍！\n");
			}
			else
			{
			printf("专业书有%d本\n",r);
			printf("书籍序号    书籍名称          书籍作者          出版社            书籍类别      \n");
			for(i=0;i<r;i++)
			printf("   %-9d %-15s %-18s %-20s %-40d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
			}
			break;
			} 
			case 2:
			{
				if(k==0)
				{
				printf("没有该类型的书籍！\n");
				}
			else
			{
			printf("参考书有%d本\n",k);
			printf("书籍序号    书籍名称          书籍作者          出版社            书籍类别      \n");
			for(i=0;i<k;i++)
			printf("   %-9d %-15s %-18s %-20s %-40d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
			}
			break;
			} 
			case 3:
			{ 
			if(l==0)
			{
				printf("没有该类型的书籍！\n");
			}
			else
			{
			printf("报告有%d本\n",l);
			printf("书籍序号    书籍名称          书籍作者          出版社            书籍类别      \n");
			for(i=0;i<l;i++)
			printf("   %-9d %-15s %-18s %-20s %-40d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
			}
			break;
			} 
			case 4:
			{
			if(p==0)
			{
				printf("没有该类型的书籍！\n");
			}
			else
			{
			printf("小说有%d本\n",p);
			printf("书籍序号    书籍名称          书籍作者          出版社            书籍类别      \n");
			for(i=0;i<p;i++)
				printf("   %-9d %-15s %-18s %-20s %-40d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
			}
			break;
			}
			case 5:
			{
			if(q==0)
			{
				printf("没有该类型的书籍！\n");
			}
			else
			{
			printf("其他类型的书籍有%d本\n",q);
			printf("书籍序号    书籍名称          书籍作者          出版社            书籍类别      \n");
			for(i=0;i<j;i++)
			printf("   %-9d %-15s %-18s %-20s %-40d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
			} 
			break;
			} 
		 } 
	}//把书籍信息都要输出！ 
	fclose(fp);
	return 0;
}
	
