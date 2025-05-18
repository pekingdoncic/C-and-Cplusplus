#include <stdio.h>
int main()
{
	int i,n,sum;
	for(n=1;n<=1000;n++,sum=0)//你忘记了for里面只能执行1次！ 
	{
		
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
			sum=sum+i;
			}
		}
		//printf("1\n");
		if(sum==n)
			printf("%d\t",n);
		//printf("1\n");
		continue;	
	} 
	return 0;
}
/*#include<stdio.h>
int main(){
    for(int i=1;i<=1000;i++)
	{
        int cnt=0;
        for(int j=1;j<i;j++)
		{
            if(i%j==0)
			{
                cnt+=j;
            }
        }
        if(cnt==i)
        printf("%d ",i);
    continue;
    }
    return 0;
}*/

