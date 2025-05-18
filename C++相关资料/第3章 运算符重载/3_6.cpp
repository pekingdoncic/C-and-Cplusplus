#include<iostream>
#include<string>
using namespace std;

class Student;
istream & operator>>(istream &stream, Student &stu);
ostream & operator<<(ostream &stream, Student &stu);

class Student{
private:
	int number;
	char name[20];
	char sex;
	int age;
public:
	Student(int, char *, char, int);
	friend istream & operator>>(istream &stream, Student &stu);
	friend ostream & operator<<(ostream &stream, Student &stu);
};

Student::Student(int n, char *name, char s, int a)
{
	number = n;
	strcpy(this->name, name);
	sex = s;
	age = a;
}

istream & operator>>(istream &stream, Student &stu)
{
	stream>>stu.number>>stu.name>>stu.sex>>stu.age;
	return stream;
}

ostream & operator<<(ostream &stream, Student &stu)
{
	stream<<stu.number<<" "<<stu.name<<" "<<stu.sex<<" "<<stu.age<<endl;
	return stream;
}

int main()
{
	Student stu(101,"wang",'M',20);
	cout<<"��ǰѧ����Ϣ:";
	cout<<stu;
	cout<<"�����µ�ѧ����Ϣ��";
	cin>>stu;
	cout<<"�µ�ѧ����Ϣ��";
	cout<<stu;

	return 0;
}

