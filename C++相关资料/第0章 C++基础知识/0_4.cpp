//0_4.cpp,�������ֿռ����Ҫ�÷�ʾ��

#include <iostream>
using namespace std;      /*using����ʹ��һ�����������ֿռ�std,C++���ṩ������*/
     			 //�ռ�std���������б�׼C++�Ķ��������
namespace one  		//����һ�����ֿռ�one����M��inf                                     
{	
	const int M=200;
	int inf=10;
}                               	 //���治�ӷֺ�
namespace two  		 //����һ�����ֿռ�two����x��inf
{	
	int x;
	int inf=-100 ;   
}                           	//���治�ӷֺ�
using namespace one ;     	/*using����ʹ��һ�����������ֿռ�one*/
int main(  )
{
	using two::x ;         	//using������ʹ��two�е�x
	x=-100 ;                  	//ֱ�ӷ��ʣ��൱��two::x=-100;
	cout<<inf<<endl;     	//ֱ��ʹ��one�����г�Ա
    cout<<M<<endl;  
	two::inf*=2;      /*ʹ�����ֿռ���::�ֲ�����������δʹ��using����������*/
	cout<<two::inf<<endl;  /*ͬ����two�е����ݣ����Ƿ��ʷ�ʽ��һ��*/
    cout<<x<<endl ;   	  //ֱ�ӷ���two�е�x
	int x=8;
	cout<<x<<endl;
    return 0;
} 
