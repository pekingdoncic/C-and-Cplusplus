#include <iostream>
using namespace std;
int square(int x)       //重载函数的第1个版本, int型参数
{   return x*x;  }
float square(float x )  //重载函数的第2个版本,float型参数 
{   return x*x;  }
double square(double x=1.5 )//重载函数的第3版本,double型参数有默认值
 {   return x*x;  }
int main( )
{  
	cout<<"square( )="<<square( )<<endl;                       
	cout<<"square(10)="<<square(10)<<endl;
    cout<<"square(2.5f)="<<square(2.5f)<<endl ;
    cout<<"square(1.1)="<<square(1.1)<<endl ;
    return 0;
} 
