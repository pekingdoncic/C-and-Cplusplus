#include <stdio.h>
#include<math.h>
int main()
{
	int n=1;
	double term=1,sign=1,sum=0;//已经是double类型的了，不需要在写.0了。 
	for(;fabs(term)>=1e-6;)//fabs这个函数要记得！绝对值！ 
	{
		sum=sum+term;//首先求和和最后求和也就是一项的差别，没有太大差别！ 
		sign=-sign;//注意看人家怎么控制符号的，需要专门的一个变量！ 
		n+=2;
		term=sign/n;
	}
	printf("π=%.10lf\n",sum*4);
	return 0;
 } 
