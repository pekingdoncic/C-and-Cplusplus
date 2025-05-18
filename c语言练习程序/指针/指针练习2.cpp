#include <stdio.h>
int main()
{
	void search(float (*p)[4],int n); 
	float a[3][4]={{99,98,99,100},{90,89,94,96},{88,99,100,95}};//找到的为
	//a【2】！ 
	search (a,3);
	return 0;
}
void search(float (*p)[4],int n)
{
	int i,j,f=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<4;j++)
		{
			if(*(*(p+i)+j)<90)
			{
				f=1;
			}
		}
		if(f==1)
		{
			for(j=0;j<4;j++)
			printf("%-5.1f\t",*(*(p+i)+j)); 
		}
		putchar('\n');
	}
}
//这个程序之所以出现问题，是逻辑出现错误！i的输出放在最后输出肯定是3！
//输出这些成绩应该放在外层循环中！ 逻辑一定要对！ 
