#include <stdio.h>
int main(void)
{
	int max(int x,int y);
	int a,b,c;//��֮ǰ��һ����ʾ��ͺ��� 
	scanf("%d%d",&a,&b);//ע��%d�����ʱ�����žͺ��ˣ��м��ж��ţ���ᰴ�س�ֱ��ִ�г����� 
	//c=max(a,b);
	printf("max=%d\n",max(a,b));
	return 0;
 } 
 int max(int x,int y)
 {
 	int z;
 	if(x<y)z=y;
 	else z=x;
 	return(z);
 }
 
