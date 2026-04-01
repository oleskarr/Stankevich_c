#include <stdio.h>

int main(void)
{
   int *p;
   int x=10;
    p=&x;
    *p=45;
   printf("%d", x);
   return 0;
}