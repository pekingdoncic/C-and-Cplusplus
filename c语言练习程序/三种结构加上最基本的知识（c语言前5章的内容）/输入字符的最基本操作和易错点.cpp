#include <stdio.h>
int main()
{
	char c[5];
	int i;
	for(i=0;i<5;i++)
	{ 
		scanf("%c",&c[i]);//注意那个地址符！忘记加会变得不幸！ 
		printf("%c",c[i]);
	} 
	return 0;
}
