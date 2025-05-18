#include<iostream>
#include<string>
using namespace std;

class String{
private:
	char * str;
public:
	String(char * pstr = "")
	{
		str = new char[strlen(pstr)+1];
		strcpy(str, pstr);
	}

	~String()
	{
		delete [] str;
	}

	void show()
	{
		cout<<str<<endl;
	}

	String & operator=(String & );
};

String & String::operator=(String & s)
{
	delete [] str;
	str = new char[strlen(s.str)+1];
	strcpy(str, s.str);
	return *this;
}

int main()
{
	String s1("Hello world."), s2;
	s1.show();
	s2 = s1;
	s2.show();

	return 0;
}

