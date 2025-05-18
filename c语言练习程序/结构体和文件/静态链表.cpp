#include <stdio.h>
typedef struct Student 
{
	int num;
	struct Student *next;
}S;
int main()
{
	S a,b,c,*p,*head;
	a.num=10;a.next=&b;
	b.num=20;b.next=NULL;
	head=&a;
	for(p=head;p!=NULL;p=(*p).next)
	{
		printf("%d\t",p->num);
	}
	return 0;
} 
