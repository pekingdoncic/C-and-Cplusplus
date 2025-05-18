#include <stdio.h>
int main()
{
	int a=35,b=94,i=0,j=35;
	for(;i+j<=35||i>=0||j>=0;i++,j--)
	{
	if(b==2*i+4*j)break;
	}
	printf("鸡的数目为：%d\n兔子的数目为：%d\n",i,j);
	return 0;
}
