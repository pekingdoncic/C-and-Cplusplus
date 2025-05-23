#include<iostream>
using namespace std;

class Base{
public:
	Base(){};
	virtual ~Base(){};
	virtual void show(){ cout<<"show in Base\n";};
};

class Derived : public Base{
public:
	Derived(){};
	~Derived(){cout<<"destructor in Derived\n";};
	virtual void show(){ cout<<"show in Derived\n";};
};

int main()
{
	Base * p =  new Derived;
	p->show();
	delete p;
	return 0;
}
