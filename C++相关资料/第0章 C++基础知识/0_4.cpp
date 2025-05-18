//0_4.cpp,关于名字空间的主要用法示例

#include <iostream>
using namespace std;      /*using声明使用一个完整的名字空间std,C++中提供的名字*/
     			 //空间std涵盖了所有标准C++的定义和声明
namespace one  		//定义一个名字空间one，有M和inf                                     
{	
	const int M=200;
	int inf=10;
}                               	 //后面不加分号
namespace two  		 //定义一个名字空间two，有x和inf
{	
	int x;
	int inf=-100 ;   
}                           	//后面不加分号
using namespace one ;     	/*using声明使用一个完整的名字空间one*/
int main(  )
{
	using two::x ;         	//using声明仅使用two中的x
	x=-100 ;                  	//直接访问，相当于two::x=-100;
	cout<<inf<<endl;     	//直接使用one中所有成员
    cout<<M<<endl;  
	two::inf*=2;      /*使用名字空间名::局部内容名操作未使用using声明的内容*/
	cout<<two::inf<<endl;  /*同样是two中的内容，但是访问方式不一样*/
    cout<<x<<endl ;   	  //直接访问two中的x
	int x=8;
	cout<<x<<endl;
    return 0;
} 
