#include <stdio.h>
int main()
{
	int a[10],i,*p;
	printf("������10��������\n");
	for(p=a;p<(a+10);p++)
		scanf("%d",p);
	for(p=a;p<(a+10);p++)//��ע�⣬����һ��Ҫ��p=a������䣬��Ȼ�Ļ��ڵ�һ��ѭ��֮��pָ��a[9]���棡 
		printf("%d\t",*p);
	putchar('\n');
	return 0;
}
