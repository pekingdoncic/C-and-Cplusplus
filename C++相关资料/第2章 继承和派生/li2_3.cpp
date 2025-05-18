#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point(int a, int b)
	{
		cout<<"����Point�Ĺ��캯����ִ��\n";
		x = a;
		y = b;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
};

class Circle : public Point
{
private:
	int r;
public:
	Circle(int a, int b, int c):Point(a,b)
	{
		cout<<"������Circle�Ĺ��캯����ִ��\n";
		r = c;
	}
	int getr()
	{
		return r;
	}
	double area()
	{
		return 3.14159*r*r;
	}
};

int main()
{
	Circle c(10,20,5);
	cout<<"Բ��Բ��Ϊ��("<<c.getx()<<","<<c.gety()<<")"<<"\n";
	cout<<"Բ�İ뾶Ϊ��"<<c.getr()<<"\n";
	cout<<"Բ�����Ϊ��"<<c.area()<<endl;
	return 0;
}
