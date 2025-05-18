#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main()
{
	fstream file1,file2;
	file1.open("in.txt",ios::in);
	file2.open("out.txt",ios::out);
	if(!file1)
	{
		cout<<"can't open the IN file!"<<endl;
		exit(0);
	}
	if(!file2)
	{
		cout<<"can't open the OUT file!"<<endl;
		exit(0);
	}
	int n,m,a[20];
	while(file1>>n)
	{
		for(int i=0;i<n;i++)
			file1>>a[i];
		file1>>m;
		int num=0;
		for(int i=0;i<n;i++)
			if(a[i]<m)
				num++;
		file2<<num<<" ";
	}
	file1.close();
	file2.close();
	return 0;
}
