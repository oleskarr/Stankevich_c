#include <stdio.h>
#include <ctype.h>
int main(void)
{
   char str[]= "hellooooo";
   char *p =str;
   char rts[]=" ";
   char *c =rts;
   int integ=0;
   int b=strlen(str);
   if (b%2!=0) b+=1;
   int i=0;
   p+=b/2;

   for(;*c<=rts+b; c++){
    *c='*p';
    p++;
    printf("%c",*c);
   }
   
    return 0;
}