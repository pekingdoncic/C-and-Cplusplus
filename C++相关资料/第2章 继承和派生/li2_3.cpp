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
		cout<<"基类Point的构造函数被执行\n";
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
		cout<<"派生类Circle的构造函数被执行\n";
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
	cout<<"圆的圆心为：("<<c.getx()<<","<<c.gety()<<")"<<"\n";
	cout<<"圆的半径为："<<c.getr()<<"\n";
	cout<<"圆的面积为："<<c.area()<<endl;
	return 0;
}
