#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
bool cmp(int x, int y)
{
	return x>y;
}
int main()
{
	cout<<"����һ���������Է����ֽ���:\n";
	istream_iterator<int> in(cin);  
    	istream_iterator<int> eof;  
	ostream_iterator<int> out(cout," ");  
    	vector<int> text;  
	
 	copy(in, eof, back_inserter(text));
	cout << "����ǰ��" << text.size() << "�������ֱ�Ϊ��";
	copy(text.begin(),text.end(),out);
	cout<<endl;
	sort(text.begin(),text.end());
	cout << "��С����������" << text.size() << "�������ֱ�Ϊ��";
	copy(text.begin(),text.end(),out);
	cout<<endl;
	sort(text.begin(),text.end(),cmp);
	cout << "�Ӵ�С������" << text.size() << "�������ֱ�Ϊ��";
	copy(text.begin(),text.end(),out);
	cout<<endl;
	return 0;
}