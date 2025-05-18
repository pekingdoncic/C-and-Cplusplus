#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	enum lei		
	{zhuanye,gongjv,baogao,xiaoshuo,qita};
	struct book
	{
		int xuhao; char name[20];
		char zuozhe[20]; char cbs[20];
		enum lei leibie;
	};
int main()
{
	void xianshi();
	struct book *luru(int *p,struct book a[]);
	void liulan(int *p);
	void chaxun(int *p);
	void baocun(struct book a[],int *p,int *pp);
	struct book *zenjia(struct book a[],int *p,int *pp);
	struct book *shanchu(struct book a[],int *p);
	struct book *xiugai(struct book a[],int *p,int *pp);
	void tongji(int *p);
	void paixu(int *p);
	struct book *p1;
	struct book a[100];
	int b,n=0,m=0;
	int *p2=&n,*p3=&m;
	p1=a;
	system("color 0A");
	system("title 个人书籍管理系统");
	while(1)
	{	
		system("pause");
		xianshi();
		scanf("%d",&b);
		switch(b)
		{
		case 1:luru(p2,a);break;
		case 2:baocun(a,p2,p3);break;
		case 3:liulan(p2);break;
		case 4:chaxun(p2);break;
		case 5:zenjia(a,p2,p3);break;
		case 6:shanchu(a,p2);break;
		case 7:xiugai(a,p2,p3);break;
		case 8:tongji(p2);break;
		case 9:paixu(p2);break;
		case 10:exit(1);break;
		default:exit(1);break;
		}
	}
	return 0;
}
void xianshi()
{
	printf("    ************欢迎使用个人书籍管理系统************\n");
	printf("    ------------------------------------------------\n");
	printf("    -----------------1.录入书籍信息-----------------\n");
	printf("    -----------------2.保存书籍信息-----------------\n");
	printf("    -----------------3.浏览书籍信息-----------------\n");
	printf("    -----------------4.查询书籍信息-----------------\n");
	printf("    -----------------5.增加书籍信息-----------------\n");
	printf("    -----------------6.删除书籍信息-----------------\n");
	printf("    -----------------7.修改书籍信息-----------------\n");
	printf("    -----------------8.按类别统计书籍的数量---------\n");
	printf("    -----------------9.按书名对书籍进行排序---------\n");
	printf("    -----------------10.退出------------------------\n");
	printf("    ------------------------------------------------\n");
	printf("    ********************谢谢使用********************\n");
	printf("请输入你要进行的操作：");
}
struct book *luru(int *p,struct book a[])
{
	FILE *fp;
	int i,j,m;
	struct book *p1;
	p1=a;	
	printf("请输入想要输入的书籍个数：");
	printf("\n");
	scanf("%d",p);
	printf("提示：先输入书籍的序号，随后依次输入书名，作者，出版社和书籍类别。\n");
	printf("注：0表示专业，1表示工具，2表示保存，3表示小说，4表示其他。\n");
	if((fp=fopen("1.txt","w"))==NULL)
	{
		printf("打开文件失败！");
		exit(0);
	}
	printf("请输入你要输入%d本书籍的信息：\n",*p);
	for(i=0;i<*p;i++)
	{
		scanf("%d%s%s%s%d",&a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,&a[i].leibie);
	}
	for(j=0;j<*p;j++)
	{
		for(i=1;i<*p;i++)
		{
			if(a[j].xuhao==a[i].xuhao&&i!=j)
			{
				printf("检测到输入第%d本书和第%d本书的序号相同，请更改(选1更改前一本书，选2更改后一本书)：",j+1,i+1);
				scanf("%d",&m);
				if(m==1)
					scanf("%d",&a[j].xuhao);
				else scanf("%d",&a[i].xuhao);
				j=0;
				i=0;
			}
		}
	}
	printf("书籍输入完毕后，不要忘记按2保存哦，亲~\n");
	fclose(fp);
	return p1;
}
void baocun(struct book a[],int *p,int *pp)
{
	FILE *fp;
	int i;
	if(*p==0||*pp==0)
	{
		if((fp=fopen("1.txt","w"))==NULL)
		{
			printf("打开文件失败！");
			exit(0);
		}
		for(i=0;i<*p;i++)
		{
			fwrite(&a[i],sizeof(struct book),1,fp);
		}
		fclose(fp);
		printf("保存书籍信息成功！");
	}
	else
	{
		if((fp=fopen("1.txt","a"))==NULL)
		{
			printf("打开文件失败！");
			exit(0);
		}
		for(i=0;i<*p;i++)
		fwrite(&a[i],sizeof(struct book),1,fp);
		fclose(fp);
		printf("保存信息成功！");
	}
	*pp=0;
}
void liulan(int *p)
{
	FILE *fp;
	int i;
	char ch;
	struct book a[100];
	if((fp=fopen("1.txt","r"))==NULL)
	{
		printf("打开文件失败！");
		exit(0);
	}
	ch=fgetc(fp);
	rewind(fp);
	if(ch==EOF)
		printf("文件内没有书籍的信息！");
	else
	{
		printf("书籍的类别:专业书(0)、工具书(1)、报告(2)、小说(3)、其他(4)\n");
		printf("书籍序号    书籍名称          书籍作者          出版社            书籍类别      \n");
		for(i=0;i<*p;i++)
		fread(&a[i],sizeof(struct book),1,fp);
		for(i=0;i<*p;i++)
		printf("   %-9d %-15s %-18s %-20s %-40d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
	}
	fclose(fp);
}
void chaxun(int *p)
{
	FILE *fp;
	int i,m,lead=0,n;
	struct book a[100];
	char ch[50];
	if((fp=fopen("1.txt","r"))==NULL)
	{
		printf("文件打开失败！");
		exit(0);
	}
	for(i=0;i<*p;i++)
	{
		fread(&a[i],sizeof(struct book),1,fp);
	}
	fclose(fp);
	printf("请输入你要查询书籍的方式(1表示书名，2表示作者，3表示出版社，4表示类别)：");
	scanf("%d",&m);
	switch (m)
	{
	case 1:printf("请输入你要查询书籍的名称：");
		scanf("%s",ch);
		printf("书籍的类别:专业书(0)、工具书(1)、报告(2)、小说(3)、其他(4)");
		for(i=0;i<*p;i++)
		{
			if(strcmp(ch,a[i].name)==0)
			{
				printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
				lead=1;
			}
		}
		break;
	case 2:printf("请输入你要查询书籍的作者：");
		scanf("%s",ch);
		printf("书籍的类别:专业书(0)、工具书(1)、报告(2)、小说(3)、其他(4)");
		for(i=0;i<*p;i++)
		{
			if(strcmp(ch,a[i].zuozhe)==0)
			{
				printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
				lead=1;
			}
		}
		break;
	case 3:printf("请输入你要查询书籍的出版社：");
		scanf("%s",ch);
		printf("书籍的类别:专业书(0)、工具书(1)、报告(2)、小说(3)、其他(4)");
		for(i=0;i<*p;i++)
		{
			if(strcmp(ch,a[i].cbs)==0)
			{
				printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
				lead=1;
			}
		}
		break;
	case 4:printf("请输入你要查询书籍的类别：");
		scanf("%d",&n);
		printf("书籍的类别:专业书(0)、工具书(1)、报告(2)、小说(3)、其他(4)\n");
		for(i=0;i<*p;i++)
		{
			if(n==a[i].leibie)
			{
				printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
				lead=1;
			}
		}
		break;
	default:break;
	}
	if(lead==0)
		printf("存入的书籍中没有匹配的信息！");
}
struct book *zenjia(struct book a[],int *p,int *pp)
{
	FILE *fp;
	int i,n,j;
	struct book *p1;
	struct book b[100];
	if((fp=fopen("1.txt","r"))==NULL)
	{
		printf("文件打开失败！");
		exit(0);
	}
	for(i=0;i<*p;i++)
		fread(&b[i],sizeof(struct book),1,fp);
	p1=a;
	*pp=1;
	printf("请输入你想要增加的书籍的个数：");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d%s%s%s%d",&a[j].xuhao,a[j].name,a[j].zuozhe,a[j].cbs,&a[j].leibie);
aaa:for(i=0;i<*p;i++)
		{
			if(b[i].xuhao==a[j].xuhao)
			{
				printf("输入的序号与文件原有书籍序号重复，请重新输入序号：");
				scanf("%d",&a[j].xuhao);
				i=-1;
			}
		}
		for(i=0;i<j;i++)
		{
			if(j!=0&&a[j].xuhao==a[i].xuhao)
			{
				printf("输入的序号与增加书籍序号重复，请重新输入序号：");
				scanf("%d",&a[j].xuhao);
				i=-1;
				goto aaa;
			}
		}
		printf("增加书籍的信息成功！\n");
		if(j+1<n)
		{
			printf("请继续输入下一本书籍的信息：");
		}
	}
	*p=*p+n;
	printf("不要忘了按2保存哦，亲~\n");
	return p1;
}
struct book *shanchu(struct book a[],int *p)
{
	FILE *fp;
	int i,m,z,j,g;
	struct book b;
	struct book *p1;
	p1=a;
	if((fp=fopen("1.txt","r"))==NULL)
	{
		printf("打开文件失败！");
		exit(0);
	}
	for(i=0;i<*p;i++)
		fread(&a[i],sizeof(struct book),1,fp);
	fclose(fp);
	for(i=0;i<*p;i++)
		printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
	printf("请输入你要删除书籍的本数：");
	scanf("%d",&m);
	printf("\n请输入你要删除的书籍的序号:");
	for(j=0;j<m;j++)
	{
		scanf("%d",&z);
		for(i=0;i<*p;i++)
		{
			if(z==a[i].xuhao)
			{
				printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
			}
		}
		printf("确定删除这本书籍的信息吗？(1表示是，2表示否)");
		scanf("%d",&g);
		for(i=0;i<*p;i++)
		{
			if(z==a[i].xuhao&&g==1)
			{
				b=a[i];
				a[i]=a[*p-1];;
				a[*p-1]=b;;
				*p=*p-1;
			}
		}
		if(g==2)
			printf("此书籍的删除操作已经停止！");
	}
	printf("不要忘记按2保存哦，亲~");
	return p1;
}
struct book *xiugai(struct book a[],int *p,int *pp)
{
	FILE *fp;
	int i,j,m,z,g,y;
	struct book *p1;
	p1=a;
	if((fp=fopen("1.txt","r"))==NULL)
	{
		printf("文件打开失败！");
		exit(0);
	}
	for(i=0;i<*p;i++)
		fread(&a[i],sizeof(struct book),1,fp);
	for(i=0;i<*p;i++)
		printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
	printf("输入想要修改书籍信息的个数：");
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{	
		printf("请输入想要修改的书籍的序号：");
		scanf("%d",&z);
		for(i=0;i<*p;i++)
		{
			if(z==a[i].xuhao)
				printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
		}
		printf("您真的要修改这个书籍的信息吗？(1表示是，2表示否。)");
		scanf("%d",&g);
		for(i=0;i<*p;i++)
		{
			if(z==a[i].xuhao&&g==1)
			{
				printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
				printf("请输入你要修改的信息选项：(1表示序号，2表示书名，3表示作者，4表示出版社，5表示书籍类别)");
				scanf("%d",&y);
				switch (y)
				{
				case 1:printf("请输入新的书籍序号：");scanf("%d",&a[i].xuhao);break;
				case 2:printf("请输入新的书籍名称：");scanf("%s",a[i].name);break;
				case 3:printf("请输入新的书籍作者：");scanf("%s",a[i].zuozhe);break;
				case 4:printf("请输入新的书籍出版社：");scanf("%s",a[i].cbs);break;
				case 5:printf("请输入新的书籍类别：");scanf("%d",&a[i].leibie);break;
				default:break;
				}
				printf("修改书籍信息成功！\n");
			}
			if(g==2)
				printf("已停止对此书籍信息的修改！");
		}
	}
	printf("修改完成后，不要忘记按2保存哦，亲~");
	return p1;
}
void tongji(int *p)
{
	FILE *fp;
	int i;
	int n,m=0,u=0;
	struct book a[100],b[100];
	if((fp=fopen("1.txt","r"))==NULL)
	{
		printf("文件打开失败！");
		exit(0);
	}
	for(i=0;i<*p;i++)
		fread(&a[i],sizeof(struct book),1,fp);
	for(i=0;i<*p;i++)
		printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
	printf("请输入你要统计的书籍的类别：");
	scanf("%d",&n);
	for(i=0;i<*p;i++)
	{
		if(n==a[i].leibie)
		{
			m=m+1;
			b[u].xuhao=a[i].xuhao;strcpy(b[u].name,a[i].name);strcpy(b[u].zuozhe,a[i].zuozhe);strcpy(b[u].cbs,a[i].cbs);b[u].leibie=a[i].leibie;
			u=u+1;
		}
	}
	printf("此书籍的本数为：%d\n",m);
	printf("此类书籍的信息如下：\n");
	for(i=0;i<u;i++)
		printf("%d %s %s %s %d\n",b[i].xuhao,b[i].name,b[i].zuozhe,b[i].cbs,b[i].leibie);
}
void paixu(int *p)
{
	FILE *fp;
	struct book a[100];
	struct book b;
	int i,j;
	if((fp=fopen("1.txt","r"))==NULL)
	{
		printf("文件打开失败！");
		exit(0);
	}
	for(i=0;i<*p;i++)
		fread(&a[i],sizeof(struct book),1,fp);
	for(j=0;j<*p-1;j++)
	{
		for(i=0;i<*p-j-1;i++)
		{
			if(strcmp(a[i].name,a[i+1].name)>0)
			{
				b.xuhao=a[i].xuhao;strcpy(b.name,a[i].name);strcpy(b.zuozhe,a[i].zuozhe);strcpy(b.cbs,a[i].cbs);b.leibie=a[i].leibie;
				a[i].xuhao=a[i+1].xuhao;strcpy(a[i].name,a[i+1].name);strcpy(a[i].zuozhe,a[i+1].zuozhe);strcpy(a[i].cbs,a[i+1].cbs);a[i].leibie=a[i+1].leibie;
				a[i+1].xuhao=b.xuhao;strcpy(a[i+1].name,b.name);strcpy(a[i+1].zuozhe,b.zuozhe);strcpy(a[i+1].cbs,b.cbs);a[i+1].leibie=b.leibie;
			}
			else if(strcmp(a[i].name,a[i+1].name)==0&&a[i].xuhao>a[i+1].xuhao)
			{
				b.xuhao=a[i].xuhao;strcpy(b.name,a[i].name);strcpy(b.zuozhe,a[i].zuozhe);strcpy(b.cbs,a[i].cbs);b.leibie=a[i].leibie;
				a[i].xuhao=a[i+1].xuhao;strcpy(a[i].name,a[i+1].name);strcpy(a[i].zuozhe,a[i+1].zuozhe);strcpy(a[i].cbs,a[i+1].cbs);a[i].leibie=a[i+1].leibie;
				a[i+1].xuhao=b.xuhao;strcpy(a[i+1].name,b.name);strcpy(a[i+1].zuozhe,b.zuozhe);strcpy(a[i+1].cbs,b.cbs);a[i+1].leibie=b.leibie;
			}
		}
	}
	for(i=0;i<*p;i++)
		printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
	fclose(fp);
}

