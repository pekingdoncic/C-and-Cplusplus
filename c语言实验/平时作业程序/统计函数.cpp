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
		printf("���ļ�Ϊ�գ��޷��򿪣�\n");
		exit(0);		
	}
	else
	{
		printf("��������鿴�������͵��鼮��\n"); 
		printf("��ʾ���鼮�����:רҵ��(1)��������(2)������(3)��С˵(4)������(5)\n");
		printf("����������1��5֮�������һ�����֣�\n");
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
			switch(a[i].m)//ͳ��ÿ����ĸ����� 
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
				printf("û�и����͵��鼮��\n");
			}
			else
			{
			printf("רҵ����%d��\n",r);
			printf("�鼮���    �鼮����          �鼮����          ������            �鼮���      \n");
			for(i=0;i<r;i++)
			printf("   %-9d %-15s %-18s %-20s %-40d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
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
			printf("   %-9d %-15s %-18s %-20s %-40d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
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
			printf("   %-9d %-15s %-18s %-20s %-40d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
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
				printf("   %-9d %-15s %-18s %-20s %-40d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
			}
			break;
			}
			case 5:
			{
			if(q==0)
			{
				printf("û�и����͵��鼮��\n");
			}
			else
			{
			printf("�������͵��鼮��%d��\n",q);
			printf("�鼮���    �鼮����          �鼮����          ������            �鼮���      \n");
			for(i=0;i<j;i++)
			printf("   %-9d %-15s %-18s %-20s %-40d\n",b[i].num,b[i].name,b[i].addr,b[i].writ,b[i].m);
			} 
			break;
			} 
		 } 
	}//���鼮��Ϣ��Ҫ����� 
	fclose(fp);
	return 0;
}
	
