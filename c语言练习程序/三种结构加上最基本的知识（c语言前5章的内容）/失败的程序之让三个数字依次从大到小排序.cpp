#include <stdio.h>
int main()
{
	double a,b,c,M;
	void max(float a,float b,float c);
	printf("������a,b,c��ֵ��\n");
	scanf("%f%f%f",&a,&b,&c);
	//M=max(a,b,c);
	//printf("�������ɴ�С�����ǣ�%f\n",M);
	max(a,b,c);
	return 0;
 } 
 	void max(float a,float b,float c)
 	{
	 {
	 if(a>b>c) printf("%f,%f,%f",a,b,c);
	 }
	 {
	 if(b>a>c) printf("%f,%f,%f",b,a,c);
	 }
	 {if(a>c>b) printf("%f,%f,%f",a,c,b);
	 }
	 {
	 if(b>c>a) printf("%f,%f,%f",b,c,a);
	 }
	 {
	 if(c>a>b) printf("%f,%f,%f",c,a,b);
	 }
	 {
	 if(c>b>a) printf("%f,%f,%f",c,b,a);
	 }
	}
