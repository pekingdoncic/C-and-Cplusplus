#include <stdio.h>
#include <stdlib.h>
#define N 1
typedef struct Student {char name[10];int num;int age;char addr[15];}S;
int main()
{	
	FILE *fp;
	S a[N];
	void save();
	void watch();
	int i;
	printf("请依次输入学生的姓名，学号，年龄，住址：\n");
	for(i=0;i<N;i++)
		scanf("%s%d%d%s",a[i].name,&a[i].num,&a[i].age,a[i].addr);
	save();
	watch();
	fclose(fp);
	return 0;
}
void save()
{
	S a[N];
	int i;
	FILE *fp;
	if((fp=fopen("grades.txt","wb"))==NULL)
		{
			printf("无法打开文件！\n");
			return;
		}
	else
	{
		for(i=0;i<N;i++)
			if(fwrite(&a[i],sizeof(S),1,fp)!=1)
				printf("文件打开错误！\n");
	}
	return;
}
void watch()
{
	FILE *fp;
	int i;
	S a[N];
	if((fp=fopen("grades.txt","wb"))==NULL)
		{
		printf("无法打开文件!\n");
		exit(0);
		}
	for(i=0;i<N;i++)
		{
			fread(fp,sizeof(S),1,fp);
			//fscanf(fp,"%-5d%-10s%-10s%-5d",&a[i].num,a[i].name,a[i].addr,&a[i].age);
			printf("%-5d%-10s%-10s%-5d",a[i].num,a[i].name,a[i].addr,a[i].age);
		}
	return;
}
