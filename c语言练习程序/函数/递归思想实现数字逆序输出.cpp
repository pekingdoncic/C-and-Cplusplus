#include <stdio.h>
void convert(char s[],int n)//��������s���ַ������壡 
{
    int i;
    if((i=n/10)!=0)
    	convert(s+1,i);//�������͵Ŀ���ֱ����ָ�룡ͬʱ�����s�ǵ�ַ����1��Ϊ�˵���һλ�� 
    *s=n%10+'0';//�������롮0����Ϊ��������ͨ��ASCII���㣬ȷ��������%c�������
    return;
}
int main()
{
    int num;
    char str[10];
    printf("input integer data��");
    scanf("%d",&num);
    convert(str,num);
    printf("output string��\n");
    puts(str);
    return 0;
}
