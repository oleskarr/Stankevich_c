#include <stdio.h>
#include <ctype.h>
int main(void)
{
   char str[]= "hell1";
   char *p =str;
   int integ=0;
   int chareg=0;
    for (;*p != '\0'; p++){
       if (isdigit(*p)) integ=1;
       if (isalpha(*p)) chareg=1;
    }
    if(integ==1 && chareg==1) printf("alright");
    else printf("wrooooong");
    return 0;
}