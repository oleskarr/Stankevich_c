#include <stdio.h>

int main(void)
{
   char str[]= "hello";
   char *p =str;
  
   char rts[]="oaieu";
    char *c= rts;
   
    for (;*p != '\0'; p++){
        c=rts;
        for(;*c !='\0';c++){
            if (*p==*c) *p='*';
        }
    }
    p-=5;
   while(*p != '\0'){
    
    printf("%c", *p);
    p++;
   }
   return 0;
}