#include <iostream>
using namespace std;
int square(int x)       //���غ����ĵ�1���汾, int�Ͳ���
{   return x*x;  }
float square(float x )  //���غ����ĵ�2���汾,float�Ͳ��� 
{   return x*x;  }
double square(double x=1.5 )//���غ����ĵ�3�汾,double�Ͳ�����Ĭ��ֵ
 {   return x*x;  }
int main( )
{  
	cout<<"square( )="<<square( )<<endl;                       
	cout<<"square(10)="<<square(10)<<endl;
    cout<<"square(2.5f)="<<square(2.5f)<<endl ;
    cout<<"square(1.1)="<<square(1.1)<<endl ;
    return 0;
} 
