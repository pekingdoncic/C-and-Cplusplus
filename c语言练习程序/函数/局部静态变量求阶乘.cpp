#include <stdio.h>
int main()
{
	int fabs(int n);
	int i;
	for(i=1;i<6;i++)
		printf("%d!=%d\n",i,fabs(i));
	return 0;
} 
int fabs(int n)
{
	static int f=1;//�����þֲ���̬��������f��ֵ���棡 
	f=f*n;
	return(f);
}
