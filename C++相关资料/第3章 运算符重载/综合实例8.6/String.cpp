// String.cpp: implementation of the String class.
//
//////////////////////////////////////////////////////////////////////

#include "String.h"
#include<string.h>
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

String::String(char *sp)
{
	p=new char[strlen(sp)+1];
	strcpy(p,sp);
}

String::~String()
{
	delete p;
}

String::String(String &str)
{
	p=new char[strlen(str.p)+1];
	strcpy(p,str.p);
}

void String::operator=(String & str)
{
	delete []p;											//释放当前对象的数据空间
	p=new char[strlen(str.p)+1];
	strcpy(p,str.p);
}

int String::operator==(String & str)
{
	return (strcmp(p,str.p)==0);
}

String  /*&*/ String::operator +=(String & str)				//返回值为类类型时，要用别名，或者重写一个拷贝构造函数
{
	char *s=new char[strlen(this->p)+1];
	strcpy(s,this->p);
	delete this->p;
	this->p=new char[strlen(s)+strlen(str.p)+1];
	strcpy(this->p,s);
	strcat(this->p,str.p);
	delete s;
	return *this;
}

void String::show()
{
	cout<<p<<endl;
}