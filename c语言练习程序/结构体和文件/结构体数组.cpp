#include <stdio.h>
#include <string.h>
int main()
{
	struct 
	{
		char name[20];
		int num;
	}leader[2]={{'j',0},{'k',0}};
	char lname[20];
	int i,j; 
	for(i=0;i<5;i++)
	{
		scanf("%s",lname);
		for(j=0;j<2;j++)
		{
		if(strcmp(lname,leader[j].name)==0)
			leader[j].num++;
		}	
	}
	putchar('\n');
	printf("结果为：\n");
	for(i=0;i<2;i++)
		printf("%s有%d票\n",leader[i].name,leader[i].num);
	return 0; 
 } 
