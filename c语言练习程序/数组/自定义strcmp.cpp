#include <stdio.h>
int main()
{
	int strcmp(char *p1,char *p2);
	char *s1,*s2;
	char a[10],b[10];
	int i;
	s1=a;
	s2=b;
	printf("请输入第一串字符：\n");
	gets(s1);
	printf("请输入第二串字符：\n");
	gets(s2);
	i=strcmp(s1,s2);
	printf("%d",i);
	return 0;
}
int strcmp(char *p1,char *p2)
{
	int i,j=0;
	for(;*(p1)!='\0';p1++,p2++)
		if((*p1)!=(*p2))
		{
			j=1;
			return((*p1)-(*p2));
		} 
	if(j==0)
		return(0);	
}
/*int mystrcmp(const char *p,const char *q){
	while(*p==*q && *p != '\0'){
		p++;
		q++;
	}
	return *q-*p;
}*///看看人家的简洁版本！ 
