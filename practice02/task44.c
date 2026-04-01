#include <stdio.h>

int main(void)
{
   int n;
   int sum=0;
   
    scanf("%d", &n);
      while(n!=0){
        sum = sum * 10 + (n % 10);
        n/=10; 
    }
   
   printf("%d", sum);
    return 0;
}