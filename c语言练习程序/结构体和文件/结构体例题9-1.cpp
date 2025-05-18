#include <stdio.h>
int main()
{
	struct Student
	{
		long int num;
		char name[20];
		char sex[10];
		char address[50];
		float score;
	}stu1,stu2;
	printf("请输入俩位学生的学号，姓名，性别，住址，成绩：\n");
	scanf("%ld%s%s%s%f",&stu1.num,stu1.name,&stu1.sex,stu1.address,
	&stu1.score);
	scanf("%ld%s%s%s%f",&stu2.num,stu2.name,&stu2.sex,stu2.address,
	&stu2.score);
	if(stu1.score>stu2.score)
	{
	printf("num is %d\nname is %s\nsex is %s\naddress is %s\n",stu1.num,
	stu1.name,stu1.sex,stu1.address);
	}
	else
	printf("num is %d\nname is %s\nsex is %s\naddress is %s\n",stu2.num,
	stu2.name,stu2.sex,stu2.address);	
	return 0;
} 
