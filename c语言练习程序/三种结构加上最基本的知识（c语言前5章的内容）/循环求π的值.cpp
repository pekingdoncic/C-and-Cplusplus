#include <stdio.h>
#include<math.h>
int main()
{
	int n=1;
	double term=1,sign=1,sum=0;//�Ѿ���double���͵��ˣ�����Ҫ��д.0�ˡ� 
	for(;fabs(term)>=1e-6;)//fabs�������Ҫ�ǵã�����ֵ�� 
	{
		sum=sum+term;//������ͺ�������Ҳ����һ��Ĳ��û��̫���� 
		sign=-sign;//ע�⿴�˼���ô���Ʒ��ŵģ���Ҫר�ŵ�һ�������� 
		n+=2;
		term=sign/n;
	}
	printf("��=%.10lf\n",sum*4);
	return 0;
 } 
