#include <iostream>//0_5.cpp
using namespace std;\

void Fun(int i,int j=5,int k=10) ; //�β�j��k�ֱ�ָ����Ĭ�ϲ���ֵ5��10
int main( )
{ 	
	Fun(20) ;         		//ʵ�ڲ�������������ʽ������20��i��Ӧ����ʽ����j��k�ֱ�ʹ��Ĭ��ֵ5��10
	Fun(20,30) ;      		//�β�kʹ��Ĭ��ֵ10
	Fun(20,30,40); 		    //ʵ�ڲ������������βθ�����������Ĭ��ֵ
	return 0;
}
void Fun(int i,int j,int k)       	 //ԭ������ָ����Ĭ��ֵ�����ײ�������ָ��
{	
	cout<<i<<"  "<<j<<"  "<<k<<endl;  
}
