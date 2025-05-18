#include <iostream>//0_8.cpp
using namespace std;
int x=5,y=10;
int &r=x;          		//定义一个引用r作为变量x的别名
void print( )          		//定义一个专门用于输出的函数 
{    
 	cout<<"x="<<x<<" y="<<y <<" r="<<r  <<endl ; 
	cout<<"Address of x "<<&x<<endl;     
	cout<<"Address of y "<<&y<<endl; 	   
	cout<<"Address of r "<<&r<<endl ; 
}
int main()
{   
   	print();                  //第1次调用输出函数
   	r=y ;                      //相当于x=y，将y的值赋给x   
   	y=100 ;                 //对y重新赋值不会影响引用r的值
    print() ;              	 //再次调用输出函数
    x=200;                 	//对x重新赋值, r随之改变
    print() ;               	//再次调用输出函数
    return 0;
}
