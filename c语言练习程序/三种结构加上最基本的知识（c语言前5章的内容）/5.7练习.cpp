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
		printf("该珠宝在%c匣子中\n",ch);	
		/*switch(ch)
			{
			case 'A':printf("该珠宝在A匣子中\n");break;
			case 'B':printf("该珠宝在B匣子中\n");break;
			case 'C':printf("该珠宝在C匣子中\n");break;		
			}*/
		break;
		}
	}
	return 0;
}
