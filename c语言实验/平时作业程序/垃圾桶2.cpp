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
  for(i=0;i<3;i++)
  fread(&a[i],sizeof(B),1,fp);//fscanf������freadĿǰ����fread�����ŵ� 
  printf("%-9d %-15s %-18s %-20s %-40d\n",a[0].num,a[0].name,a[0].addr,a[0].writ,m);
 }
 fclose(fp);
}
