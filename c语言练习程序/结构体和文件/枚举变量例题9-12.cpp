#include <stdio.h>
int main()
{
	enum Color{red,yellow,blue,white,black};
	enum Color i,j,k,p;
	int n=0,t;//��ʼ����Ҫ��ö�ٱ�����ö�ٳ���
	for(i=red;i<=black;i=(enum Color)((int(i)+1)))
	{
		for(j=red;j<=black;j=(enum Color)((int(j)+1)))
		{
			if(i!=j)
			{
				for(k=red;k<=black;k=(enum Color)((int(k)+1)))
				{
					if((k!=i)&&(k!=j))
					{
						n++;
						printf("%-3d",n);
						for(t=1;t<=3;t++)
						{
							switch(t)
							{
								case 1:p=i;break;
								case 2:p=j;break;
								case 3:p=k;break;
								default :break;
							}
						}
						switch(p)
						{
							case red:printf("��\n"); break; 
							case yellow:printf("��\n"); break;
							case blue:printf("��\n"); break;
							case white:printf("��\n"); break;
							case black:printf("��\n"); break;
							default :break;
						}
					}
					
				}
				putchar(10);
			}
		}
	}
	printf("\n����Ϊ:%d\n",n);
	return 0;
}
