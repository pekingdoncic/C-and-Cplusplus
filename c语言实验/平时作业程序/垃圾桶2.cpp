#include <stdio.h>
#include <stdlib.h>
#define N 100
enum type{professionalbook=1,referencebook,report,fiction,others}m;
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
	FILE *fp;
 int i;
 char ch;
 struct book a[100];
 if((fp=fopen("library.txt","r"))==NULL)
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
  for(i=0;i<3;i++)
  fread(&a[i],sizeof(B),1,fp);//fscanf还不如fread目前来看fread是最优的 
  printf("%-9d %-15s %-18s %-20s %-40d\n",a[0].num,a[0].name,a[0].addr,a[0].writ,m);
 }
 fclose(fp);
}
