#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	FILE * fp;
	fp = fopen("test.txt", "w");  // fopen_s(&fp,"test.txt", "w"); ����ȫ����������
	if(!fp)
	{
		cout<<"cannot open this file.\n";
		exit(0);  //����0�����˳���������0�������˳�������return�����ظ�����ϵͳ
	}
	int temp = fclose(fp);  //fclose�ɹ�������0������EOF
	if(temp == 0)
		cout<<"succeed\n";
	else
		cout<<"fail\n";
	
	return 0;
}