#include <stdio.h>
#define n 4
int main()
{
	int i,j,a[n][n],sum=0,m=1,max,max1,max2,e,b,c,d;
	printf("������%d*%d�����飺\n",n,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}//��������� 
for(i=0,max1=a[0][0];i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(i==j)
   {
   
    if(a[i][j]>a[i+1][j+1])
     {
     max1=a[i][j];
     e=i;
     b=j;
     }
    else
     {
     max1=a[i+1][j+1];
     e=i+1;
     b=j+1;
     }
   }
  }
 }
 for(i=0,max2=a[3][0];i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(i+j==n-1)
   {
   
    if(a[i][j]>a[i+1][j-1])
     {
     max2=a[i][j];
     c=i;
     d=j;
     }
    else
     {
     max2=a[i+1][j-1];
     c=i+1;
     d=j-1;
     }
   }
  }
 }
 if(max1>max2)
  printf("���ֵΪ%d\n��������Ϊ%d��Ϊ%d",max1,e+1,b+1);
 else
  printf("���ֵΪ%d\n��������Ϊ%d��Ϊ%d",max2,c+1,d+1);
  return 0;
}
