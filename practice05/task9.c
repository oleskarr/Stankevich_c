#include <stdio.h>
#include <ctype.h>
int main(void)
{
   char str[]= "hellooooo";
   char *p =str;
   int integ=0;
   
    for (;*p != '\0'; p++){
       if(*p==*p++) integ=1;
    }
    if(integ==1) printf("alright");
    else printf("wrooooong");
    return 0;
}