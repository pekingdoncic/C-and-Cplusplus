#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

//copy�����Ĳ������ǵ�����
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

    	// ����׼��������ݸ�����text�С�  ����ʹ�õ���vector����ʹ��back_inserter()   

	copy(is, eof, back_inserter(text));  
	cout<<"�����"<<text.size()<<"�������ֱ�Ϊ��";
	copy(text.begin(),text.end(),out);

	cout<<endl;
	return 0;
}