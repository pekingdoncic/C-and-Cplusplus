#include <stdio.h>
#include <stdlib.h>
typedef struct Student 
{
	int num;
	struct Student *next;
}s;
int main()
{
	int n=0;
	s *a,*b,*head;
	a=b=(s*)malloc(sizeof(s));
	head=NULL;
	scanf("%d",&a->num);
	while((a->num)!=0)
	{
		n++;
		if(n==1) 
			head=a;
		else
			b->next=a;
			b=a;
		a==(s*)malloc(sizeof(s));
	scanf("%d",&a->num);//&a->num
	printf("1\n");
	}
	b->next=NULL;
	printf("2\n");
	a=head;
	while(a->num!=0)
	{
		printf("%d",a->num);
		printf("3\n");
		a=a->next;
	}
	return 0;
} 
