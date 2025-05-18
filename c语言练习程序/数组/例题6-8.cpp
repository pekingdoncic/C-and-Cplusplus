#include <stdio.h>
int main()
{
	char str[20],c;
	int i,word,num=1;
	gets(str);
	for(i=0;(c=str[i])!='\0';i++)
	{
		if(c==' ')
			word=0;
		else if(word==0)
		{
			word=1;
			num++;		
		}
	}
	printf("%d",num);
	return 0;	
} 
