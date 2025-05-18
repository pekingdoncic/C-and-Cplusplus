#include <stdio.h>
//#define n 6
#include <string.h>
int main()
{
	char a[10];
	int i,t,n;
	scanf("%s",&a);
	printf("字符长度：%d\n",strlen(a));
	n=strlen(a); 
	for(i=0;i<n/2;i++)//这块如果是奇数的话，这个i就取整了相当于（n-1）/2！所以要这么写！ 
	//这个相当于折半查找的那个意思，就是从中间分开，把前一半和后一半的相对 
	{
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
	printf("%d\n",i);
	printf("%s",a);
	putchar('\n');
	//printf("字符长度：%d",strlen(a));
	return 0;
}
