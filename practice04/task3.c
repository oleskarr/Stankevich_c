#include <stdio.h>

int main(void)
{
   int *p, m;
   int *k;
   int x=10;
   int c =20;
    p=&x;
    k=&c;
    m=x;
    *p=c;
    *k=m;
    
    
   printf("%d  %d", x ,c);
   return 0;
}