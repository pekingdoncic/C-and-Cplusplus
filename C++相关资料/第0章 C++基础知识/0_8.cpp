#include <iostream>//0_8.cpp
using namespace std;
int x=5,y=10;
int &r=x;          		//����һ������r��Ϊ����x�ı���
void print( )          		//����һ��ר����������ĺ��� 
{    
 	cout<<"x="<<x<<" y="<<y <<" r="<<r  <<endl ; 
	cout<<"Address of x "<<&x<<endl;     
	cout<<"Address of y "<<&y<<endl; 	   
	cout<<"Address of r "<<&r<<endl ; 
}
int main()
{   
   	print();                  //��1�ε����������
   	r=y ;                      //�൱��x=y����y��ֵ����x   
   	y=100 ;                 //��y���¸�ֵ����Ӱ������r��ֵ
    print() ;              	 //�ٴε����������
    x=200;                 	//��x���¸�ֵ, r��֮�ı�
    print() ;               	//�ٴε����������
    return 0;
}
