#include <stdio.h>

int main(void)
{
   int *p, m;
   int *k;
   int x=10;
   
    p=&x;
    k=&x;
    if(p==k) printf("yes");
    else printf("nooo");
    
  
   return 0;
}