#include <stdio.h>
int main()
{
//Ҫ�������ַ������Լ�����Ļ��Ӹ�scanf�ͺ���
	 int mystrcmp( char *p,char *q);
	 char  *a="abc"; 
	 char  *b="Abc";
	 int result ; 
	 result=mystrcmp(a,b);
	 if(result == 0)
	 {
	 	printf("�����ַ������\n");
	 }
	 else
	 {
	 	printf("%d \n",result);
	 }
	return 0;
}
int mystrcmp(char *p,char *q){
	while(*p==*q && *p != '\0')
	{
		p++;
		q++;
	}
	return *q-*p;
}
/*while ((*dest == *str)&&*dest!='\0')
 {
  dest++;
  str++;
 }
  if( *dest < *str)
  {
   return -1;
  }
  else if (*dest>*str)
  {
   return 1;
  }
  return 0;
}*/

