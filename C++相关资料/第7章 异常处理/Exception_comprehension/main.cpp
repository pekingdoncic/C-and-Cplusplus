//main.cpp

#include <iostream>
#include <iomanip>

#define max 3

using namespace std;

class Info
{
protected:
	int no;
	char name[8];
	float score;
public:
	Info()
	{

	}
	~Info()
	{
		cout << "析构对象:";
		show();
	}
	void getinfo()
	{
		cout << "输入学号, 姓名, 成绩: ";
		cin >> no >> name >> score;
		if (no <= 0 || no > max)
			throw no;
		if (score < 0.0 || score > 100.0)
			throw score;
	}
	void show()
	{
		cout << "   " << setw(4) << no << setw(8) << name << setw(6) << score << endl;
	}

};

int main()
{
	Info student [max];
	cout << "请输入信息:" << endl;
	for (int i = 0; i < max; i++)
	{
		try
		{
//			Info s;
//			s.getinfo();
			student[i].getinfo();
		}
		catch (int x)
		{
			cout << "学号" << x << "不正确" << endl;
		}
		catch (float y)
		{
			cout << "成绩" << y << "不正确" << endl;
		}
	}
	cout << "输入的信息为:" << endl;
	for (i = 0; i < max; i++)
		student[i].show();
	return 0;
}