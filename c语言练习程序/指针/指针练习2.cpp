#include <stdio.h>
int main()
{
	void search(float (*p)[4],int n); 
	float a[3][4]={{99,98,99,100},{90,89,94,96},{88,99,100,95}};//�ҵ���Ϊ
	//a��2���� 
	search (a,3);
	return 0;
}
void search(float (*p)[4],int n)
{
	int i,j,f=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<4;j++)
		{
			if(*(*(p+i)+j)<90)
			{
				f=1;
			}
		}
		if(f==1)
		{
			for(j=0;j<4;j++)
			printf("%-5.1f\t",*(*(p+i)+j)); 
		}
		putchar('\n');
	}
}
//�������֮���Գ������⣬���߼����ִ���i����������������϶���3��
//�����Щ�ɼ�Ӧ�÷������ѭ���У� �߼�һ��Ҫ�ԣ� 
