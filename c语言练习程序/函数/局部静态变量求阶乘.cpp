#include <stdio.h>
int main()
{
	int fabs(int n);
	int i;
	for(i=1;i<6;i++)
		printf("%d!=%d\n",i,fabs(i));
	return 0;
} 
int fabs(int n)
{
	static int f=1;//这里用局部静态变量才让f的值保存！ 
	f=f*n;
	return(f);
}
