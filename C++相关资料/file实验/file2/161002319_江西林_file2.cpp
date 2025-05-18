#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main()
{
	fstream file;
	file.open("colors.txt",ios::in);
	if(!file)
	{
		cout<<"can't open the color file!"<<endl;
		exit(0);
	}
	int line=1,word=0;
	char ch;
	while(!file.eof())
	{
		file.get(ch);
		if(ch==' ')
			word++;
		if(ch=='\n')
			line++;
	}
	cout<<"lines = "<<line<<endl;
	cout<<"words = "<<word+line<<endl;
	file.close(); 
	return 0;
}
