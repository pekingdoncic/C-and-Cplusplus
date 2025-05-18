#include "String.h"
#include<iostream>
using namespace std;

int main()
{
	String str1("ABC");
	String str2("abcde");
	cout<<"str1:";
	str1.show();
	cout<<"str2:";
	str2.show();
	if(str1==str2)
		cout<<"str1和str2相等"<<endl;
	else
		cout<<"str1和str2不相等"<<endl;
	str2=str1;
	cout<<"str2:";
	str2.show();
	if(str1==str2)
		cout<<"str1和str2相等"<<endl;
	else
		cout<<"str1和str2不相等"<<endl;
	str1 += str2;
	cout<<"连接后的字符串为:";
	str1.show();


	return 0;
}