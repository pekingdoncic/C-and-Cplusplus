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
	printf("������3��ͬѧѧ�ţ�������3�ſγ̵ĳɼ���\n");
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
void print(S stud)//���ﴫ����һ���ṹ����������������֮ǰû�ж���������������βΣ�����ν�� 
{
	printf("\n�ɼ���ߵ�ͬѧ�ǣ�\n");
	printf("ѧ�ţ�%d\n������%-20s\n���ſεĳɼ���%f\t%f\t%f\tƽ���ɼ���%6.2f\n",
	stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],
	stud.aver);
}
int main()
{
	S s[3],*p=s;
	input(p); 
	print(max(p));//������˴��룬����д����ô�����ˣ� 
	return 0;
}
