#include <stdio.h>
int main()
{
//要想两个字符串是自己输入的话加个scanf就好啦
	 int mystrcmp( char *p,char *q);
	 char  *a="abc"; 
	 char  *b="Abc";
	 int result ; 
	 result=mystrcmp(a,b);
	 if(result == 0)
	 {
	 	printf("两个字符串相等\n");
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

