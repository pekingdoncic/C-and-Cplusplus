#include <stdio.h>
#include <string.h>
int main()
{
	void  mystrcat(char *s1,char *s2,char *new_s) ;
	char a[10],b[10],c[30],*p,*q,*r;
	p=a;
	q=b;
	r=c;
	printf("请输入第一组字符串:\n");
		scanf("%s",p);//为什么用指针变量输入就会有问题，输入停不下来？ 
	printf("请输入第二组字符串:\n");
		scanf("%s",q);
	mystrcat(p,q,r);
	printf("合并后的字符串为：\n%s\n",r);
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
	}//为什么这个自定义的函数执行不了？
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
