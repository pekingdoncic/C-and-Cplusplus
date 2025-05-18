#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
		for(j=1;j<=5;j++)
			{
			//if(i==3&&j==2) break;
			printf("%d\t",i*j);
			if(j%6==5)
			putchar('\n');
			}	
		
	return 0;
}
