//0_2.cpp：局部变量随用随定义及作用域问题示例。
#include <iostream>
#include <iomanip>
using namespace std;             //使用C++的标准名字空间
int main()
{   
	int arr[3]={0},i=123;        //定义第一个局部变量i,作用域不含第二个i所在域 
	cout<<"i="<<i<<endl;        //输出第一个i的值为123

    {                           //该语句块内,有同名的局部变量i,则第一个i无作用
		for (int i=0;i<2;i++)      //定义第二个局部变量i，作用域仅限于该语句块
           arr[i]=(i+5)*10+3;
        cout<<"i="<<i<<endl;     //输出第二个局部变量i的值2,第一个i不起作用
		arr[2]++;
		cout<<"i="<<i<<endl;    //输出第二个局部变量i的值2,第一个i不起作用	
    }                           //第二个局部变量i的作用域到此结束

	cout<<"i="<<i<<endl;        //输出的为第一个i的值123
    int sum=0 ;                //定义局部变量sum,随用随定义
    for (i=0;i<3; i++)            //第一个i在起作用
        sum+=arr[i];
    cout<<"i="<<i<<endl;        //输出的为第一个i的值3
    for (i=0;i<3 ;i++)       	   //第一个i作为循环控制变量
        cout<<setw(4)<<arr[i];   //setw控制格式,后面按每个元素占4列输出
    cout<<endl;
    cout<<"i="<<i<<",sum="<<sum<<endl;     //输出第一个i的值3以及sum的值117  
	return 0;
}
