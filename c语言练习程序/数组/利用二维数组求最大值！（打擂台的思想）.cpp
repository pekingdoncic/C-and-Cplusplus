#include <stdio.h>
int main()
{
	int max,i,j;
	int a[3][4]={{5,6,57,6},{787},{564,6,654}};
	max=a[0][0];//����̨Ҫע������max����ֵ����Ȼ���bug�� 
	for(i=0;i<3;i++)//��ס����Զ�����������У� 
	{
		for(j=0;j<4;j++)
		{
		if(max<a[i][j])
			max=a[i][j];//���������ֵ�Ļ����㷨���Ǵ���̨�� 
		}
	}
	printf("���ֵΪ��%d",max);
	return 0;
}
