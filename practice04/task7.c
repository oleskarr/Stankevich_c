#include <stdio.h>

int main(void)
{
   int *p;
   int *k;
   int x=10;
   k=&p;
   *k=x;
   printf("%d", *p);
    
  
   return 0;
}