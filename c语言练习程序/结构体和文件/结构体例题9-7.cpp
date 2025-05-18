#include <stdio.h>
typedef struct Student
{
	int num;
	char name[20];
	float score[3];
	float aver;
}S;

void input(S stu[])
{
	int i;
	printf("请输入3名同学学号，姓名，3门课程的成绩：\n");
	for(i=0;i<3;i++)
	{
		scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,
		&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
	stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3; 
	}
}
S max(S stu[])
{
	int i,m=0;
	for(i=0;i<3;i++)
	{
	if(stu[i].aver>stu[m].aver)
	m=i;	
	}
	return stu[m];
}
void print(S stud)//这里传的是一个结构体变量，这个变量名之前没有定义过，但由于是形参，无所谓！ 
{
	printf("\n成绩最高的同学是：\n");
	printf("学号：%d\n姓名：%-20s\n三门课的成绩：%f\t%f\t%f\t平均成绩：%6.2f\n",
	stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],
	stud.aver);
}
int main()
{
	S s[3],*p=s;
	input(p); 
	print(max(p));//妙啊，简化了代码，不用写的那么冗杂了！ 
	return 0;
}
