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
	//system("title �����鼮����ϵͳ");
	FILE *fp;
	while(1)
	{
	D:;
	fp=fopen("library.txt","r");
	for(*q=0;(fscanf(fp,"%d%s %s %s %d\n",&a[*q].num,a[*q].name,a[*q].addr,a[*q].writ,&a[*q].m))==5;(*q)++);
	fclose(fp);
	printf("************��ӭʹ�ø����鼮����ϵͳ************\n");
	printf("------------------------------------------------\n");
	printf("-----------------1.¼���鼮��Ϣ-----------------\n");
	printf("-----------------2.�����鼮��Ϣ-----------------\n");
	printf("-----------------3.����鼮��Ϣ-----------------\n");
	printf("-----------------4.��ѯ�鼮��Ϣ-----------------\n");
	printf("-----------------5.�����鼮��Ϣ-----------------\n");
	printf("-----------------6.ɾ���鼮��Ϣ-----------------\n");
	printf("-----------------7.�޸��鼮��Ϣ-----------------\n");
	printf("-----------------8.�����ͳ���鼮������---------\n"); 
	printf("-----------------9.���������鼮��������---------\n"); 
	printf("-----------------10.�˳�------------------------\n");
	printf("------------------------------------------------\n");
	printf("******************ллʹ��**********************\n");
	printf("��ѡ��(1-10):\n"); 
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
		default:{printf("�����ѡ���������������룡\n");goto D;}
		}
	}
	return 0;
} 
void input(int *q)
{
B a[N];
FILE *fp;//����ָ����� 
int i,k,j,p,l;
fp=fopen("library.txt","w");//�״δ��ļ��� ��û���ļ������Զ��������ļ� 
	for(i=0,p=0;i<N;i++)
	{	
		printf("����0�����鼮�й���Ϣ����0��������:\n");//ѯ���Ƿ�������� 
		scanf("%d",&j);
		if(j==0) 
		{
			fclose(fp);
			return;
		} 
		else
		{	
			printf("��������鼮����ţ������������磬����:\n");
			scanf("%d\n%s%s%s",&a[i].num,a[i].name,a[i].addr,a[i].writ);
			Z:;
			for(k=0,p=0;k<i;k++)
			{
				if(a[k].num==a[i].num)
				{ 
					printf("�����ظ�¼�룡\n");
					p=1;
					printf("������������鼮����ţ������������磬����:\n");
					scanf("%d%s%s%s",&a[i].num,a[i].name,a[i].addr,a[i].writ);
					goto Z;
				} 
			}
			while(1)//�����鼮���� 
			{
			printf("��ѡ���������ͣ�\n");
			printf("��1Ϊרҵ��\n��2Ϊ�ο���\n��3Ϊ����\n��4ΪС˵\n��5Ϊ����\n");
			scanf("%d",&a[i].m);
			if(a[i].m==1||a[i].m==2||a[i].m==3||a[i].m==4||a[i].m==5)
			{
				switch(a[i].m)
					{
					case professionalbook:printf("%-20s\n","�Ȿ��Ϊרҵ��");break;
					case referencebook:printf("%-20s\n","�Ȿ��Ϊ�ο���");	break;
					case report:printf("%-20s\n","�Ȿ��Ϊ����");break;
					case fiction:printf("%-20s\n","�Ȿ��ΪС˵");break;
					case others:printf("%-20s\n","�Ȿ��Ϊ����");break;
					} 
					break;
			}
			else
				printf("�޴������͵��鼮��������ѡ��:\n");
			}
			printf("�鼮���          �鼮����              ������              �鼮����            �鼮���      \n");
			printf("%-20d %-20s %-20s %-20s %-10d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			Q:; 
			printf("��ѡ���Ƿ񱣴棬��Ҫ���棬�밴2��\n");//�����鼮��Ϣ 
			scanf("%d",&j);
			if(j==2&&p==0)
			{   
				fprintf(fp,"%d\t%s\t%s\t%s\t%d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
				printf("����ɹ���\n"); 
				*q++;
			}
			else
			{
				printf("����ʧ�ܣ�\n��ѡ���Ƿ����±��棡\n(����1���±��棬�����1�����ַ������˵���)\n");
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
	printf("û���鼮¼�룬�޷����棬�밴1ʵ���鼮¼��ͱ��湦�ܻ��߰�3ʵ�������鼮������Ĺ���!\n");
	return; 
}
void add(int *q)
{
B a[N];
FILE *fp;//����ָ����� 
int i,k,j,y,m,p,n,x;
fp=fopen("library.txt","r");
for(y=0;(fscanf(fp,"%d%s %s %s %d\n",&a[y].num,a[y].name,a[y].addr,a[y].writ,&a[y].m))==5;y++);
fclose(fp);
y=*q;
fp=fopen("library.txt","a");//�״δ��ļ��� ��û���ļ������Զ��������ļ� 
	for(i=*q,p=0;i<N;i++)
	{	
		printf("����0�����鼮�й���Ϣ����0��������:\n");//ѯ���Ƿ�������� 
		scanf("%d",&j);
		if(j==0) 
		{
			fclose(fp);
			return;
		} 
		else
		{	
			printf("��������鼮����ţ������������磬����:\n");
			scanf("%d\n%s%s%s",&a[i].num,a[i].name,a[i].addr,a[i].writ);
			Z:;
			for(k=0,p=0;k<i;k++)
			{
				if(a[k].num==a[i].num)
				{ 
					printf("�����ظ�¼�룡\n");
					p=1;
					printf("������������鼮����ţ������������磬����:\n");
					scanf("%d%s%s%s",&a[i].num,a[i].name,a[i].addr,a[i].writ);
					goto Z; 
				} 
			}
			while(1)//�����鼮���� 
			{
			printf("��ѡ���������ͣ�\n");
			printf("��1Ϊרҵ��\n��2Ϊ�ο���\n��3Ϊ����\n��4ΪС˵\n��5Ϊ����\n");
			scanf("%d",&a[i].m);
			if(a[i].m==1||a[i].m==2||a[i].m==3||a[i].m==4||a[i].m==5)
			{
				switch(a[i].m)
					{
					case professionalbook:printf("%-20s\n","�Ȿ��Ϊרҵ��");break;
					case referencebook:printf("%-20s\n","�Ȿ��Ϊ�ο���");	break;
					case report:printf("%-20s\n","�Ȿ��Ϊ����");break;
					case fiction:printf("%-20s\n","�Ȿ��ΪС˵");break;
					case others:printf("%-20s\n","�Ȿ��Ϊ����");break;
					} 
					break;
			}
			else
				printf("�޴������͵��鼮��������ѡ��:\n");
			}
			printf("%d\t%s\t%s\t%s\n",a[i].num,a[i].name,a[i].addr,a[i].writ);
			Q:; 
			printf("��ѡ���Ƿ񱣴棬��Ҫ���棬�밴2��\n");//�����鼮��Ϣ 
			scanf("%d",&j);
			if(j==2&&p==0)//д��û�����⣡
			{   
				fprintf(fp,"%d\t%s\t%s\t%s\t%d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
				*q++;
				printf("����ɹ���\n"); 
			}
			else
			{
				printf("����ʧ�ܣ�\n�����±��棡\n(����1���±��棬�����1�����ַ������˵���)\n");
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
	printf("��Ҫ�˳������ٴΰ���10�˳���\n");
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
		printf("���ļ�ʧ�ܣ�\n");
		return;
	}
	ch=fgetc(fp);
	rewind(fp);
	if(ch==EOF)
		printf("�ļ���û���鼮����Ϣ��\n");
	else
	{
		printf("�鼮�����:רҵ��(1)��������(2)������(3)��С˵(4)������(5)\n");
		printf("�鼮���          �鼮����              ������              �鼮����            �鼮���      \n");
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
		printf("���ļ�Ϊ�գ��޷������ļ�\n");
		exit(0);		
	}
	else{
	int i;
	U:;
	printf("��ѡ��Ҫ��ѯ�����ͣ�\n��ʾ������1Ϊ�鼮��Ų���\n");
	printf("����2Ϊ�鼮���Ʋ���\n");
	printf("����3Ϊ�鼮���������\n"); 
	printf("����4Ϊ�鼮���߲���\n"); 
	printf("����5Ϊ�鼮������\n");
	printf("����6Ϊ�˳���ѯ\n");  
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
			printf("û�����������������룺\n"); goto U;
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
		printf("�������鼮��ţ�\n");
		scanf("%d",&j);
		fp=fopen("library.txt","r");
		for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
			{
				if(j==a[i].num)
				{
					printf("�鼮��� ��%-5d �鼮���ƣ�%-10s ������ ��%-10s �鼮���ߣ�%-10s �鼮���%-5d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
					p=1;
					continue;
				}
			}
			rewind(fp);
			if(p==0)
				{
				printf("ͼ��ϵͳ��û���Ȿͼ��!\n��ѡ���Ƿ���������ͼ���ţ�\n");
				printf("��������ͼ���Ų�ѯ�밴1������ѯ���밴��1�����ּ�!\n");
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
	printf("�������鼮�����磺\n");
	scanf("%s",&ch);
	for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
		k=strcmp(ch,a[i].addr);//ccc�õĽṹ��ָ�룡 
		if(k==0)
			{
			printf("�鼮��� ��%-5d �鼮���ƣ�%-10s ������ ��%-10s �鼮���ߣ�%-10s �鼮���%-5d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1; 
			continue;
			}
		}
		rewind(fp);
		if(p==0)
			{
				printf("ͼ��ϵͳ��û���Ȿͼ��!\n��ѡ���Ƿ���������ͼ������磺\n");
				printf("��������ͼ��������ѯ�밴1������ѯ���밴��1�����ּ�!\n");
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
	printf("�������鼮���ͺţ�\n(�鼮�����:רҵ��(1)��������(2)������(3)��С˵(4)������(5))\n");
		C:;
		scanf("%d",&j);
		fp=fopen("library.txt","r");
		for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
			{
				if(j==a[i].m)
				{
					printf("�鼮��� ��%-5d �鼮���ƣ�%-10s ������ ��%-10s �鼮���ߣ�%-10s �鼮���%-5d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
					p=1;
				continue;
				}
			}
			rewind(fp);
			if(p==0)
				{
				printf("ͼ��ϵͳ��û���Ȿͼ��!\n��ѡ���Ƿ���������ͼ������\n");
				printf("��������ͼ�����Ͳ�ѯ�밴1������ѯ���밴��1�����ּ�!\n");
				scanf("%d",&x);
				if(x==1) 
				{
				printf("����������ͼ������\n(�鼮�����:רҵ��(1)��������(2)������(3)��С˵(4)������(5))\n");
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
	printf("�������鼮���ƣ�\n");
	scanf("%s",&ch);
	for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
		k=strcmp(ch,a[i].name);//ccc�õĽṹ��ָ�룡 
		if(k==0)
			{
			printf("�鼮��� ��%-5d �鼮���ƣ�%-10s ������ ��%-10s �鼮���ߣ�%-10s �鼮���%-5d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1;
			continue;
			}
		}
		rewind(fp);
		if(p==0)
			{
				printf("ͼ��ϵͳ��û���Ȿͼ��!\n��ѡ���Ƿ���������������\n");
				printf("��������������ѯ�밴1������ѯ���밴��1�����ּ�!\n");
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
	printf("�������鼮���ߣ�\n");
	scanf("%s",&ch);
	for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++)
		{
		k=strcmp(ch,a[i].writ);//ccc�õĽṹ��ָ�룡 
		if(k==0)
			{
			printf("�鼮��� ��%-5d �鼮���ƣ�%-10s ������ ��%-10s �鼮���ߣ�%-10s �鼮���%-5d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1;
			continue;
			}
		}
		rewind(fp);
		if(p==0)
			{
				printf("ͼ��ϵͳ��û���Ȿͼ��!\n��ѡ���Ƿ���������ͼ�����ߣ�\n");
				printf("��������ͼ�����߲�ѯ�밴1������ѯ���밴��1�����ּ�!\n");
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
		printf("���ļ�Ϊ�գ��޷��򿪣�\n");
		exit(0);		
	}
	else
	{
		printf("��������鿴�������͵��鼮��\n"); 
		printf("��ʾ���鼮�����:רҵ��(1)��������(2)������(3)��С˵(4)������(5)\n��Ҫ�˻ص���һ���밴6��\n");
		printf("����������1��6֮�������һ�����֣�\n");
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
			switch(a[i].m)//ͳ��ÿ����ĸ����� 
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
				printf("û�и����͵��鼮��\n");
			}
			else
			{
			printf("רҵ����%d��\n",r);
			printf("�鼮���          �鼮����              ������              �鼮����            �鼮���      \n");
			for(i=0;i<r;i++)
			printf("%-20d %-20s %-20s %-20s %-10d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
			}
			break;
			} 
			case 2:
			{
				if(k==0)
				{
				printf("û�и����͵��鼮��\n");
				}
			else
			{
			printf("�ο�����%d��\n",k);
			printf("�鼮���    �鼮����          �鼮����          ������            �鼮���      \n");
			for(i=0;i<k;i++)
			printf("%-20d %-20s %-20s %-20s %-10d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
			}
			break;
			} 
			case 3:
			{ 
			if(l==0)
			{
				printf("û�и����͵��鼮��\n");
			}
			else
			{
			printf("������%d��\n",l);
			printf("�鼮���    �鼮����          �鼮����          ������            �鼮���      \n");
			for(i=0;i<l;i++)
			printf("%-20d %-20s %-20s %-20s %-10d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
			}
			break;
			} 
			case 4:
			{
			if(p==0)
			{
				printf("û�и����͵��鼮��\n");
			}
			else
			{
			printf("С˵��%d��\n",p);
			printf("�鼮���    �鼮����          �鼮����          ������            �鼮���      \n");
			for(i=0;i<p;i++)
			printf("%-20d %-20s %-20s %-20s %-10d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
			}
			break;
			}
			case 5:
			{
			if(z==0)
			{
				printf("û�и����͵��鼮��\n");
			}
			else
			{
			printf("�������͵��鼮��%d��\n",z);
			printf("�鼮���    �鼮����          �鼮����          ������            �鼮���      \n");
			for(i=0;i<j;i++)
			printf("%-20d %-20s %-20s %-20s %-10d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
			} 
			break;
			}
			case 6:return; 
			default:{
			printf("�޸��������ѡ���Ƿ��������룡\n");
			printf("��Ҫ���°����ͳ�ƣ��밴1��������һ���˵��������1�����֣�\n");
			scanf("%d",&y); 
			if(y==1)
			{
			printf("��ʾ���鼮�����:רҵ��(1)��������(2)������(3)��С˵(4)������(5)\n��Ҫ�˻ص���һ���밴6��\n");
			printf("����������1��6֮�������һ�����֣�\n");
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
		printf("���ļ�Ϊ�գ��޷��򿪣�\n");
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
		printf("�鼮�����:רҵ��(1)��������(2)������(3)��С˵(4)������(5)\n");
		printf("�鼮���          �鼮����              ������              �鼮����            �鼮���      \n");
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
		printf("���ļ�ʧ�ܣ�");
		exit(0);
	}
	else
	{ 
	for(i=0;(fscanf(fp,"%d%s %s %s %d\n",&a[i].num,a[i].name,a[i].addr,a[i].writ,&a[i].m))==5;i++);
	rewind(fp);
	if(i==0)
		printf("���鼮���ļ��У�\n");
	else
	{
	printf("������Ҫɾ�����鼮��ţ�\n");
	A:;
	scanf("%d",&j);
	for(k=0;k<*q;k++)
	{
		if(j==a[k].num)
		{
			printf("�鼮���          �鼮����              ������              �鼮����            �鼮���      \n");
			printf("%-20d %-20s %-20s %-20s %-10d\n",a[k].num,a[k].name,a[k].addr,a[k].writ,a[k].m);
			x=1; 
			R:; 
			printf("��ȷ���Ƿ�ɾ����(ɾ���밴1����ɾ���밴��1������)\n");
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
				printf("ɾ��ʧ��!\n������ѡ���Ƿ�ɾ����\n");
				printf("���������ɾ�����밴1\n���ǲ���ɾ�����������1���֣�\n"); 
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
	printf("û���Ȿ�飬��ѡ���Ƿ����������鼮��ţ�\n");
	printf("��Ҫ����ɾ��,�밴1,����1���������˵�\n");
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
	printf("����ɹ���\n");
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
		printf("���ļ�ʧ�ܣ�");
		exit(0);
	}
	else
	{	for(j=0;(fscanf(fp,"%d%s %s %s %d\n",&a[j].num,a[j].name,a[j].addr,a[j].writ,&a[j].m))==5;j++);//����ͳ�����ݸ����� 
		rewind(fp);
		if(j==0)
		{
			printf("���ļ������鼮���޷��޸ģ�\n");
			return;
		}
		else
		{
		A:;
		printf("��������Ҫ�޸ĵ��鼮��ţ�\n");
		scanf("%d",&x);
		for(i=0;i<*q;i++)
		{
			if(x==a[i].num)
			{
		printf("0�鼮���          �鼮����              ������              �鼮����            �鼮���      \n");
			printf("%-20d %-20s %-20s %-20s %-10d\n",a[i].num,a[i].name,a[i].addr,a[i].writ,a[i].m);
			p=1;
			break;	
			}	
		}
		if(p==0)
			{
			printf("���ļ���û���Ȿ�飡��ѡ���Ƿ����������鼮�޸���ţ�\n");
			printf("����1�����޸ģ������1�����ַ������˵���\n");
			scanf("%d",&z);
			if(z==1)
			goto A;
			else
			return;
			}
		else
	{
		Q:;
		printf("�����������޸ĵ���Ϣ��\n");
		printf("(��ʾ����1Ϊ�޸�ͼ�����ƣ���2Ϊ�޸�ͼ�����ߣ���3Ϊ�޸�ͼ������磬��4Ϊ�޸�ͼ������,��5�������˵�)\n");
		scanf("%d",&y);
		switch(y)
			{
		case 1:
			{
			printf("������ı���ͼ�����ƣ�\n");
			scanf("%s",a[i].name);
			break;	
			}
		case 2:
			{
			printf("������ı���ͼ�����ߣ�\n");
			scanf("%s",a[i].writ);
			break;	
			}
			case 3:
			{
			printf("������ı���ͼ������磺\n");
			scanf("%s",a[i].addr);
			break;	
			}
		case 4:
			{
			printf("������ı���ͼ������磺\n");
			printf("�鼮�����:רҵ��(1)��������(2)������(3)��С˵(4)������(5)\n");
			scanf("%d",&a[i].m);
			break;	
			}
			case 5:return;
			default:
			{printf("�������������֣�\n");goto Q; 
			}	
		}
		fclose(fp); 
		C:;
		printf("��ѡ���Ƿ񱣴棡�����水2��\n");
		scanf("%d",&n);
		if(n==2)
		{
		fp=fopen("library.txt","w");
		rewind(fp);
		for(k=0;k<j;k++)
		fprintf(fp,"%d\t%s\t%s\t%s\t%d\n",a[k].num,a[k].name,a[k].addr,a[k].writ,a[k].m);			
		printf("����ɹ���\n");
		}
		else
		{
			printf("����ʧ�ܣ�\n�����±��棡\n");
			goto C; 
		}
		}
	}
		fclose(fp);
	}
	return;
} 
