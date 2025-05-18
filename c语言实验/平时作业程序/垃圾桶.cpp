#include <stdio.h>
#include <stdlib.h>
#define N 100
int main()
{
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
 FILE *fp;
 int i=0;
 fp=fopen("library.txt","r");//无法找到已经弄好的文件！ 
 if(fp==NULL)
 {
  printf("无法打开文件\n");
  exit(0);
 }
 else
 { 
  while(feof(fp)==0)//while，EOF循环 
  {
      fread(&a[i],sizeof(B),1,fp);
   printf("%-10ld\t,%-20s\t,%-20s\t,%-20s\t,%-10d\n",
   a[i].num,a[i].name,a[i].addr,a[i].writ,m);
  }
 }
 fclose(fp);
 return 0;
} 
