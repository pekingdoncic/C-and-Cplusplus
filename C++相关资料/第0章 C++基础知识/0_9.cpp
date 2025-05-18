#include <iostream>
using namespace std;
void swap(int &x,int &y)    //调用之初参数传递就使得引用参数成为本次                            
                                        // 调用对应实在参数变量的别名
{  	
         int  t=x;      	//这里的引用x和y分别是两个实在参数
	     x=y;       	 //变量的别名，因此这3条语句实际上实现了
	     y=t;        	 //实在参数变量值的互换
} 
int main( )
{	
	int a=3,b=5,c=10,d=20;
	cout<<"a="<<a<<"  b="<<b<<endl;  
   swap(a,b);       		//调用函数，参数传递相当于执行了
                		//int &x=a; int &y=b;使引用参数获得了初值
	cout<<"a="<<a<<"  b="<<b<<endl;      
   cout<<"c="<<c<<"  d="<<d<<endl;
   swap(c,d) ;     		 //调用函数，参数传递相当于执行了
                   		//int &x=c; int &y=d; 使引用参数获得了初值
    cout<<"c="<<c<<"  d="<<d<<endl;
    return 0;
}
