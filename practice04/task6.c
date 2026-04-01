#include <stdio.h>

int main(void)
{
   int *p;
   int *k;
   int x=10;
   k=&x;
   *p=*k;
   printf("%d", *p);
    
  
   return 0;
}