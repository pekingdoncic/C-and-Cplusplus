#include <stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}},b[3][2],i,j;
	  printf("数组a为:\n");
	  for(i=0;i<2;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{
	  		b[j][i]=a[i][j];
	  		printf("%d\t",a[i][j]); 		  	
		}
		putchar('\n');
	}
		printf("数组b为：\n");
		for(i=0;i<3;i++)//注意，对于二维数组，一定要先去循环行，再循环列！ 
		{
			for(j=0;j<2;j++)
				printf("%d\t",b[i][j]);
		  		putchar('\n');
		}
	return 0; 
}
