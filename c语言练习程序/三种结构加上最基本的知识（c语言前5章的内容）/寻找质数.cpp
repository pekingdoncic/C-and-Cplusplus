#include <stdio.h>
void main(int=1)
{
	int i,n;
	for(n=100;n<201;n++)
	{
		for(i=2;i<=n-1;i++)
			if(n%i==0) break;	
		if(i<n) printf("%d����������\n",n);
		else printf("%d��������\n",n);
	}
}
