#include <stdio.h>
int main()
{
	char ch;
	int sum;
	for(ch='A';ch<='C';ch++)
	{
		sum=(ch!='A')+(ch=='A')+(ch!='C');
		printf("1\n");
		if(sum==1)
		{
		printf("���鱦��%cϻ����\n",ch);	
		/*switch(ch)
			{
			case 'A':printf("���鱦��Aϻ����\n");break;
			case 'B':printf("���鱦��Bϻ����\n");break;
			case 'C':printf("���鱦��Cϻ����\n");break;		
			}*/
		break;
		}
	}
	return 0;
}
