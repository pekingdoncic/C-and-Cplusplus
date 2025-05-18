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
	FILE *fp;//声明指针变量 
	int i,k=3,j,p=0;
	fp=fopen("library","w");//首次打开文件， 若没有文件将会自动创建新文件 
	if(fp==NULL)
	{
		printf("无法打开文件！\n");
		exit(0); 
	}
	else
	{
	 printf("请输入该书籍的序号，书名，出版社，作者:\n");
		scanf("%ld\n%s%s%s",&a[i].num,a[i].name,a[i].addr,a[i].writ);
	for(i=0;i<k;i++)//写入没有问题！ 
		{
			fprintf(fp,"%d\t",a[i].num);
			fputs(a[i].name,fp);
			fputs(a[i].addr,fp);
			fputs(a[i].writ,fp);
			fputs("\n",fp);
		}
	}
	printf("保存成功！\n"); 
	fclose(fp);
	return 0;
}
