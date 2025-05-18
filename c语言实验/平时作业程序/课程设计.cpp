#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#define N 100
enum type{professionalbook=1,referencebook,report,fiction,others}; 
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
	void input(int *q);
	void save();
	void add(int *q);
	void quit();
	void browse(B *p,int *q);
	void search(int *q);
	void count(int *q);
	void rank(B *p,int *q);
	void delect(B *p,int *q);
	void revamp(int *q); 
	int i,j;
	B a[N];
	B *p;
	p=a;
	int *q;
	int n=0;
	q=&n;
	system("color 0A");
	//system("title 个人书籍管理系统");
	FILE *fp;
	while(1)
	{
	D:;
	fp=fopen("library.txt","r");
	for(*q=0;(fscanf(fp,"%d%s %s %s %d\n",&a[*q].num,a[*q].name,a[*q].addr,a[*q].writ,&a[*q].m))==5;(*q)++);
	fclose(fp);
	printf("************欢迎使用个人书籍管理系统************\n");
	printf("------------------------------------------------\n");
	printf("-----------------1.录入书籍信息-----------------\n");
	printf("-----------------2.保存书籍信息-----------------\n");
	printf("-----------------3.浏览书籍信息-----------------\n");
	printf("-----------------4.查询书籍信息-----------------\n");
	printf("-----------------5.增加书籍信息-----------------\n");
	printf("-----------------6.删除书籍信息-----------------\n");
	printf("-----------------7.修改书籍信息-----------------\n");
	printf("-----------------8.按类别统计书籍的数量---------\n"); 
	printf("-----------------9.按书名对书籍进行排序---------\n"); 
	printf("-----------------10.退出------------------------\n");
	printf("------------------------------------------------\n");
	printf("******************谢谢使用**********************\n");
	printf("请选择(1-10):\n"); 
	scanf("%d",&i);
	switch(i)
		{
		case 1:input(q);break;
		case 2:save();break;
		case 3:browse(p,q);break;
		case 4:search(q);break;
		case 5:add(q);break;
		case 6:delect(p,q);break;
		case 7:revamp(q);break;
		case 8:count(q);break;
		case 9:rank(p,q);break;
		case 10:quit();break;	
		default:{printf("输入的选项有误，请重新输入！\n");goto D;}
		}
	}
	return 0;
} 
void input(int *q)
{
B a[N];
FILE *fp;//声明指针变量 
int i,k,j,p,l;
fp=fopen("library.txt","w");//首次打开文件， 若没有文件将会自动创建新文件 
	for(i=0,p=0;i<N;i++)
	{	
		printf("按非0输入书籍有关信息；按0结束输入:\n");//询问是否继续输入 
		scanf("%d",&j);
		if(j==0) 
		{
			fclose(fp);
			return;
		} 
		else
		{	
			printf("请输入该书籍的序号，书名，出版社，作者:\n");
			scanf("%d\n%s%s%s",&a[i].num,a[i].name,a[i].addr,a[i].writ);
			Z:;
			for(k=0,p=0;k<i;k++)
			{
				if(a[k].num==a[i].num)
				{ 
					printf("该书重复录入！\n");
					p=1;
					printf("请重新输入该书籍的序号，书名，出版社，作者:\n");
					scanf("%d%s%s%s",&a[i].num,a[i].name,a[i].addr,a[i].writ);
					goto Z;
				} 
			}
			while(1)//输入书籍类型 
			{
			printf("请选择该书的类型：\n");
			printf("按1为专业书\n按2为参考书\n按3为报告\n按4为小说\n按5为其他\n");
			scanf("%d",&a[i].m);
			if(a[i].m==1||a[i].m==2||a[i].m==3||a[i].m==4||a[i].m==5)
			{
				switch(a[i].m)
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
			printf("书籍序号          书籍名称              出版社              书籍作者            书籍类别      \n");
			printf("%-20d %-20s %-20s %-20s %-10d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			Q:; 
			printf("请选择是否保存，若要保存，请按2！\n");//保存书籍信息 
			scanf("%d",&j);
			if(j==2&&p==0)
			{   
				fprintf(fp,"%d\t%s\t%s\t%s\t%d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
				printf("保存成功！\n"); 
				*q++;
			}
			else
			{
				printf("保存失败！\n请选择是否重新保存！\n(输入1重新保存，输入非1的数字返回主菜单！)\n");
				scanf("%d",&l);
				if(l==1)
					goto Q;
				else
					return;
			}
		}
	}
		return;
} 
void save()
{
	printf("没有书籍录入，无法保存，请按1实现书籍录入和保存功能或者按3实现增加书籍并保存的功能!\n");
	return; 
}
void add(int *q)
{
B a[N];
FILE *fp;//声明指针变量 
int i,k,j,y,m,p,n,x;
fp=fopen("library.txt","r");
for(y=0;(fscanf(fp,"%d%s %s %s %d\n",&a[y].num,a[y].name,a[y].addr,a[y].writ,&a[y].m))==5;y++);
fclose(fp);
y=*q;
fp=fopen("library.txt","a");//首次打开文件， 若没有文件将会自动创建新文件 
	for(i=*q,p=0;i<N;i++)
	{	
		printf("按非0输入书籍有关信息；按0结束输入:\n");//询问是否继续输入 
		scanf("%d",&j);
		if(j==0) 
		{
			fclose(fp);
			return;
		} 
		else
		{	
			printf("请输入该书籍的序号，书名，出版社，作者:\n");
			scanf("%d\n%s%s%s",&a[i].num,a[i].name,a[i].addr,a[i].writ);
			Z:;
			for(k=0,p=0;k<i;k++)
			{
				if(a[k].num==a[i].num)
				{ 
					printf("该书重复录入！\n");
					p=1;
					printf("请重新输入该书籍的序号，书名，出版社，作者:\n");
					scanf("%d%s%s%s",&a[i].num,a[i].name,a[i].addr,a[i].writ);
					goto Z; 
				} 
			}
			while(1)//输入书籍类型 
			{
			printf("请选择该书的类型：\n");
			printf("按1为专业书\n按2为参考书\n按3为报告\n按4为小说\n按5为其他\n");
			scanf("%d",&a[i].m);
			if(a[i].m==1||a[i].m==2||a[i].m==3||a[i].m==4||a[i].m==5)
			{
				switch(a[i].m)
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
			printf("%d\t%s\t%s\t%s\n",a[i].num,a[i].name,a[i].addr,a[i].writ);
			Q:; 
			printf("请选择是否保存，若要保存，请按2！\n");//保存书籍信息 
			scanf("%d",&j);
			if(j==2&&p==0)//写入没有问题！
			{   
				fprintf(fp,"%d\t%s\t%s\t%s\t%d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
				*q++;
				printf("保存成功！\n"); 
			}
			else
			{
				printf("保存失败！\n请重新保存！\n(输入1重新保存，输入非1的数字返回主菜单！)\n");
				scanf("%d",&x);
				if(x==1)
				goto Q;
				else
				return;
			}
		}
	}
return;
} 
void quit()
{
	int j;
	printf("若要退出，请再次按下10退出。\n");
	scanf("%d",&j);
	if(j==10)
		exit(0);
	else
		return;
}
void browse(B *p,int *q)
{
	B *n;
	enum type m;
	FILE *fp;
	int i,j;
	char ch;
	B a[100];
	n=a;
	//p=a;
	if((fp=fopen("library.txt","r"))==NULL)
	{
		printf("打开文件失败！\n");
		return;
	}
	ch=fgetc(fp);
	rewind(fp);
	if(ch==EOF)
		printf("文件内没有书籍的信息！\n");
	else
	{
		printf("书籍的类别:专业书(1)、工具书(2)、报告(3)、小说(4)、其他(5)\n");
		printf("书籍序号          书籍名称              出版社              书籍作者            书籍类别      \n");
		for(j=0;(fscanf(fp,"%d%s %s %s %d\n",&a[j].num,a[j].name,a[j].addr,a[j].writ,&a[j].m))==5;j++);
		for(;p<n+(*q);p++)
			{
			printf("%-20d %-20s %-20s %-20s %-10d\n",p->num,p->name,p->addr,p->writ,p->m);
			}
 		}
	fclose(fp);
	return;
}
void search(int *q)
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
	U:;
	printf("请选择要查询的类型：\n提示：输入1为书籍序号查找\n");
	printf("输入2为书籍名称查找\n");
	printf("输入3为书籍出版社查找\n"); 
	printf("输入4为书籍作者查找\n"); 
	printf("输入5为书籍类别查找\n");
	printf("输入6为退出查询\n");  
	scanf("%d",&i);
	switch(i)
		{
		case 1:numfind();break;
		case 2:namefind();break;
		case 3:addrfind();break;
		case 4:writfind();break;
		case 5:typefind();break;
		case 6:return;
		default:{
			printf("没有这个类别，请重新输入：\n"); goto U;
			}
		} 
	}
	return;
} 
void numfind()
{
	B a[N]; 
	FILE *fp;
	int i,j,p=0,k;
	C:;
		printf("请输入书籍序号：\n");
		scanf("%d",&j);
		fp=fopen("library.txt","r");
		for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
			{
				if(j==a[i].num)
				{
					printf("书籍序号 ：%-5d 书籍名称：%-10s 出版社 ：%-10s 书籍作者：%-10s 书籍类别：%-5d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
					p=1;
					continue;
				}
			}
			rewind(fp);
			if(p==0)
				{
				printf("图书系统中没有这本图书!\n请选择是否重新输入图书编号：\n");
				printf("继续根据图书编号查询请按1，不查询了请按非1的数字键!\n");
				scanf("%d",&k);
				if(k==1) 
				goto C;
				else
				return;
				}
			
			return;		
}
void addrfind()
{	
	B a[N];
	FILE *fp;
	char ch[20];
	int i,k,p=0,x;
	fp=fopen("library.txt","r");
	D:;
	printf("请输入书籍出版社：\n");
	scanf("%s",&ch);
	for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
		k=strcmp(ch,a[i].addr);//ccc用的结构体指针！ 
		if(k==0)
			{
			printf("书籍序号 ：%-5d 书籍名称：%-10s 出版社 ：%-10s 书籍作者：%-10s 书籍类别：%-5d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1; 
			continue;
			}
		}
		rewind(fp);
		if(p==0)
			{
				printf("图书系统中没有这本图书!\n请选择是否重新输入图书出版社：\n");
				printf("继续根据图书出版社查询请按1，不查询了请按非1的数字键!\n");
				scanf("%d",&x);
				if(x==1) 
				goto D;
				else
				return;
			}	
	return;
} 
void typefind()
{	
	B a[N];
	FILE *fp;
	int i,j,p=0,x;
	printf("请输入书籍类型号：\n(书籍的类别:专业书(1)、工具书(2)、报告(3)、小说(4)、其他(5))\n");
		C:;
		scanf("%d",&j);
		fp=fopen("library.txt","r");
		for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
			{
				if(j==a[i].m)
				{
					printf("书籍序号 ：%-5d 书籍名称：%-10s 出版社 ：%-10s 书籍作者：%-10s 书籍类别：%-5d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
					p=1;
				continue;
				}
			}
			rewind(fp);
			if(p==0)
				{
				printf("图书系统中没有这本图书!\n请选择是否重新输入图书类型\n");
				printf("继续根据图书类型查询请按1，不查询了请按非1的数字键!\n");
				scanf("%d",&x);
				if(x==1) 
				{
				printf("请重新输入图书类型\n(书籍的类别:专业书(1)、工具书(2)、报告(3)、小说(4)、其他(5))\n");
				goto C;
				}
				else
				return; 
				}
		return;		
}
void namefind()
{	
	B a[N];
	FILE *fp;
	char ch[20];
	int i,k,p=0,x;
	fp=fopen("library.txt","r");
	D:;
	printf("请输入书籍名称：\n");
	scanf("%s",&ch);
	for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
		k=strcmp(ch,a[i].name);//ccc用的结构体指针！ 
		if(k==0)
			{
			printf("书籍序号 ：%-5d 书籍名称：%-10s 出版社 ：%-10s 书籍作者：%-10s 书籍类别：%-5d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1;
			continue;
			}
		}
		rewind(fp);
		if(p==0)
			{
				printf("图书系统中没有这本图书!\n请选择是否重新输入书名：\n");
				printf("继续根据书名查询请按1，不查询了请按非1的数字键!\n");
				scanf("%d",&x);
				if(x==1) 
				goto D;
				else
				return;
			}	
	return;
} 
void writfind()
{	
	B a[N];
	FILE *fp;
	char ch[20];
	int i,k,p=0,x;
	fp=fopen("library.txt","r");
	D:;
	printf("请输入书籍作者：\n");
	scanf("%s",&ch);
	for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
		k=strcmp(ch,a[i].writ);//ccc用的结构体指针！ 
		if(k==0)
			{
			printf("书籍序号 ：%-5d 书籍名称：%-10s 出版社 ：%-10s 书籍作者：%-10s 书籍类别：%-5d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1;
			continue;
			}
		}
		rewind(fp);
		if(p==0)
			{
				printf("图书系统中没有这本图书!\n请选择是否重新输入图书作者：\n");
				printf("继续根据图书作者查询请按1，不查询了请按非1的数字键!\n");
				scanf("%d",&x);
				if(x==1) 
				goto D;
				else
				return;
			}	
	return;
} 
void count(int *q)
{
	B a[N];
	B b[N];
	int i,x,y;
	int j=0,k=0,l=0,p=0,z=0,r=0;
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
		printf("提示：书籍的类别:专业书(1)、工具书(2)、报告(3)、小说(4)、其他(5)\n若要退回到上一级请按6！\n");
		printf("请输入数字1到6之间的任意一个数字！\n");
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
		for(i=0;i<*q;i++)
		{
			switch(a[i].m)//统计每本书的个数！ 
			{
				case 1:r++;break;
				case 2:k++;break;
				case 3:l++;break;
				case 4:p++;break;
				case 5:z++;break; 
			}
		}
		E:;
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
			printf("书籍序号          书籍名称              出版社              书籍作者            书籍类别      \n");
			for(i=0;i<r;i++)
			printf("%-20d %-20s %-20s %-20s %-10d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
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
			printf("%-20d %-20s %-20s %-20s %-10d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
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
			printf("%-20d %-20s %-20s %-20s %-10d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
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
			printf("%-20d %-20s %-20s %-20s %-10d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
			}
			break;
			}
			case 5:
			{
			if(z==0)
			{
				printf("没有该类型的书籍！\n");
			}
			else
			{
			printf("其他类型的书籍有%d本\n",z);
			printf("书籍序号    书籍名称          书籍作者          出版社            书籍类别      \n");
			for(i=0;i<j;i++)
			printf("%-20d %-20s %-20s %-20s %-10d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
			} 
			break;
			}
			case 6:return; 
			default:{
			printf("无该种类别，请选择是否重新输入！\n");
			printf("若要重新按类别统计，请按1。返回上一级菜单请输入非1的数字！\n");
			scanf("%d",&y); 
			if(y==1)
			{
			printf("提示：书籍的类别:专业书(1)、工具书(2)、报告(3)、小说(4)、其他(5)\n若要退回到上一级请按6！\n");
			printf("请输入数字1到6之间的任意一个数字！\n");
			scanf("%d",&x);
			goto E;
			}
			else
			return;
		 	} 
		}
	}
	fclose(fp);
	return;
}
void rank(B *p,int *q)
{
int i,j,k=0,x,y;
	B a[N];
	B *n;
	p=a;
	n=a;
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
		for(y=0;y<i-1;y++)
		{	
		for(x=0;x<i-1-y;x++)
		{
			if(strcmp(a[x].name,a[x+1].name)>0)
			{
				b=a[x];
				a[x]=a[x+1];
				a[x+1]=b;
			}
			else if(strcmp(a[x].name,a[x+1].name)==0&&a[x].num>a[x+1].num)
				{
						b=a[x];
						a[x]=a[x+1];
						a[x+1]=b;
				}
			}
		}
		printf("书籍的类别:专业书(1)、工具书(2)、报告(3)、小说(4)、其他(5)\n");
		printf("书籍序号          书籍名称              出版社              书籍作者            书籍类别      \n");
		for(;p<n+(*q);p++)
		printf("%-20d %-20s %-20s %-20s %-10d\n",p->num,p->name,p->addr,p->writ,p->m);
	}
	return;
} 
void delect(B *p,int *q)
{
	B a[N];
	p=a; 
	int i,l,j,k,n,y,x=0,z=0;
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
	for(k=0;k<*q;k++)
	{
		if(j==a[k].num)
		{
			printf("书籍序号          书籍名称              出版社              书籍作者            书籍类别      \n");
			printf("%-20d %-20s %-20s %-20s %-10d\n",a[k].num,a[k].name,a[k].addr,a[k].writ,a[k].m);
			x=1; 
			R:; 
			printf("请确认是否删除？(删除请按1，不删除请按非1的数字)\n");
			scanf("%d",&l);
			if(l==1)
			{
				for(j=k;j<i-1;j++)
				{	
				a[j]=a[j+1];
				}
			}
			else
			{
				printf("删除失败!\n请重新选择是否删除！\n");
				printf("若是想继续删除，请按1\n若是不想删除，请输入非1数字！\n"); 
				scanf("%d",&y);
				if(y==1)
					goto R;
				else
					return; 
			}
		}
	}
	if(x==0)
	{
	printf("没有这本书，请选择是否重新输入书籍序号：\n");
	printf("若要继续删除,请按1,按非1键返回主菜单\n");
	scanf("%d",&z);
	if(z==1)
	goto A;
	else
	return; 
	}
	fclose(fp);
	fp=fopen("library.txt","w");
	for(j=0;j<(*q)-1;j++)
	fprintf(fp,"%d\t%s\t%s\t%s\t%d\n",a[j].num,a[j].name,a[j].addr,a[j].writ,a[j].m);
	printf("保存成功！\n");
	fclose(fp);	
	}
	}
	return;
}
void revamp(int *q)
{
B a[N];
	FILE *fp; 
	int i,x,y,j,k,n,p=0,z;
	fp=fopen("library.txt","r");
	if(fp==NULL)
	{
		printf("打开文件失败！");
		exit(0);
	}
	else
	{	for(j=0;(fscanf(fp,"%d%s %s %s %d\n",&a[j].num,a[j].name,a[j].addr,a[j].writ,&a[j].m))==5;j++);//用于统计数据个数！ 
		rewind(fp);
		if(j==0)
		{
			printf("该文件中无书籍，无法修改！\n");
			return;
		}
		else
		{
		A:;
		printf("请输入想要修改的书籍序号：\n");
		scanf("%d",&x);
		for(i=0;i<*q;i++)
		{
			if(x==a[i].num)
			{
		printf("0书籍序号          书籍名称              出版社              书籍作者            书籍类别      \n");
			printf("%-20d %-20s %-20s %-20s %-10d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1;
			break;	
			}	
		}
		if(p==0)
			{
			printf("在文件中没有这本书！请选择是否重新输入书籍修改序号！\n");
			printf("输入1继续修改，输入非1的数字返回主菜单！\n");
			scanf("%d",&z);
			if(z==1)
			goto A;
			else
			return;
			}
		else
	{
		Q:;
		printf("请输入你想修改的信息：\n");
		printf("(提示：按1为修改图书名称，按2为修改图书作者，按3为修改图书出版社，按4为修改图书类型,按5返回主菜单)\n");
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
			case 5:return;
			default:
			{printf("请重新输入数字！\n");goto Q; 
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
	}
		fclose(fp);
	}
	return;
} 
