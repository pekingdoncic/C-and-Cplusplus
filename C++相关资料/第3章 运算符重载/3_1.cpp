#include<iostream>
using namespace std;

class Complex{
private:
	double real;
	double imaginary;
public:
	Complex(double x=0.0, double y=0.0){
		real = x;
		imaginary = y;
	}
	Complex operator+(Complex &);
	void show();
};

Complex Complex::operator+(Complex & c)
{
	Complex temp;
	temp.real = this->real + c.real;
	temp.imaginary = this->imaginary + c.imaginary;
	return temp;
}

void Complex::show()
{
	cout<<"("<<real<<","<<imaginary<<")";
}

int main()
{
	Complex c1(10.0,20.0), c2(30.0,40.0), c3;
	c3 = c1 + c2;
	c1.show();
	cout<<"+";
	c2.show();
	cout<<"=";
	c3.show();
	cout<<endl;
	
	return 0;
}

