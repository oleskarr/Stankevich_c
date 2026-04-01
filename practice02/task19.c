#include <stdio.h>

int main(void)
{
   int counter; 
  int b;
    scanf("%d", &counter);
    for(int i=1; i<=counter; i++)
    {
        b=i*i;
        if(i%2==0) printf("%d",b);

    }
    return 0;
}