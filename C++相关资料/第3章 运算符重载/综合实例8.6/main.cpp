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
		cout<<"str1��str2���"<<endl;
	else
		cout<<"str1��str2�����"<<endl;
	str2=str1;
	cout<<"str2:";
	str2.show();
	if(str1==str2)
		cout<<"str1��str2���"<<endl;
	else
		cout<<"str1��str2�����"<<endl;
	str1 += str2;
	cout<<"���Ӻ���ַ���Ϊ:";
	str1.show();


	return 0;
}