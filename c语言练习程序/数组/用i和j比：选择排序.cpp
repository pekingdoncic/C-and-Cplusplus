#include <stdio.h>
#define n 10
int main()
{
	int a[n],max[n],i,j,t;
	printf("����ԭʼ���ݣ�");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]<a[j])//���������Ϥ������j��j+1�Ľṹ����һ����
		//��j=0���ֽṹд�Ļ����Ƚϵ��߼��������⣬�ڶ����ڲ�ѭ����ʱ���һ������û�в���Ƚϣ�������ף� 
		//�������i��jȥ�Ƚϣ� 
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
