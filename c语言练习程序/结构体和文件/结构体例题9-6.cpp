#include <stdio.h>
int main() 
{
	struct S
	{
		int num;
		char name[20];
		char sex;
		int age;
	};
	struct S s[3]=
	{
	{10101,"li lin",'M',18},
	{10102,"zhang fang",'M',19},
	{10104,"wang min",'F',20}
	};
	struct S *p;
	for(p=s;p<s+3;p++)
		printf("No.%-6d\tName:%-20s\tsex is:%-2c\tage is;%-2d\n",
	p->num,p->name,p->sex,p->age); 
	return 0;
}
