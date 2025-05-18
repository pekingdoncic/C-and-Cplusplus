#include <stdio.h>
int main(void)
{
	int max(int x,int y);
	int a,b,c;//在之前加一点提示语就好了 
	scanf("%d%d",&a,&b);//注意%d输入的时候连着就好了，中间有逗号，则会按回车直接执行程序了 
	//c=max(a,b);
	printf("max=%d\n",max(a,b));
	return 0;
 } 
 int max(int x,int y)
 {
 	int z;
 	if(x<y)z=y;
 	else z=x;
 	return(z);
 }
 
