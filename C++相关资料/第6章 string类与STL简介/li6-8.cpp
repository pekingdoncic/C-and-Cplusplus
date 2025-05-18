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
	cout<<"输入一组整数，以非数字结束:\n";
	istream_iterator<int> in(cin);  
    	istream_iterator<int> eof;  
	ostream_iterator<int> out(cout," ");  
    	vector<int> text;  
	
 	copy(in, eof, back_inserter(text));
	cout << "排序前的" << text.size() << "个整数分别为：";
	copy(text.begin(),text.end(),out);
	cout<<endl;
	sort(text.begin(),text.end());
	cout << "从小到大排序后的" << text.size() << "个整数分别为：";
	copy(text.begin(),text.end(),out);
	cout<<endl;
	sort(text.begin(),text.end(),cmp);
	cout << "从大到小排序后的" << text.size() << "个整数分别为：";
	copy(text.begin(),text.end(),out);
	cout<<endl;
	return 0;
}