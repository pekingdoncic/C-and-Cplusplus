#include <stdio.h>
int main()
{
int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,16,12},{13,14,40,11}};
int i=1,j,sum=0,max=0,ji=1,hang,lie;
for(i=0;i<4;i++)
{
  for(j=0;j<4;j++)
  {
   if(i==j||i+j==3)//ע�⣬����Ƕ��Ǵ�0��ʼѭ���ģ�����i+j==3�� 
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
 printf("�Խ��ߵĺ���%d\n�Խ������С����±��Ϊż���ĸ�Ԫ�صĻ�Ϊ%d\n",sum,ji);
 printf("�Խ��������ֵΪ%d,���������ǣ�%d,%d��",max,hang+1,lie+1);
 //����Ҫע�⻹�Ǵ�0��ʼ�ģ������кź��к�Ҫ�ֱ��1�� 
 return 0;
}
