#include <stdio.h>
int main()
{
	int i,n;
	printf("ÇëÊäÈë¸öÊı£º\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		a[i]=i;
	for(i=n-1;i>=0;i--)
		printf("%d\t",a[i]);
	return 0;
}
