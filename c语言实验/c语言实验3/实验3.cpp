#include <stdio.h>
int main()
{
	char b; 
	void judge (char c);
	while(scanf("%c",&b)!=EOF)
	{
		judge(b);
	} 
	return 0;
 } 
void judge (char c)
{
 	if(c>='a'&&c<='z')
 		printf("%c在字母表中的位置为：%d\n",c,c-96);
 	else if((c>='A'&&c<='Z'))
 		printf("%c在字母表中的位置为：%d\n",c,c-64);
 	else
 		printf("%c不是字母！\n",c);
}
