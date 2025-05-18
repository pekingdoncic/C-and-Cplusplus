#include <stdio.h>
int main()
{
	float max4(float a,float b,float c,float d);
	float a,b,c,d,e;
	printf("\n");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	max4(a,b,c,d);
	e=max4(a,b,c,d);
	printf("���ֵΪ��%f\n",e);
	return 0;
}
float max4(float a,float b,float c,float d)
{
	float max2(float x,float y);
	return (max2(max2(max2(a,b),c),d));
}
float max2(float x,float y)
{
	return (x>y?x:y);
}
