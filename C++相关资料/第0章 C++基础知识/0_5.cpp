#include <iostream>//0_5.cpp
using namespace std;\

void Fun(int i,int j=5,int k=10) ; //形参j和k分别指定了默认参数值5和10
int main( )
{ 	
	Fun(20) ;         		//实在参数个数少于形式参数，20与i对应，形式参数j和k分别使用默认值5和10
	Fun(20,30) ;      		//形参k使用默认值10
	Fun(20,30,40); 		    //实在参数个数等于形参个数，都不用默认值
	return 0;
}
void Fun(int i,int j,int k)       	 //原型中已指定了默认值，在首部不能再指定
{	
	cout<<i<<"  "<<j<<"  "<<k<<endl;  
}
