#include <stdio.h>
int main()
{
	int max,i,j;
	int a[3][4]={{5,6,57,6},{787},{564,6,654}};
	max=a[0][0];//打擂台要注意给这个max赋初值，不然会出bug！ 
	for(i=0;i<3;i++)//记住：永远都是先行再列！ 
	{
		for(j=0;j<4;j++)
		{
		if(max<a[i][j])
			max=a[i][j];//这种求最大值的基本算法就是打擂台！ 
		}
	}
	printf("最大值为：%d",max);
	return 0;
}
