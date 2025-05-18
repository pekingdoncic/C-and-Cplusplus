#include <stdio.h>
int main()
{
	int n,a,b,c;
	for(n=1;n<=1000;n++)
	{
		a=n/100;
		b=(n-100*a)/10;
		c=n-100*a-10*b;
		if(a*a*a+b*b*b+c*c*c==n)//要想把符合条件的数字都输出，就在循环里面加上if条件语句就好！ 
			printf("%d是完全数\n",n);
	}
	return 0;
 } 
