#include <iostream>
using namespace std;
int main( )
{   
    void *vp;
    char c='A';
    short int x=97;
    vp=&c;             //char类型的指针可以直接赋值给void类型的指针变量
    cout<<*(char *)vp<<"  "<<*(short int*)vp<<endl;   //需要显式类型转换输出 
    vp=&x;             //short int类型的指针可以直接赋值给void类型的指针变量
    cout<<*(short int *)vp<<"  "<<*(char*)vp<<endl;  //需要显式类型转换输出 
    return  0;  
}
