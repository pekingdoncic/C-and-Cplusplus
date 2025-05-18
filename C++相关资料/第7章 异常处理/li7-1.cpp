#include <iostream>
using namespace std;

int divi(int x, int y)
{
	if(y==0) throw 0;
	return x/y;
}

int main()
{
	int m, n;
	try{
		cout<<"ÇëÊäÈëm,n:";
		cin>>m>>n;
		cout<<"m/n = "<<divi(m,n)<<endl;
	}
	catch(int)
	{
		cout<<"³ýÊýÎª0\n";
	}
	return 0;
}