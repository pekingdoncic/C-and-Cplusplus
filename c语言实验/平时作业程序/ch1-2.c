#include <stdio.h>
void main()
{
	int max1(int x,int y);
	int a,b,c,d,e; 
	printf("ÇëÊäÈë a b cµÄÖµ\n");
	scanf ("%d,%d,%d",&a,&b,&c);
	d=max1(a,b);
	e=max1(b,c);
	e=max1(d,e);
	printf("max=%d\n",e);
 } 
 int max1(int x,int y)
 {
 	int z;
 	if(x>y) z=x;
 	else z=y;
 	return(z);
 }
