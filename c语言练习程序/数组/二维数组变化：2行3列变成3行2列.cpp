#include <stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}},b[3][2],i,j;
	  printf("����aΪ:\n");
	  for(i=0;i<2;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{
	  		b[j][i]=a[i][j];
	  		printf("%d\t",a[i][j]); 		  	
		}
		putchar('\n');
	}
		printf("����bΪ��\n");
		for(i=0;i<3;i++)//ע�⣬���ڶ�ά���飬һ��Ҫ��ȥѭ���У���ѭ���У� 
		{
			for(j=0;j<2;j++)
				printf("%d\t",b[i][j]);
		  		putchar('\n');
		}
	return 0; 
}
