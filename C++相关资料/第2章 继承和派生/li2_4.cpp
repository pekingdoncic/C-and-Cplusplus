#include <iostream>
using namespace std;

class Circle 
{
protected:
	double r;
public:
	Circle(double ra)
	{
		r = ra;
	}
	double area()
	{
		return 3.14159*r*r;
	}
};
class Cylinder : public Circle
{
protected: 
	double h;
public:
	Cylinder(double rv, double hv);
	double area()
	{
		return 2*Circle::area()+2*3.14*r*h;
	}
};

Cylinder::Cylinder(double rv, double hv): Circle(rv)
{
	h = hv;
}

int main()
{
	Circle cir(5);
	Cylinder cylin(5,10);
	cout<<"Բ�����Ϊ��"<<cir.area()<<"\n";
	cout<<"Բ����ĵ����Ϊ��"<<cylin.Circle::area()<<"\n";
	cout<<"Բ����ı����Ϊ��"<<cylin.area()<<endl;
	return 0;
}
