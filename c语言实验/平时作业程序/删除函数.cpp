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
	for(k=0;(fscanf(fp,"%d%s %s %s %d\n",&a[k].num,a[k].name,a[k].addr,a[k].writ,&a[k].m))==5;k++)
	{
	if(j==a[k].num)
		{
			printf("%-5d\t%-10s%-10s\t%-10s\t%-5d\n",a[k].num,a[k].name,a[k].addr,a[k].writ,a[k].m); 
			printf("��ȷ���Ƿ�ɾ����(ɾ���밴1����ɾ���밴2)\n");
			scanf("%d",&l);
			if(l==1)
			{
				printf("%-5d\t%-10s%-10s\t%-10s\t%-5d\n",a[k].num,a[k].name,a[k].addr,a[k].writ,a[k].m);
				printf("%d\n%d\n",i,k);
				for(j=k;j<i-1;j++)
				{	
				a[j]=a[j+1];//���� 
				}
				for(j=0;j<i-1;j++)
				{
					printf("%-5d\t%-10s%-10s\t%-10s\t%-5d\n",a[j].num,a[j].name,a[j].addr,a[j].writ,a[j].m);
				}
			}
		else
			{
			printf("û���Ȿ�飬�����������鼮��ţ�\n");
			goto A; 
			}
		}
	}
	fclose(fp);
	fp=fopen("library.txt","w");
	for(j=0;j<i-1;j++)
	fprintf(fp,"%d\t%s\t%s\t%s\t%d\n",a[j].num,a[j].name,a[j].addr,a[j].writ,a[j].m);
	printf("����ɹ���\n");	
	fclose(fp);
	}
	}
	return 0;
}
