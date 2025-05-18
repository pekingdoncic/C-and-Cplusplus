#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ÇëÊäÈëa£¬b£¬cµÄÖµ:\n");
	scanf("%d %d %d",&a,&b,&c);
	int max;
	if(b>c){
		if(a>b){
			max=a;
		}
		else{
		max=b;
		}	
		}
	else{
		if(a<c){
		max=c;
		}
	else{
		max=a;
		}
		}
		printf("%d",max);
 return 0;		
 } 
 
