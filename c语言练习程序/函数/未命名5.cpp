#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
char string[20];
void convert(int n , int N)//nΪԪ�ص��±꣬NΪ�����ʵ�ʳ��� 
{
   if(0==N)
   {
       printf("your input is empty!\n");
       return;
   }
   if(n < N)   
   {  
      convert(n+1,N);
      printf("%c" ,string[n]);  
   }
}
int main()
{
   printf("please input a string :\n");
   scanf("%s",string);
   printf("please output the string after convert:\n");
   convert( 0 , strlen(string) );
   printf("\n");
   return 0;
}
