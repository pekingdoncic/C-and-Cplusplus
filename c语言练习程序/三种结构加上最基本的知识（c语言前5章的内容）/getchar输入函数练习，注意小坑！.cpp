#include <stdio.h>
int  main ()                
{ char a,b,c; 
   a=getchar();//这种getchar类型的一个一个输入的时候不能加空格和回车，这在ascll码中也算一个字符！小心！ 
	putchar(a); 
   b=getchar();
   putchar(b); 
   c=getchar();
   putchar(c); 
   //putchar('\n');                
   return 0;
 }
