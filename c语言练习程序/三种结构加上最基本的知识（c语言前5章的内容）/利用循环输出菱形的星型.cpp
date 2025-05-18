#include <stdio.h>
int main()
{
	int i,j,k,n;
	printf("请输入行数（奇数）：");
	scanf("%d",&n);
	for(i=1;i<=n/2+1;i++)
	{
		for(k=1;k<=n/2+1-i;k++)
			putchar(' ');
		for(j=1;j<=2*i-1;j++)
			putchar('*');
		putchar('\n');
	}
	for(i=n/2;i>0;i--)
	{
		for(k=1;k<=n/2+1-i;k++)
			putchar(' ');
		for(j=1;j<=(2*i-1);j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
	
 } 
