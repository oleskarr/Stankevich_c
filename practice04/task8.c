#include <stdio.h>

int main(void)
{
   int **p;
   int *k;
   int x=10;
   k=&x;
   p=&k;
   **p=20;
    
  
   return 0;
}