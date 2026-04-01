#include <stdio.h>

int main(void)
{
   char str[]= "hello";
   char *p =str;
   int sum =0;
   while(*p != '\0'){
    sum++;
    p++;
   }
   return 0;
}