#include<iostream>
#include<stdlib.h> 
#include<fstream>
using namespace std;

int main()
{
	fstream file;	//�����ļ�������
	file.open("colors.txt",ios::in);
	if(!file)
	{
		cout<<"can't open the colors file!"<<endl;
		exit(0);
	}
	fstream tempfile;	//����ļ�������
	tempfile.open("temp.txt",ios::out | ios::in | ios::trunc);
	if(!tempfile)
	{
		cout<<"can't open the temp file!"<<endl;
		exit(0);
	}
	char str[100];
	int i=1;
	while(!file.eof())
	{
		file.getline(str,100);	//��һ�е�������ȡ��str������ 
		tempfile<<i<<' '<<str<<"\n";
		i++;
	}
	file.close();
	file.open("colors.txt",ios::out);
	if(!file)
	{
		cout<<"can't open the file!";
		exit(0);
	}
	tempfile.seekp(0);	//��tempfile��ָ��ָ��ͷ0 
	while(!tempfile.eof())
	{
		tempfile.getline(str,100);
		file<<str<<"\n";
	}
	file.close();
	tempfile.close();
	return 0;
}
