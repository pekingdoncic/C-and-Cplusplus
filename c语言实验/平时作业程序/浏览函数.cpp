#include <stdio.h>
#include <stdlib.h>
#define N 100
enum type{professionalbook=1,referencebook,report,fiction,others};
enum type m;
typedef struct book
{
	long int num;
	char name[50];
	char addr[50];
	char writ[30];
	enum type{professionalbook,referencebook,report,fiction,others}; 
}B;
int main()
{
	B a[N];
	FILE *fp;
	int i;
	char ch;
	fp=fopen("library.txt","r");//无法找到已经弄好的文件！ 
	if(fp==NULL)
	{
		printf("无法打开文件\n");
		exit(0);
	}
	else
	{ 
		ch=fgetc(fp) ;
		while(ch==EOF)//while，EOF循环 
		{fread(&a[i],sizeof(B),1,fp);
			printf("%-10ld\t","%-20s\t","%-20s\t","%-20s\t","%-10d\n",
			a[i].num,a[i].name,a[i].addr,a[i].writ,m);
		}
	}
	fclose(fp);
	return 0;
} 
