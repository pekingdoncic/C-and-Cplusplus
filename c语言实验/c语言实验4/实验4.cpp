#include <stdio.h>
#include <string.h>
int main()
{
	void  mystrcat(char *s1,char *s2,char *new_s) ;
	char a[10],b[10],c[30],*p,*q,*r;
	p=a;
	q=b;
	r=c;
	printf("�������һ���ַ���:\n");
		scanf("%s",p);//Ϊʲô��ָ���������ͻ������⣬����ͣ�������� 
	printf("������ڶ����ַ���:\n");
		scanf("%s",q);
	mystrcat(p,q,r);
	printf("�ϲ�����ַ���Ϊ��\n%s\n",r);
	return 0;
}
 void  mystrcat(char *s1,char *s2,char *new_s) 
{
	int i,m,n;
	char *d,*e,*f;
	n=strlen(s2);
	m=strlen(s1);
	f=new_s;
	for(e=s2+n-1,d=s1;(*d!='\0')&&(*e!='\0');d++,e--,f++)
	{
	*f=*d;
	f++;
	*f=*e;
	}//Ϊʲô����Զ���ĺ���ִ�в��ˣ�
	if(n>m)
	{
	for(i=n-m-1;i>=0;i--,f++)
		{
		*f=s2[i];
		}
	}
	if(m>n)
	{
	for(i=n;i<m;i++,f++)
		{
		*f=s1[i];
		}
	}
	*f='\0';
}
