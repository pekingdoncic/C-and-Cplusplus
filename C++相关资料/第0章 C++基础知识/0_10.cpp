#include <iostream>
using namespace std;
int main( )
{   
    void *vp;
    char c='A';
    short int x=97;
    vp=&c;             //char���͵�ָ�����ֱ�Ӹ�ֵ��void���͵�ָ�����
    cout<<*(char *)vp<<"  "<<*(short int*)vp<<endl;   //��Ҫ��ʽ����ת����� 
    vp=&x;             //short int���͵�ָ�����ֱ�Ӹ�ֵ��void���͵�ָ�����
    cout<<*(short int *)vp<<"  "<<*(char*)vp<<endl;  //��Ҫ��ʽ����ת����� 
    return  0;  
}
