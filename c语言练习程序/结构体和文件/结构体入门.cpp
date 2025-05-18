#include <stdio.h>
typedef struct Stu
{
	long int num;
	char name[20];
	char sex;
	char addr[20];
}S;
S a={211002207,"LiNing",'F',"BJ"};
S *p=&a;
int main()
{
	printf("学号%d\n姓名:%s\n性别:%c\n地址：%s\n",p->num,p->name,
	p->sex,p->addr);
	return 0;
}

