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
int i,k,j,p;
fp=fopen("library.txt","a");//首次打开文件， 若没有文件将会自动创建新文件 
	for(i=0,p=0;i<N;i++)
	{	
		printf("按1输入书籍有关信息；按0结束输入:\n");//询问是否继续输入 
		scanf("%d",&j);
		if(j==0) 
		{
			fclose(fp);
			return 0;
		} 
		else
		{	
			printf("请输入该书籍的序号，书名，出版社，作者:\n");
			scanf("%ld\n%s%s%s",&a[i].num,a[i].name,a[i].addr,a[i].writ);
				Z:;
				for(k=0,p=0;k<i;k++)//这部分是查重操作，但没有写查重后如何删除！ 
				{
					if(a[k].num==a[i].num)
					{ 
						printf("该书重复录入！\n");
						p=1;
						printf("请重新输入该书籍的序号，书名，出版社，作者:\n");
						scanf("%ld\n%s%s%s",&a[i].num,a[i].name,a[i].addr,a[i].writ);
						goto Z;//重新输入的时候会莫名卡住！ 
					} 
				}
			while(1)//输入书籍类型 
			{
			printf("请选择该书的类型：\n");
			printf("按1为专业书\n按2为参考书\n按3为报告\n按4为小说\n按5为其他\n");
			scanf("%d",&m);
			if(m==1||m==2||m==3||m==4||m==5)
			{
				switch(m)
					{
					case professionalbook:printf("%-20s\n","这本书为专业书");break;
					case referencebook:printf("%-20s\n","这本书为参考书");	break;
					case report:printf("%-20s\n","这本书为报告");break;
					case fiction:printf("%-20s\n","这本书为小说");break;
					case others:printf("%-20s\n","这本书为其他");break;
					} 
					break;
			}
			else
				printf("无此种类型的书籍，请重新选择:\n");
			}
			printf("%ld\t%s\t%s\t%s\t",a[i].num,a[i].name,a[i].addr,a[i].writ);
			printf("请选择是否保存，若要保存，请按2！\n");//保存书籍信息 
			scanf("%d",&j);
			if(j==2&&p==0)//写入没有问题！
			{     
				fprintf(fp,"%d\t",a[i].num);
				fputs(a[i].name,fp);
				fputs(a[i].addr,fp);
				fputs(a[i].writ,fp);
				fprintf(fp,"%d\t",m);
				fputs("\n",fp);
				printf("保存成功！\n"); 
			}
			else
			{
				printf("保存失败！\n");
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
