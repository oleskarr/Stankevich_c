#include <stdio.h>
#include <ctype.h>

int main(void)
{
   char str[]= "hello world";
   char *p =str;
   while(*p != '\0'){
    printf("%c", *p);
    p++;
    if(*p == '\0') break;
     *p=toupper(*p);
     printf("%c", *p);
     p++;
   }
   return 0;
}