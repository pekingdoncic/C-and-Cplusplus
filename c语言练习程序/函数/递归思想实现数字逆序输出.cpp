#include <stdio.h>
void convert(char s[],int n)//传过来的s是字符串整体！ 
{
    int i;
    if((i=n/10)!=0)
    	convert(s+1,i);//数组类型的可以直接用指针！同时这里的s是地址，加1是为了到下一位！ 
    *s=n%10+'0';//这里输入‘0’是为了让运算通过ASCII运算，确保可以用%c输出！！
    return;
}
int main()
{
    int num;
    char str[10];
    printf("input integer data：");
    scanf("%d",&num);
    convert(str,num);
    printf("output string：\n");
    puts(str);
    return 0;
}
