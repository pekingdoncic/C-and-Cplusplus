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
	system("title �����鼮����ϵͳ");
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
	printf("    ************��ӭʹ�ø����鼮����ϵͳ************\n");
	printf("    ------------------------------------------------\n");
	printf("    -----------------1.¼���鼮��Ϣ-----------------\n");
	printf("    -----------------2.�����鼮��Ϣ-----------------\n");
	printf("    -----------------3.����鼮��Ϣ-----------------\n");
	printf("    -----------------4.��ѯ�鼮��Ϣ-----------------\n");
	printf("    -----------------5.�����鼮��Ϣ-----------------\n");
	printf("    -----------------6.ɾ���鼮��Ϣ-----------------\n");
	printf("    -----------------7.�޸��鼮��Ϣ-----------------\n");
	printf("    -----------------8.�����ͳ���鼮������---------\n");
	printf("    -----------------9.���������鼮��������---------\n");
	printf("    -----------------10.�˳�------------------------\n");
	printf("    ------------------------------------------------\n");
	printf("    ********************ллʹ��********************\n");
	printf("��������Ҫ���еĲ�����");
}
struct book *luru(int *p,struct book a[])
{
	FILE *fp;
	int i,j,m;
	struct book *p1;
	p1=a;	
	printf("��������Ҫ������鼮������");
	printf("\n");
	scanf("%d",p);
	printf("��ʾ���������鼮����ţ���������������������ߣ���������鼮���\n");
	printf("ע��0��ʾרҵ��1��ʾ���ߣ�2��ʾ���棬3��ʾС˵��4��ʾ������\n");
	if((fp=fopen("1.txt","w"))==NULL)
	{
		printf("���ļ�ʧ�ܣ�");
		exit(0);
	}
	printf("��������Ҫ����%d���鼮����Ϣ��\n",*p);
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
				printf("��⵽�����%d����͵�%d����������ͬ�������(ѡ1����ǰһ���飬ѡ2���ĺ�һ����)��",j+1,i+1);
				scanf("%d",&m);
				if(m==1)
					scanf("%d",&a[j].xuhao);
				else scanf("%d",&a[i].xuhao);
				j=0;
				i=0;
			}
		}
	}
	printf("�鼮������Ϻ󣬲�Ҫ���ǰ�2����Ŷ����~\n");
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
			printf("���ļ�ʧ�ܣ�");
			exit(0);
		}
		for(i=0;i<*p;i++)
		{
			fwrite(&a[i],sizeof(struct book),1,fp);
		}
		fclose(fp);
		printf("�����鼮��Ϣ�ɹ���");
	}
	else
	{
		if((fp=fopen("1.txt","a"))==NULL)
		{
			printf("���ļ�ʧ�ܣ�");
			exit(0);
		}
		for(i=0;i<*p;i++)
		fwrite(&a[i],sizeof(struct book),1,fp);
		fclose(fp);
		printf("������Ϣ�ɹ���");
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
		printf("���ļ�ʧ�ܣ�");
		exit(0);
	}
	ch=fgetc(fp);
	rewind(fp);
	if(ch==EOF)
		printf("�ļ���û���鼮����Ϣ��");
	else
	{
		printf("�鼮�����:רҵ��(0)��������(1)������(2)��С˵(3)������(4)\n");
		printf("�鼮���    �鼮����          �鼮����          ������            �鼮���      \n");
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
		printf("�ļ���ʧ�ܣ�");
		exit(0);
	}
	for(i=0;i<*p;i++)
	{
		fread(&a[i],sizeof(struct book),1,fp);
	}
	fclose(fp);
	printf("��������Ҫ��ѯ�鼮�ķ�ʽ(1��ʾ������2��ʾ���ߣ�3��ʾ�����磬4��ʾ���)��");
	scanf("%d",&m);
	switch (m)
	{
	case 1:printf("��������Ҫ��ѯ�鼮�����ƣ�");
		scanf("%s",ch);
		printf("�鼮�����:רҵ��(0)��������(1)������(2)��С˵(3)������(4)");
		for(i=0;i<*p;i++)
		{
			if(strcmp(ch,a[i].name)==0)
			{
				printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
				lead=1;
			}
		}
		break;
	case 2:printf("��������Ҫ��ѯ�鼮�����ߣ�");
		scanf("%s",ch);
		printf("�鼮�����:רҵ��(0)��������(1)������(2)��С˵(3)������(4)");
		for(i=0;i<*p;i++)
		{
			if(strcmp(ch,a[i].zuozhe)==0)
			{
				printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
				lead=1;
			}
		}
		break;
	case 3:printf("��������Ҫ��ѯ�鼮�ĳ����磺");
		scanf("%s",ch);
		printf("�鼮�����:רҵ��(0)��������(1)������(2)��С˵(3)������(4)");
		for(i=0;i<*p;i++)
		{
			if(strcmp(ch,a[i].cbs)==0)
			{
				printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
				lead=1;
			}
		}
		break;
	case 4:printf("��������Ҫ��ѯ�鼮�����");
		scanf("%d",&n);
		printf("�鼮�����:רҵ��(0)��������(1)������(2)��С˵(3)������(4)\n");
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
		printf("������鼮��û��ƥ�����Ϣ��");
}
struct book *zenjia(struct book a[],int *p,int *pp)
{
	FILE *fp;
	int i,n,j;
	struct book *p1;
	struct book b[100];
	if((fp=fopen("1.txt","r"))==NULL)
	{
		printf("�ļ���ʧ�ܣ�");
		exit(0);
	}
	for(i=0;i<*p;i++)
		fread(&b[i],sizeof(struct book),1,fp);
	p1=a;
	*pp=1;
	printf("����������Ҫ���ӵ��鼮�ĸ�����");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d%s%s%s%d",&a[j].xuhao,a[j].name,a[j].zuozhe,a[j].cbs,&a[j].leibie);
aaa:for(i=0;i<*p;i++)
		{
			if(b[i].xuhao==a[j].xuhao)
			{
				printf("�����������ļ�ԭ���鼮����ظ���������������ţ�");
				scanf("%d",&a[j].xuhao);
				i=-1;
			}
		}
		for(i=0;i<j;i++)
		{
			if(j!=0&&a[j].xuhao==a[i].xuhao)
			{
				printf("���������������鼮����ظ���������������ţ�");
				scanf("%d",&a[j].xuhao);
				i=-1;
				goto aaa;
			}
		}
		printf("�����鼮����Ϣ�ɹ���\n");
		if(j+1<n)
		{
			printf("�����������һ���鼮����Ϣ��");
		}
	}
	*p=*p+n;
	printf("��Ҫ���˰�2����Ŷ����~\n");
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
		printf("���ļ�ʧ�ܣ�");
		exit(0);
	}
	for(i=0;i<*p;i++)
		fread(&a[i],sizeof(struct book),1,fp);
	fclose(fp);
	for(i=0;i<*p;i++)
		printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
	printf("��������Ҫɾ���鼮�ı�����");
	scanf("%d",&m);
	printf("\n��������Ҫɾ�����鼮�����:");
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
		printf("ȷ��ɾ���Ȿ�鼮����Ϣ��(1��ʾ�ǣ�2��ʾ��)");
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
			printf("���鼮��ɾ�������Ѿ�ֹͣ��");
	}
	printf("��Ҫ���ǰ�2����Ŷ����~");
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
		printf("�ļ���ʧ�ܣ�");
		exit(0);
	}
	for(i=0;i<*p;i++)
		fread(&a[i],sizeof(struct book),1,fp);
	for(i=0;i<*p;i++)
		printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
	printf("������Ҫ�޸��鼮��Ϣ�ĸ�����");
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{	
		printf("��������Ҫ�޸ĵ��鼮����ţ�");
		scanf("%d",&z);
		for(i=0;i<*p;i++)
		{
			if(z==a[i].xuhao)
				printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
		}
		printf("�����Ҫ�޸�����鼮����Ϣ��(1��ʾ�ǣ�2��ʾ��)");
		scanf("%d",&g);
		for(i=0;i<*p;i++)
		{
			if(z==a[i].xuhao&&g==1)
			{
				printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
				printf("��������Ҫ�޸ĵ���Ϣѡ�(1��ʾ��ţ�2��ʾ������3��ʾ���ߣ�4��ʾ�����磬5��ʾ�鼮���)");
				scanf("%d",&y);
				switch (y)
				{
				case 1:printf("�������µ��鼮��ţ�");scanf("%d",&a[i].xuhao);break;
				case 2:printf("�������µ��鼮���ƣ�");scanf("%s",a[i].name);break;
				case 3:printf("�������µ��鼮���ߣ�");scanf("%s",a[i].zuozhe);break;
				case 4:printf("�������µ��鼮�����磺");scanf("%s",a[i].cbs);break;
				case 5:printf("�������µ��鼮���");scanf("%d",&a[i].leibie);break;
				default:break;
				}
				printf("�޸��鼮��Ϣ�ɹ���\n");
			}
			if(g==2)
				printf("��ֹͣ�Դ��鼮��Ϣ���޸ģ�");
		}
	}
	printf("�޸���ɺ󣬲�Ҫ���ǰ�2����Ŷ����~");
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
		printf("�ļ���ʧ�ܣ�");
		exit(0);
	}
	for(i=0;i<*p;i++)
		fread(&a[i],sizeof(struct book),1,fp);
	for(i=0;i<*p;i++)
		printf("%d %s %s %s %d\n",a[i].xuhao,a[i].name,a[i].zuozhe,a[i].cbs,a[i].leibie);
	printf("��������Ҫͳ�Ƶ��鼮�����");
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
	printf("���鼮�ı���Ϊ��%d\n",m);
	printf("�����鼮����Ϣ���£�\n");
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
		printf("�ļ���ʧ�ܣ�");
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

