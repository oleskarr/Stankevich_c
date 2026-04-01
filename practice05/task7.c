#include <stdio.h>
#include <string.h>


int main(void)
{
    char a;
    scanf("%c",&a);
   char str[]= "hello";
   char *p =str;
   char rts[]=" ";
   char *c= rts;
   while(*p != '\0'){
    if(*p!=a){
        *c=*p;
        c++;
    }
    p++;
   }
   *c='\0';
   c=rts;
   while(*c != '\0'){
    printf("%c", *c);
    c++;
   }
   return 0;
}