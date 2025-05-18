#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main()
{
	fstream file1,file2;
	file1.open("colors1.txt",ios::app|ios::out);
	file2.open("colors2.txt",ios::in);
	if(!file1)
	{
		cout<<"can't open the colors1 file!"<<endl;
		exit(0);
	}
	if(!file2)
	{
		cout<<"can't open the colors2 file!"<<endl;
		exit(0);
	}
	char str[100];
	while(!file2.eof())
	{
		file2.getline(str,100);
		file1<<str<<"\n";	
	}
	file1.close();
	file2.close();
	return 0;
}
