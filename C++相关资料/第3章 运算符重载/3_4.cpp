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

	bool operator!();
};

bool String::operator!()
{
	if(strlen(str)==0)
		return true;
	return false;
}

int main()
{
	String s1("Hello world."), s2;

	if(!s1)
		cout<<"s1 is null."<<"\n";
	else
		s1.show();
	
	if(s2.operator!())
		cout<<"s2 is null."<<"\n";
	else
		s2.show();

	return 0;
}

