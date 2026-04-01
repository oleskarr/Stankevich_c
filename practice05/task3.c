#include <stdio.h>

int main(void)
{
   char str[]= "hello";
   char *p =str;
   int sum=0;
    while(*p != '\0'){
    sum++;
    p++;
   }
   p=str+sum;
   while(p >= str){
    printf("%c", *p);
    p--;
   }
   return 0;
}