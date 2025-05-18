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
		cout << "��������:";
		show();
	}
	void getinfo()
	{
		cout << "����ѧ��, ����, �ɼ�: ";
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
	cout << "��������Ϣ:" << endl;
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
			cout << "ѧ��" << x << "����ȷ" << endl;
		}
		catch (float y)
		{
			cout << "�ɼ�" << y << "����ȷ" << endl;
		}
	}
	cout << "�������ϢΪ:" << endl;
	for (i = 0; i < max; i++)
		student[i].show();
	return 0;
}