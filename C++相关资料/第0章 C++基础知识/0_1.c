#include <stdio.h>

int main( )
{	char c; int a;               /*定义变量c、a、f */
	float f;
	scanf("%c%d%f",&c,&a,&f); 
	a=a+c;     
	f=f+2*a;
	printf("c=%c a=%d  f=%.1f\n",c,a,f);
   return 0;
} 
