#include <iostream>
using namespace std;
void swap(int &x,int &y)    //����֮���������ݾ�ʹ�����ò�����Ϊ����                            
                                        // ���ö�Ӧʵ�ڲ��������ı���
{  	
         int  t=x;      	//���������x��y�ֱ�������ʵ�ڲ���
	     x=y;       	 //�����ı����������3�����ʵ����ʵ����
	     y=t;        	 //ʵ�ڲ�������ֵ�Ļ���
} 
int main( )
{	
	int a=3,b=5,c=10,d=20;
	cout<<"a="<<a<<"  b="<<b<<endl;  
   swap(a,b);       		//���ú��������������൱��ִ����
                		//int &x=a; int &y=b;ʹ���ò�������˳�ֵ
	cout<<"a="<<a<<"  b="<<b<<endl;      
   cout<<"c="<<c<<"  d="<<d<<endl;
   swap(c,d) ;     		 //���ú��������������൱��ִ����
                   		//int &x=c; int &y=d; ʹ���ò�������˳�ֵ
    cout<<"c="<<c<<"  d="<<d<<endl;
    return 0;
}
