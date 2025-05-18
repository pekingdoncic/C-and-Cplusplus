#include <stdio.h> 
int main()
{
	int a,b,c,i,j,k;
	for(i=0;i<=20;i++)
	{
		a=5*i;
		for(j=0;j<=34;j++)
		{
			b=j*3;
			for(k=0;k<=300;k+=3)
				{
				c=k/3;
				if(a+b+c==100&&i+j+k==100)
				printf("¼¦ÎÌ%d\t¼¦Ä¸%d\t¼¦³û%d\n",i,j,k);
				}
				
		}
	}
	return 0;
}
