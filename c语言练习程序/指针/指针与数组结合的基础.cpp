#include <stdio.h>
int main()
{
	int a[10],i,*p;
	printf("请输入10个整数：\n");
	for(p=a;p<(a+10);p++)
		scanf("%d",p);
	for(p=a;p<(a+10);p++)//请注意，这里一定要有p=a这条语句，不然的话在第一次循环之后p指向a[9]后面！ 
		printf("%d\t",*p);
	putchar('\n');
	return 0;
}
