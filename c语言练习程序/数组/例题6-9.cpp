#include <stdio.h>
#include <string.h>
int main()
{
	char a[10],b[10],c[10],max[10];
	int i;
	gets(a);
	gets(b);
	gets(c);
	if(strcmp(a,b)>0)
		strcpy(max,a);
	else
		strcpy(max,b);
	if(strcmp(max,c)>0)
		printf("%s",max);
	else
		printf("%s",c);
	return 0;
}
