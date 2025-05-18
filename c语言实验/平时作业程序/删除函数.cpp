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
B a[N];
B b;
int main()
{
	int i,l,j,k,n;
	FILE *fp;
	fp=fopen("Library.txt","r");
	if(fp==NULL)
	{
		printf("打开文件失败！");
		exit(0);
	}
	else
	{ 
	for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++);
	rewind(fp);
	if(i==0)
		printf("无书籍在文件中！\n");
	else
	{
	printf("请输入要删除的书籍序号：\n");
	A:;
	scanf("%d",&j);
	for(k=0;(fscanf(fp,"%d%s %s %s %d\n",&a[k].num,a[k].name,a[k].addr,a[k].writ,&a[k].m))==5;k++)
	{
	if(j==a[k].num)
		{
			printf("%-5d\t%-10s%-10s\t%-10s\t%-5d\n",a[k].num,a[k].name,a[k].addr,a[k].writ,a[k].m); 
			printf("请确认是否删除？(删除请按1，不删除请按2)\n");
			scanf("%d",&l);
			if(l==1)
			{
				printf("%-5d\t%-10s%-10s\t%-10s\t%-5d\n",a[k].num,a[k].name,a[k].addr,a[k].writ,a[k].m);
				printf("%d\n%d\n",i,k);
				for(j=k;j<i-1;j++)
				{	
				a[j]=a[j+1];//覆盖 
				}
				for(j=0;j<i-1;j++)
				{
					printf("%-5d\t%-10s%-10s\t%-10s\t%-5d\n",a[j].num,a[j].name,a[j].addr,a[j].writ,a[j].m);
				}
			}
		else
			{
			printf("没有这本书，请重新输入书籍序号：\n");
			goto A; 
			}
		}
	}
	fclose(fp);
	fp=fopen("library.txt","w");
	for(j=0;j<i-1;j++)
	fprintf(fp,"%d\t%s\t%s\t%s\t%d\n",a[j].num,a[j].name,a[j].addr,a[j].writ,a[j].m);
	printf("保存成功！\n");	
	fclose(fp);
	}
	}
	return 0;
}
