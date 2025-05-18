#include <vector>
#include <iostream>
#include <iterator>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream file1("file1.txt");
	ofstream file2("file2.txt");
	if(!file1|!file2)
	{
		cout<<"cannot open file\n";
		return 0;
	}
	istream_iterator<string> in(file1);  
    istream_iterator<string> eof;  
	ostream_iterator<string> out(file2," ");  
	ostream_iterator<string> out1(cout," ");
    	vector<string> text;  

    	// ����׼��������ݸ�����text�С�  ����ʹ�õ���vector����ʹ��back_inserter()   
	copy(in, eof, back_inserter(text));
	copy(text.begin(),text.end(),out);
	copy(text.begin(),text.end(),out1);
	return 0;
}
