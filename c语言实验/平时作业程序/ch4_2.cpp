#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("请输入一个数：");
	scanf("%int",&a);
	b=(int)a/10000;//万位数 
	c=(int)(a-b*10000)/1000;//千位数 
	d=(int)(a-b*10000-c*1000)/100;//百位 
	e=(int)(a-b*10000-c*1000-d*100)/10;//十位 
	f=(int)(a-b*10000-c*1000-d*100-e*10);//个位 
	if(a>=100000||a<=0) 
		printf("这不是不多于5位的正整数\n");
	else if((int)a>=10000)
		{
		printf("这是一个五位数\n");
		printf("各位数逆序输出为：%d%d%d%d%d\n",f,e,d,c,b);
		}
	else if(a>=1000)
		{
		printf("这是一个四位数\n");
		printf("各位数逆序输出为：%d%d%d%d\n",f,e,d,c);
		}
	else if(a>=100)
		{
		printf("这是一个三位数\n");
		printf("各位数逆序输出为：%d%d%d\n",f,e,d);
		}
	else if(a>=10)
		{ 
		printf("这是一个俩位数\n");
		printf("各位数逆序输出为：%d%d\n",f,e);
		} 
	else 
		{
		printf("这是一个一位数\n");
		printf("各位数逆序输出为：%d\n",f);
		}
	return 0;
 } 
