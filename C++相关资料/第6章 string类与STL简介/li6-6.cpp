#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

//copy函数的参数都是迭代器
// #include <algorithm>    
//output_iterator copy( input_iterator start, input_iterator end, output_iterator dest );
//The copy function copies the elements between start and end to dest. 
//In other words, after copy has run,   
//*dest = *start   *(dest+1) = *(start+1)   *(dest+2) = *(start+2)   ...   *(dest+N) = *(start+N)

int main()
{
	istream_iterator<int> is(cin);  

	istream_iterator<int> eof;  

	ostream_iterator<int> out(cout," ");  

	vector<int> text;  

    	// 将标准输入的内容复制至text中。  由于使用的是vector，故使用back_inserter()   

	copy(is, eof, back_inserter(text));  
	cout<<"输入的"<<text.size()<<"个整数分别为：";
	copy(text.begin(),text.end(),out);

	cout<<endl;
	return 0;
}