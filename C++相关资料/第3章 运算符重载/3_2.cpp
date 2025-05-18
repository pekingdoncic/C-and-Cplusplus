#include<iostream>
using namespace std;

class Complex;
Complex operator-(const Complex &, const Complex &);

class Complex{
private:
	double real;
	double imaginary;
public:
	Complex(double x=0.0, double y=0.0){
		real = x;
		imaginary = y;
	}
	friend	Complex operator-(const Complex & c1, const Complex & c2);
	void show();
};

Complex operator-(const Complex & c1, const Complex & c2)
{
	Complex temp;
	temp.real = c1.real - c2.real;
	temp.imaginary = c1.imaginary - c2.imaginary;
	return temp;
}

void Complex::show()
{
	cout<<"("<<real<<","<<imaginary<<")";
}

int main()
{
	Complex c1(10.0,20.0), c2(30.0,40.0), c3;
	c3 = c1 - c2;
	c1.show();
	cout<<"-";
	c2.show();
	cout<<"=";
	c3.show();
	cout<<endl;
	
	return 0;
}

