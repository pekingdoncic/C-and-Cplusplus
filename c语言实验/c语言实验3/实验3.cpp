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
 		printf("%c����ĸ���е�λ��Ϊ��%d\n",c,c-96);
 	else if((c>='A'&&c<='Z'))
 		printf("%c����ĸ���е�λ��Ϊ��%d\n",c,c-64);
 	else
 		printf("%c������ĸ��\n",c);
}
