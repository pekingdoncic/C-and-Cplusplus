#include <stdio.h>
int main()
{
int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,16,12},{13,14,40,11}};
int i=1,j,sum=0,max=0,ji=1,hang,lie;
for(i=0;i<4;i++)
{
  for(j=0;j<4;j++)
  {
   if(i==j||i+j==3)//注意，这块是都是从0开始循环的，所以i+j==3！ 
   {
    sum+=a[i][j];
    if((i+1)%2==0&&(j+1)%2==0)
	{
     	ji*=a[i][j];
    }
    if(a[i][j]>max)
	{
    	hang=i;
    	lie=j; 
    	max=a[i][j];
    }
   }
   printf("%d\t",a[i][j]); 
  }
  putchar('\n');
}
 printf("对角线的和是%d\n对角线上行、列下标均为偶数的个元素的积为%d\n",sum,ji);
 printf("对角线上最大值为%d,他的坐标是（%d,%d）",max,hang+1,lie+1);
 //这里要注意还是从0开始的，所以行号和列号要分别加1！ 
 return 0;
}
